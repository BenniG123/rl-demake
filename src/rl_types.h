struct game_t {
	unsigned int time;
	unsigned char second_counter;
};

struct car_t {
	unsigned int pos_x;
	unsigned int pos_y;
	unsigned int pos_z;
	signed char vel_x;
	signed char vel_y;
	signed char vel_z;
	unsigned char direction;
	unsigned char height;
	unsigned char boost;
	unsigned char is_boosting;
	unsigned char flip_state;
};

struct ball_t {
	unsigned int pos_x;
	unsigned int pos_y;
	unsigned int pos_z;
	signed char vel_x;
	signed char vel_y;
	signed char vel_z;
	unsigned char direction;
	unsigned char height;
};