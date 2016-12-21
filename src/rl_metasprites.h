// Definitions for all metasprites, data structure explained in neslib.h
#define CAR_BLUE_L 0
#define CAR_BLUE_D 1
#define CAR_BLUE_U 2
#define CAR_BLUE_R 3
#define BALL 4
#define LEFT_ARROW 4
#define RIGHT_ARROW 4
#define CAR_RED_L 5
#define CAR_RED_D 6
#define CAR_RED_U 7
#define CAR_RED_R 8

// Not a meta sprite but I'm defining its ID here anyways
#define SHADOW 0x1F

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
	128,

	-16,-12,0x04,2,
	- 8,-12,0x05,2,
	  0,-12,0x06,2,
	  8,-12,0x07,2,
	-16,- 4,0x14,2,
	- 8,- 4,0x15,2,
	  0,- 4,0x16,2,
	  8,- 4,0x17,2,
	-16,  4,0x24,2,
	- 8,  4,0x25,2,
	  0,  4,0x26,2,
	  8,  4,0x27,2,
	128,

	-12,-12,0x0c,2,
	- 4,-12,0x0d,2,
	  4,-12,0x0e,2,
	-12,- 4,0x1c,2,
	- 4,- 4,0x1d,2,
	  4,- 4,0x1e,2,
	-12,  4,0x2c,2,
	- 4,  4,0x2d,2,
	  4,  4,0x2e,2,
	128,

	-12,-12,0x3c,2,
	- 4,-12,0x3d,2,
	  4,-12,0x3e,2,
	-12,- 4,0x4c,2,
	- 4,- 4,0x4d,2,
	  4,- 4,0x4e,2,
	-12,  4,0x5c,2,
	- 4,  4,0x5d,2,
	  4,  4,0x5e,2,
	128,

	  8,-12,0x04,2|OAM_FLIP_H,
	  0,-12,0x05,2|OAM_FLIP_H,
	- 8,-12,0x06,2|OAM_FLIP_H,
	-16,-12,0x07,2|OAM_FLIP_H,
	  8,- 4,0x14,2|OAM_FLIP_H,
	  0,- 4,0x15,2|OAM_FLIP_H,
	- 8,- 4,0x16,2|OAM_FLIP_H,
	-16,- 4,0x17,2|OAM_FLIP_H,
	  8,  4,0x24,2|OAM_FLIP_H,
	  0,  4,0x25,2|OAM_FLIP_H,
	- 8,  4,0x26,2|OAM_FLIP_H,
	-16,  4,0x27,2|OAM_FLIP_H,
	128

};

const unsigned char* const metasprite_list[]={
	metasprite_data+0,
	metasprite_data+49,
	metasprite_data+86,
	metasprite_data+123,
	metasprite_data+172,
	metasprite_data+209,
	metasprite_data+258,
	metasprite_data+295,
	metasprite_data+332
};

