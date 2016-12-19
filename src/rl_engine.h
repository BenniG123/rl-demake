#define FIELD_WIDTH 700
#define FIELD_HEIGHT 250
#define SCREEN_WIDTH 256
#define SPRITE_DRAW_WIDTH 236
#define SCREEN_HEIGHT 240
#define ACCEL 1
#define DECCEL 1
#define BOOST_ACCEL 4
#define MAX_POS_VELOCITY 3
#define MAX_NEG_VELOCITY -3
#define DECCEL_FREQ 3
#define FPS 60

void rl_init(void);

void rl_physics_step(void);

void rl_draw_screen(void);