//this example shows metasprite use, two pads polling,
//and simple collision detection that changes palette

#include "neslib.h"
#include "rl_types.h"
#include "rl_engine.h"
#include "rl_metasprites.h"

// Screen Name Tables
// #include "title_name.h"
// #include "main_menu_name.h"

// Stadium Name Tables
// #include "dfh_stadium_name.h"
// #include "beckwith_park_nam.h"

// For drawing the sprites on the correct spot on the screen
static unsigned char ball_screen_x;
static unsigned char ball_screen_y;
static unsigned char car_1_screen_x;
static unsigned char car_1_screen_y;
static unsigned char car_2_screen_x;
static unsigned char car_2_screen_y;

// Controller input
static unsigned char pad;

// Sprite drawing
static unsigned char spr;

// Cars, Ball, and Game
static car_t car_1;
static car_t car_2;
static ball_t ball;
static game_t game;

// first player metasprite array
// unsigned char* const sprListPlayer1[]={ car_1_sprite_u, car_1_sprite_lu, car_1_sprite_l, car_1_sprite_ld, car_1_sprite_d};

// second player metasprite array
// const unsigned char* const sprListPlayer2[]={ car_2_sprite_u, car_2_sprite_lu, car_2_sprite_l, car_2_sprite_ld, car_2_sprite_d};

void main(void)
{
	ppu_on_all();//enable rendering

	// initialize game variables
	// rl_init();

	car_1.x = 50;
	car_1.y = 50;
	car_1.z = 0;
	// car_1.vel_x = 0;
	// car_1.vel_y = 0;
	// car_1.vel_z = 0;

	car_2.x = 150;
	car_2.y = 50;
	car_2.z = 0;
	// car_2.vel_x = 0;
	// car_2.vel_y = 0;
	// car_2.vel_z = 0;

	ball.x = 100;
	ball.y = 100;
	ball.z = 0;
	// ball.vel_x = 0;
	// ball.vel_y = 0;
	// ball.vel_z = 0;

	//init other vars

	while(1)
	{
		ppu_wait_frame();//wait for next TV frame

		// Set pallette colors
		pal_col(17,0x21); //set first sprite color
		pal_col(21,0x26); //set second sprite color

		// Draw metasprites
		spr=0;

		// Translate worldspace to screen space
		ball_screen_x = ball.x - game.camera_x;
		ball_screen_y = ball.y + ball.z;
		car_1_screen_x = car_1.x - game.camera_x;
		car_1_screen_y = car_1.y + car_1.z;
		car_2_screen_x = car_2.x - game.camera_x;
		car_2_screen_y = car_2.y + car_2.z;

		// Draw each sprite
		spr=oam_meta_spr(ball_screen_x, ball_screen_y, spr, ball_sprite_l);
		spr=oam_meta_spr(car_1_screen_x,  car_1_screen_y, spr,car_1_sprite_l);
		spr=oam_meta_spr(car_2_screen_x, car_2_screen_y, spr, car_2_sprite_l);

		// Player 1 input
		pad=pad_poll(0);

		if(pad&PAD_LEFT  && car_1.x >   0) car_1.x -= 2;
		if(pad&PAD_RIGHT && car_1.x < 232) car_1.x += 2;
		if(pad&PAD_UP    && car_1.y >   0) car_1.y -= 2;
		if(pad&PAD_DOWN  && car_1.y < 212) car_1.y += 2;

		// Player 2 input
		pad=pad_poll(1);

		if(pad&PAD_LEFT  && car_2.x >   0) car_2.x -= 2;
		if(pad&PAD_RIGHT && car_2.x < 232) car_2.x += 2;
		if(pad&PAD_UP    && car_2.y >   0) car_2.y -= 2;
		if(pad&PAD_DOWN  && car_2.y < 212) car_2.y += 2;
	}
}

void rl_init(void) {
	// Initialize physics position and velocity
	car_1.x = 50;
	car_1.y = 50;
	car_1.z = 0;
	car_1.vel_x = 0;
	car_1.vel_y = 0;
	car_1.vel_z = 0;
	car_1.is_boosting = 0;
	car_1.boost = 33;

	car_2.x = 150;
	car_2.y = 50;
	car_2.z = 0;
	car_2.vel_x = 0;
	car_2.vel_y = 0;
	car_2.vel_z = 0;
	car_2.is_boosting = 0;
	car_2.boost = 33;

	ball.x = 100;
	ball.y = 100;
	ball.z = 0;
	ball.vel_x = 0;
	ball.vel_y = 0;
	ball.vel_z = 0;

	// First camera position
	game.camera_x = 0;

	// Seconds left in gameplay
	game.time = 300;

	// Counter in each second (60 Hz gameplay)
	game.second_counter = 0;

	// Init player scores
	game.score_one = 0;
	game.score_two = 0;
}