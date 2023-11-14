#include "engine_16.cpp"
float mult16 = 4;
float Xmult16 = -8.5;
float Ymult16 = 10;

//x0 = -35.5
//y0 = 32.5

internal void
draw_0_16(int i, int j) {
    //0
    draw_rec(-36 + 0.125 + 19 * i / mult16, 32.5 - 20 * j / mult16, 0.125, 1, 0xFBDA75);
    draw_rec(-35 - 0.125 + 19 * i / mult16, 32.5 - 20 * j / mult16, 0.125, 1, 0xFBDA75);
    draw_rec(-35.5 + 19 * i / mult16, 33.375 - 20 * j / mult16, 0.25, 0.125, 0xFBDA75);
    draw_rec(-35.5 + 19 * i / mult16, 31.625 - 20 * j / mult16, 0.25, 0.125, 0xFBDA75);
}
internal void
draw_2_16(int i, int j) {
    //2
    draw_rec(-35.5 + 19 * i / mult16, 33.375 - 20 * j / mult16, 1.5 / mult16, 0.5 / mult16, 0xFFD34A);
    draw_rec(-35.25 + 19 * i / mult16, 32.9375 - 20 * j / mult16, 0.5 / mult16, 1.5 / mult16, 0xFFD34A);
    draw_rec(-35.5 + 19 * i / mult16, 32.5 - 20 * j / mult16, 1.5 / mult16, 0.5 / mult16, 0xFFD34A);
    draw_rec(-35.75 + 19 * i / mult16, 32.0625 - 20 * j / mult16, 0.5 / mult16, 1.5 / mult16, 0xFFD34A);
    draw_rec(-35.5 + 19 * i / mult16, 31.625 - 20 * j / mult16, 1.5 / mult16, 0.5 / mult16, 0xFFD34A);
}
internal void
draw_4_16(int i, int j) {
    //4 
    draw_rec(-35.25 + 19 * i / mult16, 32.5 - 20 * j / mult16, 0.5 / mult16, 4 / mult16, 0xFEC514);
    draw_rec(-35.75 + 19 * i / mult16, 32.5 - 20 * j / mult16, 1.5 / mult16, 0.5 / mult16, 0xFEC514);
    draw_rec(-36 + 19 * i / mult16, 33 - 20 * j / mult16, 0.5 / mult16, 2 / mult16, 0xFEC514);
}
internal void
draw_8_16(int i, int j) {
    //8
    draw_rec(-35.5 + 19 * i / mult16, 33.375 - 20 * j / mult16, 1.5 / mult16, 0.5 / mult16, 0xFEAF14);
    draw_rec(-35.125+ 19 * i / mult16, 32.9375 - 20 * j / mult16, 0.5 / mult16, 1.5 / mult16, 0xFEAF14);
    draw_rec(-35.875 + 19 * i / mult16, 32.9375 - 20 * j / mult16, 0.5 / mult16, 1.5 / mult16, 0xFEAF14);
    draw_rec(-35.5 + 19 * i / mult16, 32.5 - 20 * j / mult16, 1.5 / mult16, 0.5 / mult16, 0xFEAF14);
    draw_rec(-35.125 + 19 * i / mult16, 32.0625 - 20 * j / mult16, 0.5 / mult16, 1.5 / mult16, 0xFEAF14);
    draw_rec(-35.875+ 19 * i / mult16, 32.0625 - 20 * j / mult16, 0.5 / mult16, 1.5 / mult16, 0xFEAF14);
    draw_rec(-35.5+ 19 * i / mult16, 31.625 - 20 * j / mult16, 1.5 / mult16, 0.5 / mult16, 0xFEAF14);
}
internal void
draw_16_16(int i, int j) {
    //1
    draw_rec(-36 + 19 * i / mult16, 32.5 - 20 * j / mult16, 0.5 / mult16, 4 / mult16, 0xFE9A14);
    //6
    draw_rec(-35.5 + 19 * i / mult16, 32.5 - 20 * j / mult16, 0.5 / mult16, 4 / mult16, 0xFE9A14);
    draw_rec(-35.25 + 19 * i / mult16, 31.625 - 20 * j / mult16, 1.5 / mult16, 0.5 / mult16, 0xFE9A14);//dolna
    draw_rec(-35.25 + 19 * i / mult16, 33.375 - 20 * j / mult16, 1.5 / mult16, 0.5 / mult16, 0xFE9A14);
    draw_rec(-35.25 + 19 * i / mult16, 32.5 - 20 * j / mult16, 1.5 / mult16, 0.5 / mult16, 0xFE9A14);
    draw_rec(-35 + 19 * i / mult16, 32.0625 - 20 * j / mult16, 0.5 / mult16, 1.25 / mult16, 0xFE9A14);
}
internal void
draw_32_16(int i, int j) {
    //3
    draw_rec(-36 + 19 * i / mult16, 33.375 - 20 * j / mult16, 1.5 / mult16, 0.5 / mult16, 0xFF751C);
    draw_rec(-35.75 + 19 * i / mult16, 32.9375 - 20 * j / mult16, 0.5 / mult16, 1.5 / mult16, 0xFF751C);
    draw_rec(-36 + 19 * i / mult16, 32.5 - 20 * j / mult16, 1.5 / mult16, 0.5 / mult16, 0xFF751C);
    draw_rec(-35.75 + 19 * i / mult16, 32.0625 - 20 * j / mult16, 0.5 / mult16, 1.5 / mult16, 0xFF751C);
    draw_rec(-36 + 19 * i / mult16, 31.625 - 20 * j / mult16, 1.5 / mult16, 0.5 / mult16, 0xFF751C);
    //2
    draw_rec(-35 + 19 * i / mult16, 33.375 - 20 * j / mult16, 1.5 / mult16, 0.5 / mult16, 0xFF751C);
    draw_rec(-34.75 + 19 * i / mult16, 32.9375 - 20 * j / mult16, 0.5 / mult16, 1.5 / mult16, 0xFF751C);
    draw_rec(-35 + 19 * i / mult16, 32.5 - 20 * j / mult16, 1.5 / mult16, 0.5 / mult16, 0xFF751C);
    draw_rec(-35.25 + 19 * i / mult16, 32.0625 - 20 * j / mult16, 0.5 / mult16, 1.5 / mult16, 0xFF751C);
    draw_rec(-35 + 19 * i / mult16, 31.625 - 20 * j / mult16, 1.5 / mult16, 0.5 / mult16, 0xFF751C);
}
internal void
draw_64_16(int i, int j) {
    //6
    draw_rec(-36.25 + 19 * i / mult16, 32.5 - 20 * j / mult16, 0.5 / mult16, 4 / mult16, 0xFF5D16);
    draw_rec(-36 + 19 * i / mult16, 31.625 - 20 * j / mult16, 1.5 / mult16, 0.5 / mult16, 0xFF5D16);//dolna
    draw_rec(-36 + 19 * i / mult16, 33.375 - 20 * j / mult16, 1.5 / mult16, 0.5 / mult16, 0xFF5D16);
    draw_rec(-36 + 19 * i / mult16, 32.5 - 20 * j / mult16, 1.5 / mult16, 0.5 / mult16, 0xFF5D16);
    draw_rec(-35.75 + 19 * i / mult16, 32.0625 - 20 * j / mult16, 0.5 / mult16, 1.25 / mult16, 0xFF5D16);
    //4
    draw_rec(-34.75 + 19 * i / mult16, 32.5 - 20 * j / mult16, 0.5 / mult16, 4 / mult16, 0xFF5D16);
    draw_rec(-35 + 19 * i / mult16, 32.5 - 20 * j / mult16, 1.5 / mult16, 0.5 / mult16, 0xFF5D16);
    draw_rec(-35.25 + 19 * i / mult16, 33 - 20 * j / mult16, 0.5 / mult16, 2 / mult16, 0xFF5D16);
}
internal void
draw_128_16(int i, int j) {
    //1
    draw_rec(-36.625 + 19 * i / mult16, 32.5 - 20 * j / mult16, 0.5 / mult16, 4 / mult16, 0xFF4B16);
    //2
    draw_rec(-35.875 + 19 * i / mult16, 33.375 - 20 * j / mult16, 1.5 / mult16, 0.5 / mult16, 0xFF4B16);
    draw_rec(-35.625 + 19 * i / mult16, 32.9375 - 20 * j / mult16, 0.5 / mult16, 1.5 / mult16, 0xFF4B16);
    draw_rec(-35.875 + 19 * i / mult16, 32.5 - 20 * j / mult16, 1.5 / mult16, 0.5 / mult16, 0xFF4B16);
    draw_rec(-36.125 + 19 * i / mult16, 32.0625 - 20 * j / mult16, 0.5 / mult16, 1.5 / mult16, 0xFF4B16);
    draw_rec(-35.875 + 19 * i / mult16, 31.625 - 20 * j / mult16, 1.5 / mult16, 0.5 / mult16, 0xFF4B16);
    //8
    draw_rec(-34.75 + 19 * i / mult16, 33.375 - 20 * j / mult16, 1.5 / mult16, 0.5 / mult16, 0xFF4B16);
    draw_rec(-34.375 + 19 * i / mult16, 32.9375 - 20 * j / mult16, 0.5 / mult16, 1.5 / mult16, 0xFF4B16);
    draw_rec(-35.125 + 19 * i / mult16, 32.9375 - 20 * j / mult16, 0.5 / mult16, 1.5 / mult16, 0xFF4B16);
    draw_rec(-34.75 + 19 * i / mult16, 32.5 - 20 * j / mult16, 1.5 / mult16, 0.5 / mult16, 0xFF4B16);
    draw_rec(-34.375 + 19 * i / mult16, 32.0625 - 20 * j / mult16, 0.5 / mult16, 1.5 / mult16, 0xFF4B16);
    draw_rec(-35.125 + 19 * i / mult16, 32.0625 - 20 * j / mult16, 0.5 / mult16, 1.5 / mult16, 0xFF4B16);
    draw_rec(-34.75 + 19 * i / mult16, 31.625 - 20 * j / mult16, 1.5 / mult16, 0.5 / mult16, 0xFF4B16);
}
internal void
draw_256_16(int i, int j) {
    //2
    draw_rec(-35.875 - 0.5 + 19 * i / mult16, 33.375 - 20 * j / mult16, 1.5 / mult16, 0.5 / mult16, 0xFF2F16);
    draw_rec(-35.625 - 0.5 + 19 * i / mult16, 32.9375 - 20 * j / mult16, 0.5 / mult16, 1.5 / mult16, 0xFF2F16);
    draw_rec(-35.875 - 0.5 + 19 * i / mult16, 32.5 - 20 * j / mult16, 1.5 / mult16, 0.5 / mult16, 0xFF2F16);
    draw_rec(-36.125 - 0.5 + 19 * i / mult16, 32.0625 - 20 * j / mult16, 0.5 / mult16, 1.5 / mult16, 0xFF2F16);
    draw_rec(-35.875 - 0.5 + 19 * i / mult16, 31.625 - 20 * j / mult16, 1.5 / mult16, 0.5 / mult16, 0xFF2F16);
    //5
    draw_rec(-35.875 + 0.375 + 19 * i / mult16, 33.375 - 20 * j / mult16, 1.5 / mult16, 0.5 / mult16, 0xFF2F16);
    draw_rec(-36.125 + 0.375 + 19 * i / mult16, 32.9375 - 20 * j / mult16, 0.5 / mult16, 1.5 / mult16, 0xFF2F16);
    draw_rec(-35.875 + 0.375 + 19 * i / mult16, 32.5 - 20 * j / mult16, 1.5 / mult16, 0.5 / mult16, 0xFF2F16);
    draw_rec(-35.625 + 0.375 + 19 * i / mult16, 32.0625 - 20 * j / mult16, 0.5 / mult16, 1.5 / mult16, 0xFF2F16);
    draw_rec(-35.875 + 0.375 + 19 * i / mult16, 31.625 - 20 * j / mult16, 1.5 / mult16, 0.5 / mult16, 0xFF2F16);
    //6
    draw_rec(-36.25 + 1.375 + 19 * i / mult16, 32.5 - 20 * j / mult16, 0.5 / mult16, 4 / mult16, 0xFF2F16);
    draw_rec(-36 + 1.375 + 19 * i / mult16, 31.625 - 20 * j / mult16, 1.5 / mult16, 0.5 / mult16, 0xFF2F16);//dolna
    draw_rec(-36 + 1.375 + 19 * i / mult16, 33.375 - 20 * j / mult16, 1.5 / mult16, 0.5 / mult16, 0xFF2F16);
    draw_rec(-36 + 1.375 + 19 * i / mult16, 32.5 - 20 * j / mult16, 1.5 / mult16, 0.5 / mult16, 0xFF2F16);
    draw_rec(-35.75 + 1.375 + 19 * i / mult16, 32.0625 - 20 * j / mult16, 0.5 / mult16, 1.25 / mult16, 0xFF2F16);
}
internal void
draw_512_16(int i, int j) {
    //5
    draw_rec(-36.875 +0.125 + 0.375 + 19 * i / mult16, 33.375 - 20 * j / mult16, 1.5 / mult16, 0.5 / mult16, 0xC50909);
    draw_rec(-37.125 + 0.125 + 0.375 + 19 * i / mult16, 32.9375 - 20 * j / mult16, 0.5 / mult16, 1.5 / mult16, 0xC50909);
    draw_rec(-36.875 + 0.125 + 0.375 + 19 * i / mult16, 32.5 - 20 * j / mult16, 1.5 / mult16, 0.5 / mult16, 0xC50909);
    draw_rec(-36.625 + 0.125 + 0.375 + 19 * i / mult16, 32.0625 - 20 * j / mult16, 0.5 / mult16, 1.5 / mult16, 0xC50909);
    draw_rec(-36.875 + 0.125 + 0.375 + 19 * i / mult16, 31.625 - 20 * j / mult16, 1.5 / mult16, 0.5 / mult16, 0xC50909);
    //1
    draw_rec(-35.625 + 0.125 + 19 * i / mult16, 32.5 - 20 * j / mult16, 0.5 / mult16, 4 / mult16, 0xC50909);
    //2
    draw_rec(-34.75 + 0.125 + 19 * i / mult16, 33.375 - 20 * j / mult16, 1.5 / mult16, 0.5 / mult16, 0xC50909);
    draw_rec(-34.5 + 0.125 + 19 * i / mult16, 32.9375 - 20 * j / mult16, 0.5 / mult16, 1.5 / mult16, 0xC50909);
    draw_rec(-34.75 + 0.125 + 19 * i / mult16, 32.5 - 20 * j / mult16, 1.5 / mult16, 0.5 / mult16, 0xC50909);
    draw_rec(-35 + 0.125 + 19 * i / mult16, 32.0625 - 20 * j / mult16, 0.5 / mult16, 1.5 / mult16, 0xC50909);
    draw_rec(-34.75 + 0.125 + 19 * i / mult16, 31.625 - 20 * j / mult16, 1.5 / mult16, 0.5 / mult16, 0xC50909);
}
internal void
draw_1024_16(int i, int j) {
    //1
    draw_rec(-37.25 + 0.5 + 19 * i / mult16, 32.5 - 20 * j / mult16, 0.5 / mult16, 4 / mult16, 0xADCF2D);
    //0
    draw_rec(-36.875 + 0.625 + 19 * i / mult16, 32.5 - 20 * j / mult16, 0.125, 1, 0xADCF2D);
    draw_rec(-35.875 + 19 * i / mult16, 32.5 - 20 * j / mult16, 0.125, 1, 0xADCF2D);
    draw_rec(-36.375 + 0.25 + 19 * i / mult16, 33.375 - 20 * j / mult16, 0.25, 0.125, 0xADCF2D);
    draw_rec(-36.375 + 0.25 + 19 * i / mult16, 31.625 - 20 * j / mult16, 0.25, 0.125, 0xADCF2D);
    //2
    draw_rec(-35.5 + 0.25 + 19 * i / mult16, 33.375 - 20 * j / mult16, 1.5 / mult16, 0.5 / mult16, 0xADCF2D);
    draw_rec(-35.25 + 0.25 + 19 * i / mult16, 32.9375 - 20 * j / mult16, 0.5 / mult16, 1.5 / mult16, 0xADCF2D);
    draw_rec(-35.5 + 0.25 + 19 * i / mult16, 32.5 - 20 * j / mult16, 1.5 / mult16, 0.5 / mult16, 0xADCF2D);
    draw_rec(-35.75 + 0.25 + 19 * i / mult16, 32.0625 - 20 * j / mult16, 0.5 / mult16, 1.5 / mult16, 0xADCF2D);
    draw_rec(-35.5 + 0.25 + 19 * i / mult16, 31.625 - 20 * j / mult16, 1.5 / mult16, 0.5 / mult16, 0xADCF2D);
    //4
    draw_rec(-34.5 + 0.375 + 19 * i / mult16, 32.5 - 20 * j / mult16, 0.5 / mult16, 4 / mult16, 0xADCF2D);
    draw_rec(-34.75 + 0.375 + 19 * i / mult16, 32.5 - 20 * j / mult16, 1.5 / mult16, 0.5 / mult16, 0xADCF2D);
    draw_rec(-35 + 0.375 + 19 * i / mult16, 33 - 20 * j / mult16, 0.5 / mult16, 2 / mult16, 0xADCF2D);
}
internal void
draw_2048_16(int i, int j) {
    //2
    draw_rec(-37 + 0.125 + 19 * i / mult16, 33.375 - 20 * j / mult16, 1.5 / mult16, 0.5 / mult16, 0x24D720);
    draw_rec(-36.75 + 0.125 + 19 * i / mult16, 32.9375 - 20 * j / mult16, 0.5 / mult16, 1.5 / mult16, 0x24D720);
    draw_rec(-37 + 0.125 + 19 * i / mult16, 32.5 - 20 * j / mult16, 1.5 / mult16, 0.5 / mult16, 0x24D720);
    draw_rec(-37.25 + 0.125 + 19 * i / mult16, 32.0625 - 20 * j / mult16, 0.5 / mult16, 1.5 / mult16, 0x24D720);
    draw_rec(-37 + 0.125 + 19 * i / mult16, 31.625 - 20 * j / mult16, 1.5 / mult16, 0.5 / mult16, 0x24D720);
    //0
    draw_rec(-36.75 - 0.125 + 0.625 + 19 * i / mult16, 32.5 - 20 * j / mult16, 0.125, 1, 0x24D720);
    draw_rec(-35.75 - 0.125 + 19 * i / mult16, 32.5 - 20 * j / mult16, 0.125, 1, 0x24D720);
    draw_rec(-36.25 - 0.125 + 0.25 + 19 * i / mult16, 33.375 - 20 * j / mult16, 0.25, 0.125, 0x24D720);
    draw_rec(-36.25 - 0.125 + 0.25 + 19 * i / mult16, 31.625 - 20 * j / mult16, 0.25, 0.125, 0x24D720);
    //4
    draw_rec(-35  + 19 * i / mult16, 32.5 - 20 * j / mult16, 0.5 / mult16, 4 / mult16, 0x24D720);
    draw_rec(-35.25 + 19 * i / mult16, 32.5 - 20 * j / mult16, 1.5 / mult16, 0.5 / mult16, 0x24D720);
    draw_rec(-35.5 + 19 * i / mult16, 33 - 20 * j / mult16, 0.5 / mult16, 2 / mult16, 0x24D720);
    //8
    draw_rec(-34.75 + 0.5 + 19 * i / mult16, 33.375 - 20 * j / mult16, 1.5 / mult16, 0.5 / mult16, 0x24D720);
    draw_rec(-34.375 + 0.5 + 19 * i / mult16, 32.9375 - 20 * j / mult16, 0.5 / mult16, 1.5 / mult16, 0x24D720);
    draw_rec(-35.125 + 0.5 + 19 * i / mult16, 32.9375 - 20 * j / mult16, 0.5 / mult16, 1.5 / mult16, 0x24D720);
    draw_rec(-34.75 + 0.5 + 19 * i / mult16, 32.5 - 20 * j / mult16, 1.5 / mult16, 0.5 / mult16, 0x24D720);
    draw_rec(-34.375 + 0.5 + 19 * i / mult16, 32.0625 - 20 * j / mult16, 0.5 / mult16, 1.5 / mult16, 0x24D720);
    draw_rec(-35.125 + 0.5 + 19 * i / mult16, 32.0625 - 20 * j / mult16, 0.5 / mult16, 1.5 / mult16, 0x24D720);
    draw_rec(-34.75 + 0.5 + 19 * i / mult16, 31.625 - 20 * j / mult16, 1.5 / mult16, 0.5 / mult16, 0x24D720);
}