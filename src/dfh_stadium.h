const unsigned char nametable[950]={
0x00,0x3f,0x7d,0x2f,0x4f,0x0f,0x3f,0x2f,0x5f,0x0f,0x7d,0x2f,0x2f,0x3f,0x3f,0x4f,
0x2f,0x3f,0x3f,0x4f,0x4f,0x3f,0x0f,0x5f,0x2f,0x3f,0x7d,0x4f,0x4f,0x0f,0x3f,0x2f,
0x2f,0x0f,0x3f,0x4f,0x5f,0x0f,0x7d,0x4f,0x5f,0x3f,0x7d,0x5f,0x5f,0x3f,0x3f,0x2f,
0x4f,0x7d,0x0f,0x4f,0x2f,0x0f,0x7d,0x4f,0x2f,0x3f,0x3f,0x2f,0x2f,0x0f,0x0f,0x5f,
0x4f,0x0f,0x0f,0x4f,0x4f,0x3f,0x7d,0x4f,0x4f,0x3f,0x0f,0x5f,0x5f,0x0f,0x7d,0x4f,
0x4f,0x0f,0x3f,0x4f,0x5f,0x0f,0x7d,0x2f,0x5f,0x0f,0x7d,0x4f,0x2f,0x0f,0x3f,0x2f,
0x4f,0x0f,0x3f,0x2f,0x5f,0x3f,0x0f,0x5f,0x4f,0x3f,0x7d,0x2f,0x2f,0x3f,0x3f,0x4f,
0x2f,0x3f,0x3f,0x2f,0x4f,0x0f,0x3f,0x2f,0x2f,0x0f,0x3f,0x2f,0x4f,0x3f,0x7d,0x2f,
0x5f,0x7d,0x3f,0x2f,0x5f,0x3f,0x0f,0x2f,0x4f,0x0f,0x3f,0x2f,0x4f,0x0f,0x7d,0x4f,
0x4f,0x0f,0x7d,0x5f,0x2f,0x3f,0x0f,0x2f,0x5f,0x3f,0x3f,0x5f,0x5f,0x3f,0x0f,0x2f,
0x5f,0x3f,0x3f,0x4f,0x2f,0x7d,0x0f,0x5f,0x4f,0x0f,0x0f,0x5f,0x4f,0x0f,0x3f,0x4f,
0x2f,0x0f,0x0f,0x2f,0x4f,0x3f,0x0f,0x4f,0x4f,0x0f,0x0f,0x4f,0x2f,0x3f,0x0f,0x2f,
0x2f,0x3f,0x0f,0x0f,0x3f,0x3f,0x0f,0x0f,0x3f,0x00,0x03,0x0f,0x3f,0x0f,0x4f,0x2f,
0x3f,0x0f,0x2f,0x2f,0x4f,0x2f,0x2f,0x4f,0x4f,0x5f,0x4f,0x2f,0x5f,0x4f,0x5f,0x5f,
0x3f,0x0f,0x0f,0x3f,0x0f,0x0f,0x3f,0x0f,0x0f,0x3f,0x0f,0x3f,0x00,0x02,0x4f,0x4f,
0x3f,0x7d,0x4f,0x2f,0x2f,0x5f,0x4f,0x2f,0x4f,0x4f,0x2f,0x2f,0x4f,0x5f,0x4f,0x5f,
0x3f,0x0f,0x5f,0x5f,0x7d,0x3f,0x5f,0x4f,0x3f,0x0f,0x4f,0x2f,0x0f,0x7d,0x2f,0x4f,
0x3f,0x3f,0x4f,0x2f,0x0f,0x7d,0x2f,0x4f,0x0f,0x0f,0x2f,0x5f,0x0f,0x7d,0x2f,0x4f,
0x0f,0x7d,0x2f,0x2f,0x3f,0x3f,0x2f,0x4f,0x7d,0x0f,0x2f,0x4f,0x0f,0x3f,0x2f,0x4f,
0x0f,0x3f,0x2f,0x2f,0x0f,0x3f,0x2f,0x5f,0x3f,0x7d,0x4f,0x4f,0x0f,0x3f,0x4f,0x2f,
0x0f,0x0f,0x4f,0x4f,0x0f,0x0f,0x4f,0x4f,0x3f,0x0f,0x2f,0x2f,0x7d,0x0f,0x2f,0x2f,
0x7d,0x0f,0x2f,0x4f,0x3f,0x3f,0x2f,0x2f,0x0f,0x3f,0x4f,0x2f,0x7d,0x7d,0x4f,0x5f,
0x3f,0x0f,0x5f,0x5f,0x3f,0x3f,0x4f,0x2f,0x3f,0x3f,0x4f,0x4f,0x0f,0x0f,0x4f,0x5f,
0x0f,0x3f,0x2f,0x4f,0x3f,0x7d,0x2f,0x4f,0x7d,0x0f,0x2f,0x4f,0x0f,0x7d,0x2f,0x4f,
0xffffff8f,0xffffff8f,0x5f,0x2f,0x3f,0x7d,0x2f,0x5f,0x7d,0x3f,0x4f,0x2f,0x0f,0x7d,0xffffffab,0x00,
0x02,0xffffffce,0x2f,0x2f,0x0f,0x3f,0x5f,0x2f,0x0f,0x0f,0x2f,0x4f,0x0f,0x7d,0xffffff8f,0x00,
0x03,0x4f,0x2f,0x3f,0x0f,0x2f,0x4f,0x0f,0x0f,0x4f,0x2f,0x0f,0x3f,0xffffffab,0x00,0x03,
0x4f,0x2f,0x3f,0x7d,0x4f,0x4f,0x7d,0x3f,0x4f,0x4f,0x0f,0x3f,0xffffff8f,0x00,0x03,0x0f,
0x3f,0x0f,0x3f,0x3f,0x0f,0x3f,0x00,0x02,0x0f,0x3f,0x0f,0xffffffab,0x00,0x03,0x2f,0x2f,
0x4f,0x2f,0x4f,0x2f,0x2f,0x4f,0x2f,0x4f,0x2f,0x4f,0xffffff8f,0x00,0x03,0x3f,0x3f,0x0f,
0x3f,0x0f,0x3f,0x3f,0x0f,0x3f,0x0f,0x3f,0x0f,0xffffffab,0x00,0x03,0x2f,0x4f,0x2f,0x00,
0x03,0x4f,0x2f,0x00,0x02,0x4f,0x2f,0xffffff8f,0x00,0x03,0x4f,0x2f,0x3f,0x0f,0x2f,0x2f,
0x0f,0x3f,0x2f,0x4f,0x0f,0x0f,0xffffffab,0x00,0x03,0x2f,0x5f,0x3f,0x3f,0x4f,0x5f,0x0f,
0x7d,0x2f,0x4f,0x7d,0x0f,0xffffff8f,0x00,0x03,0x2f,0x5f,0x7d,0x0f,0x4f,0x2f,0x0f,0x3f,
0x4f,0x2f,0x7d,0x0f,0xffffffab,0x00,0x03,0x5f,0x5f,0x7d,0x0f,0x2f,0x2f,0x0f,0x7d,0x2f,
0x4f,0x0f,0x3f,0xffffff8f,0xffffff8f,0x0f,0x3f,0x4f,0x2f,0x3f,0x0f,0x5f,0x2f,0x0f,0x0f,0x2f,
0x4f,0x0f,0x3f,0x4f,0x2f,0x3f,0x7d,0x2f,0x4f,0x0f,0x0f,0x4f,0x4f,0x0f,0x0f,0x2f,
0x5f,0x0f,0x7d,0x5f,0x2f,0x3f,0x0f,0x5f,0x4f,0x0f,0x0f,0x2f,0x5f,0x0f,0x3f,0x5f,
0x4f,0x0f,0x7d,0x4f,0x4f,0x0f,0x3f,0x4f,0x4f,0x0f,0x3f,0x2f,0x2f,0x3f,0x7d,0x5f,
0x5f,0x0f,0x3f,0x2f,0x4f,0x7d,0x3f,0x4f,0x2f,0x3f,0x7d,0x4f,0x2f,0x0f,0x3f,0x2f,
0x4f,0x0f,0x7d,0x5f,0x4f,0x3f,0x0f,0x5f,0x2f,0x3f,0x3f,0x2f,0x5f,0x0f,0x0f,0x5f,
0x2f,0x3f,0x7d,0x4f,0x4f,0x0f,0x0f,0x2f,0x2f,0x3f,0x3f,0x2f,0x4f,0x0f,0x7d,0x4f,
0x4f,0x0f,0x0f,0x2f,0x4f,0x3f,0x7d,0x4f,0x2f,0x3f,0x0f,0x2f,0x5f,0x7d,0x3f,0x5f,
0x2f,0x3f,0x0f,0x4f,0x2f,0x3f,0x0f,0x3f,0x0f,0x3f,0x0f,0x3f,0x0f,0x3f,0x3f,0x0f,
0x00,0x03,0x4f,0x2f,0x0f,0x3f,0x4f,0x2f,0x2f,0x4f,0x2f,0x4f,0x5f,0x4f,0x4f,0x2f,
0x4f,0x5f,0x4f,0x5f,0x0f,0x3f,0x0f,0x3f,0x0f,0x3f,0x3f,0x0f,0x3f,0x3f,0x0f,0x3f,
0x3f,0x7d,0x4f,0x2f,0x0f,0x3f,0x4f,0x5f,0x4f,0x5f,0x4f,0x2f,0x4f,0x2f,0x4f,0x5f,
0x4f,0x5f,0x2f,0x2f,0x3f,0x0f,0x2f,0x4f,0x0f,0x3f,0x4f,0x5f,0x3f,0x0f,0x4f,0x4f,
0x3f,0x0f,0x5f,0x2f,0x0f,0x0f,0x2f,0x4f,0x0f,0x7d,0x5f,0x2f,0x3f,0x0f,0x2f,0x4f,
0x7d,0x3f,0x4f,0x4f,0x7d,0x3f,0x2f,0x4f,0x3f,0x7d,0x4f,0x4f,0x0f,0x3f,0x2f,0x4f,
0x3f,0x7d,0x4f,0x4f,0x7d,0x7d,0x2f,0x5f,0x0f,0x3f,0x2f,0x4f,0x3f,0x7d,0x2f,0x4f,
0x0f,0x7d,0x2f,0x5f,0x7d,0x3f,0x5f,0x2f,0x3f,0x0f,0x2f,0x4f,0x0f,0x7d,0x2f,0x4f,
0x0f,0x3f,0x2f,0x4f,0x3f,0x3f,0x2f,0x5f,0x3f,0x3f,0x2f,0x4f,0x0f,0x3f,0x4f,0x5f,
0x3f,0x7d,0x2f,0x2f,0x0f,0x3f,0x4f,0x2f,0x3f,0x0f,0x2f,0x2f,0x0f,0x3f,0x2f,0x4f,
0x0f,0x7d,0x4f,0x4f,0x0f,0x3f,0x4f,0x4f,0x3f,0x7d,0x2f,0x2f,0x3f,0x7d,0x4f,0x2f,
0x3f,0x0f,0x2f,0x4f,0x7d,0x3f,0x4f,0x2f,0x0f,0x7d,0x5f,0x5f,0x0f,0x7d,0x4f,0x4f,
0x3f,0x3f,0x4f,0x5f,0x3f,0x3f,0x4f,0x5f,0x3f,0x3f,0x4f,0x4f,0x3f,0x7d,0x4f,0x4f,
0x0f,0x7d,0x4f,0x2f,0x0f,0x0f,0x2f,0x4f,0x0f,0x0f,0x2f,0x2f,0x0f,0x0f,0x4f,0x2f,
0x0f,0x0f,0x2f,0x2f,0x7d,0x0f,0x4f,0x2f,0x3f,0x0f,0x2f,0x2f,0x7d,0x3f,0x2f,0x4f,
0x0f,0x3f,0x2f,0x2f,0x00,0x00
};

