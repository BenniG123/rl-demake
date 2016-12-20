// Definitions for all metasprites, data structure explained in neslib.h
#define RL_CAR_BLUE_L 0
#define RL_CAR_BLUE_D 1
#define RL_CAR_BLUE_U 2
#define RL_CAR_BLUE_R 3
#define RL_BALL 4

const unsigned char metasprite_data[]={

	-16,-12,0x04,1,
	- 8,-12,0x05,1,
	  0,-12,0x06,1,
	  8,-12,0x07,1,
	-16,- 4,0x14,1,
	- 8,- 4,0x15,1,
	  0,- 4,0x16,1,
	  8,- 4,0x17,1,
	-16,  4,0x24,1,
	- 8,  4,0x25,1,
	  0,  4,0x26,1,
	  8,  4,0x27,1,
	128,

	-12,-12,0x0c,1,
	- 4,-12,0x0d,1,
	  4,-12,0x0e,1,
	-12,- 4,0x1c,1,
	- 4,- 4,0x1d,1,
	  4,- 4,0x1e,1,
	-12,  4,0x2c,1,
	- 4,  4,0x2d,1,
	  4,  4,0x2e,1,
	128,

	-12,-12,0x3c,1,
	- 4,-12,0x3d,1,
	  4,-12,0x3e,1,
	-12,- 4,0x4c,1,
	- 4,- 4,0x4d,1,
	  4,- 4,0x4e,1,
	-12,  4,0x5c,1,
	- 4,  4,0x5d,1,
	  4,  4,0x5e,1,
	128,

	  8,-12,0x04,1|OAM_FLIP_H,
	  0,-12,0x05,1|OAM_FLIP_H,
	- 8,-12,0x06,1|OAM_FLIP_H,
	-16,-12,0x07,1|OAM_FLIP_H,
	  8,- 4,0x14,1|OAM_FLIP_H,
	  0,- 4,0x15,1|OAM_FLIP_H,
	- 8,- 4,0x16,1|OAM_FLIP_H,
	-16,- 4,0x17,1|OAM_FLIP_H,
	  8,  4,0x24,1|OAM_FLIP_H,
	  0,  4,0x25,1|OAM_FLIP_H,
	- 8,  4,0x26,1|OAM_FLIP_H,
	-16,  4,0x27,1|OAM_FLIP_H,
	128,

	-12,-12,0x6c,0,
	- 4,-12,0x6d,0,
	  4,-12,0x6e,0,
	-12,- 4,0x7c,0,
	- 4,- 4,0x7d,0,
	  4,- 4,0x7e,0,
	-12,  4,0x8c,0,
	- 4,  4,0x8d,0,
	  4,  4,0x8e,0,
	128

};

const unsigned char* const metasprite_list[]={
	metasprite_data+0,
	metasprite_data+49,
	metasprite_data+86,
	metasprite_data+123,
	metasprite_data+172
};