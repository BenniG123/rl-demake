#define FIELD_WIDTH 700
#define FIELD_HEIGHT 216
#define SCREEN_WIDTH 256
#define SPRITE_DRAW_WIDTH 236
#define SCREEN_HEIGHT 240
#define BALL_CAMERA_PAN_MIN_THRESHOLD 60
#define BALL_CAMERA_PAN_MAX_THRESHOLD 196
#define CAMERA_MAX_POSITION FIELD_WIDTH-SCREEN_WIDTH+24
#define ACCEL 1
#define JUMP_ACCEL 5
#define DECCEL 1
#define BOOST_ACCEL 4
#define MAX_POS_VELOCITY 3
#define MAX_NEG_VELOCITY -3
#define DECCEL_FREQ 3
#define FPS 60
#define UNSIGNED_INT_OVERFLOW 750 

void rl_init(void);

void rl_physics_step(void);

void rl_draw_screen(void);

void rl_car_1_input(void);

void rl_car_2_input(void);