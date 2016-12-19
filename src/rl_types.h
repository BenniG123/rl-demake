typedef struct game_t {
	unsigned int time;
	unsigned char second_counter;
	unsigned char score_one;
	unsigned char score_two;
	unsigned int camera_x;
} game_t;

typedef struct car_t {
	unsigned int x;
	unsigned int y;
	unsigned int z;
	signed char vel_x;
	signed char vel_y;
	signed char vel_z;
	unsigned char direction;
	unsigned char height;
	unsigned char boost;
	unsigned char is_boosting;
	unsigned char flip_state;
} car_t;

typedef struct ball_t {
	unsigned int x;
	unsigned int y;
	unsigned int z;
	signed char vel_x;
	signed char vel_y;
	signed char vel_z;
	unsigned char direction;
	unsigned char height;
} ball_t;