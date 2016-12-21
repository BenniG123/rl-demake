#define FIELD_WIDTH 700
#define FIELD_HEIGHT 216
#define SCREEN_WIDTH 256
#define SPRITE_DRAW_WIDTH 240
#define SCREEN_HEIGHT 240
#define CAR_WIDTH 32
#define CAR_HEIGHT 24
#define BALL_HEIGHT 5 // The Z height of the ball
#define BALL_CAMERA_PAN_MIN_THRESHOLD 60
#define BALL_CAMERA_PAN_MAX_THRESHOLD 196
#define CAMERA_MAX_POSITION FIELD_WIDTH-SCREEN_WIDTH+24
#define ACCEL 1
#define JUMP_ACCEL 5
#define DECCEL 1
#define BOOST_ACCEL 4
#define MAX_POS_VELOCITY 3
#define MAX_POS_VELOCITY_BOOST 7
#define MAX_NEG_VELOCITY -3
#define MAX_NEG_VELOCITY_BOOST -7
#define CAR_DECCEL_FREQ 3
#define BALL_DECCEL_FREQ 12
#define FPS 60
#define UNSIGNED_INT_OVERFLOW 750 

void init(void);

void gravity(void);

void friction(void);

void collisions(void);

void physics_step(void);

void draw_screen(void);

void car_1_input(void);

void car_2_input(void);