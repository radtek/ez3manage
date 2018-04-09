//欢迎使用yafei的字库转换程序
//创建于2003年3月9日
//字库大小512字节
const u8 fathead[] = {
0xeb,0x3c,0x90,0x4d,0x53,0x44,0x4f,0x53,
0x35,0x2e,0x30,0x00,0x02,0x04,0x06,0x00,
0x02,0x00,0x02,0x00,0x00,0xf8,0x8d,0x00,
0x3f,0x00,0xff,0x00,0x3f,0x00,0x00,0x00,
0x8a,0x34,0x02,0x00,0x80,0x00,0x29,0x44,
0x7a,0x80,0x88,0x4e,0x4f,0x20,0x4e,0x41,
0x4d,0x45,0x20,0x20,0x20,0x20,0x46,0x41,
0x54,0x31,0x36,0x20,0x20,0x20,0x33,0xc9,
0x8e,0xd1,0xbc,0xf0,0x7b,0x8e,0xd9,0xb8,
0x00,0x20,0x8e,0xc0,0xfc,0xbd,0x00,0x7c,
0x38,0x4e,0x24,0x7d,0x24,0x8b,0xc1,0x99,
0xe8,0x3c,0x01,0x72,0x1c,0x83,0xeb,0x3a,
0x66,0xa1,0x1c,0x7c,0x26,0x66,0x3b,0x07,
0x26,0x8a,0x57,0xfc,0x75,0x06,0x80,0xca,
0x02,0x88,0x56,0x02,0x80,0xc3,0x10,0x73,
0xeb,0x33,0xc9,0x8a,0x46,0x10,0x98,0xf7,
0x66,0x16,0x03,0x46,0x1c,0x13,0x56,0x1e,
0x03,0x46,0x0e,0x13,0xd1,0x8b,0x76,0x11,
0x60,0x89,0x46,0xfc,0x89,0x56,0xfe,0xb8,
0x20,0x00,0xf7,0xe6,0x8b,0x5e,0x0b,0x03,
0xc3,0x48,0xf7,0xf3,0x01,0x46,0xfc,0x11,
0x4e,0xfe,0x61,0xbf,0x00,0x00,0xe8,0xe6,
0x00,0x72,0x39,0x26,0x38,0x2d,0x74,0x17,
0x60,0xb1,0x0b,0xbe,0xa1,0x7d,0xf3,0xa6,
0x61,0x74,0x32,0x4e,0x74,0x09,0x83,0xc7,
0x20,0x3b,0xfb,0x72,0xe6,0xeb,0xdc,0xa0,
0xfb,0x7d,0xb4,0x7d,0x8b,0xf0,0xac,0x98,
0x40,0x74,0x0c,0x48,0x74,0x13,0xb4,0x0e,
0xbb,0x07,0x00,0xcd,0x10,0xeb,0xef,0xa0,
0xfd,0x7d,0xeb,0xe6,0xa0,0xfc,0x7d,0xeb,
0xe1,0xcd,0x16,0xcd,0x19,0x26,0x8b,0x55,
0x1a,0x52,0xb0,0x01,0xbb,0x00,0x00,0xe8,
0x3b,0x00,0x72,0xe8,0x5b,0x8a,0x56,0x24,
0xbe,0x0b,0x7c,0x8b,0xfc,0xc7,0x46,0xf0,
0x3d,0x7d,0xc7,0x46,0xf4,0x29,0x7d,0x8c,
0xd9,0x89,0x4e,0xf2,0x89,0x4e,0xf6,0xc6,
0x06,0x96,0x7d,0xcb,0xea,0x03,0x00,0x00,
0x20,0x0f,0xb6,0xc8,0x66,0x8b,0x46,0xf8,
0x66,0x03,0x46,0x1c,0x66,0x8b,0xd0,0x66,
0xc1,0xea,0x10,0xeb,0x5e,0x0f,0xb6,0xc8,
0x4a,0x4a,0x8a,0x46,0x0d,0x32,0xe4,0xf7,
0xe2,0x03,0x46,0xfc,0x13,0x56,0xfe,0xeb,
0x4a,0x52,0x50,0x06,0x53,0x6a,0x01,0x6a,
0x10,0x91,0x8b,0x46,0x18,0x96,0x92,0x33,
0xd2,0xf7,0xf6,0x91,0xf7,0xf6,0x42,0x87,
0xca,0xf7,0x76,0x1a,0x8a,0xf2,0x8a,0xe8,
0xc0,0xcc,0x02,0x0a,0xcc,0xb8,0x01,0x02,
0x80,0x7e,0x02,0x0e,0x75,0x04,0xb4,0x42,
0x8b,0xf4,0x8a,0x56,0x24,0xcd,0x13,0x61,
0x61,0x72,0x0b,0x40,0x75,0x01,0x42,0x03,
0x5e,0x0b,0x49,0x75,0x06,0xf8,0xc3,0x41,
0xbb,0x00,0x00,0x60,0x66,0x6a,0x00,0xeb,
0xb0,0x4e,0x54,0x4c,0x44,0x52,0x20,0x20,
0x20,0x20,0x20,0x20,0x0d,0x0a,0x52,0x65,
0x6d,0x6f,0x76,0x65,0x20,0x64,0x69,0x73,
0x6b,0x73,0x20,0x6f,0x72,0x20,0x6f,0x74,
0x68,0x65,0x72,0x20,0x6d,0x65,0x64,0x69,
0x61,0x2e,0xff,0x0d,0x0a,0x44,0x69,0x73,
0x6b,0x20,0x65,0x72,0x72,0x6f,0x72,0xff,
0x0d,0x0a,0x50,0x72,0x65,0x73,0x73,0x20,
0x61,0x6e,0x79,0x20,0x6b,0x65,0x79,0x20,
0x74,0x6f,0x20,0x72,0x65,0x73,0x74,0x61,
0x72,0x74,0x0d,0x0a,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0xac,0xcb,0xd8,0x55,0xaa,
}; 
//结束
