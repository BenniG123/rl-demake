typedef enum {
	LLLL, LLLU, LLUU, LUUU, UUUU, RUUU, RRUU, RRRU, RRRR, RRRD, RRDD, RDDD, DDDD, LDDD, LLDD, LLLD
} DIRECTION;

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
	signed char z;
	signed char vel_x;
	signed char vel_y;
	signed char vel_z;
	DIRECTION direction;
	unsigned char height;
	unsigned char boost;
	unsigned char is_boosting;
	unsigned char flip_state;
	unsigned char jump_counter;
} car_t;

typedef struct ball_t {
	unsigned int x;
	unsigned int y;
	signed char z;
	signed char vel_x;
	signed char vel_y;
	signed char vel_z;
	DIRECTION direction;
	unsigned char height;
} ball_t;