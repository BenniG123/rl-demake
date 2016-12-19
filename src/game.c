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
static unsigned int ball_screen_x;
static unsigned char ball_screen_y;
static unsigned int car_1_screen_x;
static unsigned char car_1_screen_y;
static unsigned int car_2_screen_x;
static unsigned char car_2_screen_y;

// Controller input
static unsigned char pad;

// Sprite drawing
static unsigned char spr;

// Decceleration variable
static unsigned char decel;

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
	rl_init();

	while(1)
	{
		ppu_wait_frame();//wait for next TV frame
		
		++game.second_counter;
		if (game.second_counter == FPS) {
			game.second_counter = 0;
			--game.time;
		}

		rl_physics_step();
		rl_draw_screen();
	}
}

void rl_draw_screen(void) {
	// Set pallette colors
	pal_col(17,0x21); //set first sprite color
	pal_col(21,0x26); //set second sprite color
	pal_col(25,0x2b); //set third sprite color

	// Translate worldspace to screen space
	ball_screen_x = ball.x - game.camera_x;
	ball_screen_y = ball.y + ball.z;
	car_1_screen_x = car_1.x - game.camera_x;
	car_1_screen_y = car_1.y + car_1.z;
	car_2_screen_x = car_2.x - game.camera_x;
	car_2_screen_y = car_2.y + car_2.z;

	// Draw metasprites
	spr=0;

	// TODO - Move Camera
	/* if (ball.x < game.camera_x || ball_screen_x > SPRITE_DRAW_WIDTH) {
		// Move Camera
	} */

	// Draw ball
	spr = oam_meta_spr(ball_screen_x, ball_screen_y, spr, ball_sprite_l);

	if (car_1.x < game.camera_x) {
		// Draw left arrow
		spr = oam_meta_spr(0, car_1_screen_y, spr, ball_sprite_l);
	}
	else if (car_1_screen_x > SPRITE_DRAW_WIDTH) {
		// Draw right arrow
		spr = oam_meta_spr(SPRITE_DRAW_WIDTH, car_1_screen_y, spr, ball_sprite_l);
	}
	else {
		// Draw car
		spr = oam_meta_spr(car_1_screen_x, car_1_screen_y, spr,car_1_sprite_l);
	}

	if (car_2.x < game.camera_x) {
		// Draw left arrow
		spr = oam_meta_spr(car_2_screen_x, car_2_screen_y, spr, ball_sprite_l);
	}
	else if (car_2_screen_x > SPRITE_DRAW_WIDTH) {
		// Draw right arrow
		spr = oam_meta_spr(SPRITE_DRAW_WIDTH, car_2_screen_y, spr, ball_sprite_l);
	}
	else {
		// Draw car
		spr = oam_meta_spr(car_2_screen_x, car_2_screen_y, spr, car_2_sprite_l);
	}
}

void rl_init(void) {
	// Initialize physics position and velocity
	car_1.x = 100;
	car_1.y = 50;
	car_1.z = 0;
	car_1.vel_x = 0;
	car_1.vel_y = 0;
	car_1.vel_z = 0;
	car_1.is_boosting = 0;
	car_1.boost = 33;
	car_1.direction = LLLL;

	car_2.x = 200;
	car_2.y = 50;
	car_2.z = 0;
	car_2.vel_x = 0;
	car_2.vel_y = 0;
	car_2.vel_z = 0;
	car_2.is_boosting = 0;
	car_2.boost = 33;
	car_2.direction = RRRR;

	ball.x = 150;
	ball.y = 100;
	ball.z = 0;
	ball.vel_x = 0;
	ball.vel_y = 0;
	ball.vel_z = 0;

	// First camera position
	game.camera_x = 100;

	// Seconds left in gameplay
	game.time = 300;

	// Counter in each second (60 Hz gameplay)
	game.second_counter = 0;

	// Init player scores
	game.score_one = 0;
	game.score_two = 0;
}

void rl_physics_step(void) {
	// Player 1 input
	pad = pad_poll(0);
	decel = game.second_counter % DECCEL_FREQ == 0;

	if (pad&PAD_LEFT  && car_1.vel_x > MAX_NEG_VELOCITY) {
		car_1.vel_x -= ACCEL;
	}
	else if (pad&PAD_RIGHT && car_1.vel_x < MAX_POS_VELOCITY) {
		car_1.vel_x += ACCEL;
	}
	else if (pad&PAD_A && car_1.z == 0) {
		// Jump
	}
	// DECCEL once ever DECCEL_FREQ frames
	else if (car_1.z == 0 && car_1.vel_x > 0 && decel) {
		car_1.vel_x -= DECCEL;
	}
	// DECCEL once ever DECCL_FREQ frames
	else if (car_1.z == 0 && car_1.vel_x < 0 && decel) {
		car_1.vel_x += DECCEL;
	}

	if (pad&PAD_UP  && car_1.vel_y > MAX_NEG_VELOCITY) {
		car_1.vel_y -= ACCEL;
	}
	else if (pad&PAD_DOWN && car_1.vel_y < MAX_POS_VELOCITY) {
		car_1.vel_y += ACCEL;
	}
	else if (pad&PAD_A && car_1.z == 0) {
		// Jump
	}
	// DECCEL once ever DECCEL_FREQ frames
	else if (car_1.z == 0 && car_1.vel_y > 0 && decel) {
		car_1.vel_y -= DECCEL;
	}
	// DECCEL once ever DECCL_FREQ frames
	else if (car_1.z == 0 && car_1.vel_y < 0 && decel) {
		car_1.vel_y += DECCEL;
	}


	car_1.x += car_1.vel_x;
	car_1.y += car_1.vel_y;

	// Player 2 input
	pad = pad_poll(1);

	if(pad&PAD_LEFT  && car_2.vel_x > MAX_NEG_VELOCITY) car_2.vel_x -= ACCEL;
	if(pad&PAD_RIGHT && car_2.vel_x < MAX_POS_VELOCITY) car_2.vel_x += ACCEL;
	if(pad&PAD_UP    && car_2.vel_y > MAX_NEG_VELOCITY) car_2.vel_y -= ACCEL;
	if(pad&PAD_DOWN  && car_2.vel_y < MAX_POS_VELOCITY) car_2.vel_y += ACCEL;

	car_2.x += car_2.vel_x;
	car_2.y += car_2.vel_y;

}