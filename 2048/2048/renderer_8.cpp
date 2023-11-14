#include "engine_8.cpp"
float mult8 = 2;
float Xmult8 = -4.5;
float Ymult8 = 5;
//srodek: x=-33, y=30
internal void
draw_0_8(int i, int j) {
    //0
    draw_rec(-34 + 19 * i / mult8, 30 - 20 * j / mult8, 0.25, 2, 0xFBDA75);
    draw_rec(-32 + 19 * i / mult8, 30 - 20 * j / mult8, 0.25, 2, 0xFBDA75);
    draw_rec(-33 + 19 * i / mult8, 32 - 20 * j / mult8, 1.25, 0.25, 0xFBDA75);
    draw_rec(-33 + 19 * i / mult8, 28 - 20 * j / mult8, 1.25, 0.25, 0xFBDA75);
}
internal void
draw_2_8(int i, int j) {
    //2
    draw_rec(-33 + 19 * i / mult8, 31.75 - 20 * j / mult8, 1.5 / mult8, 0.5 / mult8, 0xFFD34A);
    draw_rec(-32.5 + 19 * i / mult8, 31 - 20 * j / mult8, 0.5 / mult8, 1.5 / mult8, 0xFFD34A);
    draw_rec(-33 + 19 * i / mult8, 30 - 20 * j / mult8, 1.5 / mult8, 0.5 / mult8, 0xFFD34A);
    draw_rec(-33.5 + 19 * i / mult8, 29 - 20 * j / mult8, 0.5 / mult8, 1.5 / mult8, 0xFFD34A);
    draw_rec(-33 + 19 * i / mult8, 28.25 - 20 * j / mult8, 1.5 / mult8, 0.5 / mult8, 0xFFD34A);
}
internal void
draw_4_8(int i, int j) {
    //4
    draw_rec(-32.5 + 19 * i / mult8, 30 - 20 * j / mult8, 0.5 / mult8, 4 / mult8, 0xFEC514);
    draw_rec(-33 + 19 * i / mult8, 30 - 20 * j / mult8, 1.5 / mult8, 0.5 / mult8, 0xFEC514);
    draw_rec(-33.5 + 19 * i / mult8, 31 - 20 * j / mult8, 0.5 / mult8, 2 / mult8, 0xFEC514);
}
internal void
draw_8_8(int i, int j) {
    //8
    draw_rec(-28.5 - 4.5 + 19 * i / mult8, 31.75 - 20 * j / mult8, 1.5 / mult8, 0.5 / mult8, 0xFEAF14);
    draw_rec(-29.25 - 4.5 + 19 * i / mult8, 31 - 20 * j / mult8, 0.5 / mult8, 1.5 / mult8, 0xFEAF14);
    draw_rec(-27.75 - 4.5 + 19 * i / mult8, 31 - 20 * j / mult8, 0.5 / mult8, 1.5 / mult8, 0xFEAF14);
    draw_rec(-28.5 - 4.5 + 19 * i / mult8, 30 - 20 * j / mult8, 1.5 / mult8, 0.5 / mult8, 0xFEAF14);
    draw_rec(-29.25 - 4.5 + 19 * i / mult8, 29 - 20 * j / mult8, 0.5 / mult8, 1.5 / mult8, 0xFEAF14);
    draw_rec(-27.75 - 4.5 + 19 * i / mult8, 29 - 20 * j / mult8, 0.5 / mult8, 1.5 / mult8, 0xFEAF14);
    draw_rec(-28.5 - 4.5 + 19 * i / mult8, 28.25 - 20 * j / mult8, 1.5 / mult8, 0.5 / mult8, 0xFEAF14);
}
internal void
draw_16_8(int i, int j) {
    //1
    draw_rec(-29.5 + Xmult8 + 19 * i /mult8, 25 + Ymult8 - 20 * j / mult8, 0.5 / mult8, 4 / mult8, 0xFE9A14);
    //6
    draw_rec(-28.5 + Xmult8 + 19 * i / mult8, 25 + Ymult8 - 20 * j / mult8, 0.5 / mult8, 4 / mult8, 0xFE9A14);
    draw_rec(-28 + Xmult8 + 19 * i / mult8, 26.75 + Ymult8 - 20 * j / mult8, 1.5 / mult8, 0.5 / mult8, 0xFE9A14);
    draw_rec(-28 + Xmult8 + 19 * i / mult8, 23.25 + Ymult8 - 20 * j / mult8, 1.5 / mult8, 0.5 / mult8, 0xFE9A14);
    draw_rec(-28 + Xmult8 + 19 * i / mult8, 25 + Ymult8 - 20 * j / mult8, 1.5 / mult8, 0.5 / mult8, 0xFE9A14);
    draw_rec(-27.5 + Xmult8 + 19 * i / mult8, 24.125 + Ymult8 - 20 * j / mult8, 0.5 / mult8, 1.25 / mult8, 0xFE9A14);
}
internal void
draw_32_8(int i, int j) {
    //3
    draw_rec(-29.5 + Xmult8 + 19 * i / mult8, 26.75 + Ymult8 - 20 * j / mult8, 1.5 / mult8, 0.5 / mult8, 0xFF751C);
    draw_rec(-29.5 + Xmult8 + 19 * i / mult8, 25 + Ymult8 - 20 * j / mult8, 1.5 / mult8, 0.5 / mult8, 0xFF751C);
    draw_rec(-29.5 + Xmult8 + 19 * i / mult8, 23.25 + Ymult8 - 20 * j / mult8, 1.5 / mult8, 0.5 / mult8, 0xFF751C);
    draw_rec(-29 + Xmult8 + 19 * i / mult8, 25 + Ymult8 - 20 * j / mult8, 0.5 / mult8, 4 / mult8, 0xFF751C);
    //2
    draw_rec(-27.5 + Xmult8 + 19 * i / mult8, 26.75 + Ymult8 - 20 * j / mult8, 1.5 / mult8, 0.5 / mult8, 0xFF751C);
    draw_rec(-27 + Xmult8 + 19 * i / mult8, 25.875 + Ymult8 - 20 * j / mult8, 0.5 / mult8, 1.25 / mult8, 0xFF751C);
    draw_rec(-27.5 + Xmult8 + 19 * i / mult8, 25 + Ymult8 - 20 * j / mult8, 1.5 / mult8, 0.5 / mult8, 0xFF751C);
    draw_rec(-28 + Xmult8 + 19 * i / mult8, 24.125 + Ymult8 - 20 * j / mult8, 0.5 / mult8, 1.25 / mult8, 0xFF751C);
    draw_rec(-27.5 + Xmult8 + 19 * i / mult8, 23.25 + Ymult8 - 20 * j / mult8, 1.5 / mult8, 0.5 / mult8, 0xFF751C);
}
internal void
draw_64_8(int i, int j) {
    //6
    draw_rec(-30 + Xmult8 + 19 * i / mult8, 25 + Ymult8 - 20 * j / mult8, 0.5 / mult8, 4 / mult8, 0xFF5D16);
    draw_rec(-29.5 + Xmult8 + 19 * i / mult8, 26.75 + Ymult8 - 20 * j / mult8, 1.5 / mult8, 0.5 / mult8, 0xFF5D16);
    draw_rec(-29.5 + Xmult8 + 19 * i / mult8, 23.25 + Ymult8 - 20 * j / mult8, 1.5 / mult8, 0.5 / mult8, 0xFF5D16);
    draw_rec(-29.5 + Xmult8 + 19 * i / mult8, 25 + Ymult8 - 20 * j / mult8, 1.5 / mult8, 0.5 / mult8, 0xFF5D16);
    draw_rec(-29 + Xmult8 + 19 * i / mult8, 24.125 + Ymult8 - 20 * j / mult8, 0.5 / mult8, 1.25 / mult8, 0xFF5D16);
    //4 //-26.5 = -32.5
    draw_rec(-31.5 + 19 * i / mult8, 30 - 20 * j / mult8, 0.5 / mult8, 4 / mult8, 0xFF5D16);
    draw_rec(-32 + 19 * i / mult8, 30 - 20 * j / mult8, 1.5 / mult8, 0.5 / mult8, 0xFF5D16);
    draw_rec(-32.5 + 19 * i / mult8, 31 - 20 * j / mult8, 0.5 / mult8, 2 / mult8, 0xFF5D16);
}
internal void
draw_128_8(int i, int j) {
    //1
    draw_rec(-30.75 + Xmult8 + 19 * i / mult8, 25 + Ymult8 - 20 * j / mult8, 0.5 / mult8, 4 / mult8, 0xFF4B16);
    //2
    draw_rec(-29 + Xmult8 + 19 * i / mult8, 26.75 + Ymult8 - 20 * j / mult8, 1.5 / mult8, 0.5 / mult8, 0xFF4B16);
    draw_rec(-28.5 + Xmult8 + 19 * i / mult8, 25.875 + Ymult8 - 20 * j / mult8, 0.5 / mult8, 1.25 / mult8, 0xFF4B16);
    draw_rec(-29 + Xmult8 + 19 * i / mult8, 25 + Ymult8 - 20 * j / mult8, 1.5 / mult8, 0.5 / mult8, 0xFF4B16);
    draw_rec(-29.5 + Xmult8 + 19 * i / mult8, 24.125 + Ymult8 - 20 * j / mult8, 0.5 / mult8, 1.25 / mult8, 0xFF4B16);
    draw_rec(-29 + Xmult8 + 19 * i / mult8, 23.25 + Ymult8 - 20 * j / mult8, 1.5 / mult8, 0.5 / mult8, 0xFF4B16);
    //8
    draw_rec(-26.75 - 4.5 + 19 * i / mult8, 31.75 - 20 * j / mult8, 1.5 / mult8, 0.5 / mult8, 0xFF4B16);
    draw_rec(-27.5 - 4.5 + 19 * i / mult8, 31 - 20 * j / mult8, 0.5 / mult8, 1.5 / mult8, 0xFF4B16);
    draw_rec(-26 - 4.5 + 19 * i / mult8, 31 - 20 * j / mult8, 0.5 / mult8, 1.5 / mult8, 0xFE4B16);
    draw_rec(-26.75 - 4.5 + 19 * i / mult8, 30 - 20 * j / mult8, 1.5 / mult8, 0.5 / mult8, 0xFE4B16);
    draw_rec(-27.5 - 4.5 + 19 * i / mult8, 29 - 20 * j / mult8, 0.5 / mult8, 1.5 / mult8, 0xFE4B16);
    draw_rec(-26 - 4.5 + 19 * i / mult8, 29 - 20 * j / mult8, 0.5 / mult8, 1.5 / mult8, 0xFE4B16);
    draw_rec(-26.75 - 4.5 + 19 * i / mult8, 28.25 - 20 * j / mult8, 1.5 / mult8, 0.5 / mult8, 0xFE4B16);
}
internal void
draw_256_8(int i, int j) {
    //2
    draw_rec(-30.5 + Xmult8 + 19 * i / mult8, 26.75 + Ymult8 - 20 * j / mult8, 1.5 / mult8, 0.5 / mult8, 0xFF2F16);
    draw_rec(-30 + Xmult8 + 19 * i / mult8, 25.875 + Ymult8 - 20 * j / mult8, 0.5 / mult8, 1.25 / mult8, 0xFF2F16);
    draw_rec(-30.5 + Xmult8 + 19 * i / mult8, 25 + Ymult8 - 20 * j / mult8, 1.5 / mult8, 0.5 / mult8, 0xFF2F16);
    draw_rec(-31 + Xmult8 + 19 * i / mult8, 24.125 + Ymult8 - 20 * j / mult8, 0.5 / mult8, 1.25 / mult8, 0xFF2F16);
    draw_rec(-30.5 + Xmult8 + 19 * i / mult8, 23.25 + Ymult8 - 20 * j / mult8, 1.5 / mult8, 0.5 / mult8, 0xFF2F16);
    //5
    draw_rec(-28.5 + Xmult8 + 19 * i / mult8, 26.75 + Ymult8 - 20 * j / mult8, 1.5 / mult8, 0.5 / mult8, 0xFF2F16);
    draw_rec(-28 + Xmult8 + 19 * i / mult8, 24.125 + Ymult8 - 20 * j / mult8, 0.5 / mult8, 1.25 / mult8, 0xFF2F16);
    draw_rec(-28.5 + Xmult8 + 19 * i / mult8, 25 + Ymult8 - 20 * j / mult8, 1.5 / mult8, 0.5 / mult8, 0xFF2F16);
    draw_rec(-29 + Xmult8 + 19 * i / mult8, 25.875 + Ymult8 - 20 * j / mult8, 0.5 / mult8, 1.25 / mult8, 0xFF2F16);
    draw_rec(-28.5 + Xmult8 + 19 * i / mult8, 23.25 + Ymult8 - 20 * j / mult8, 1.5 / mult8, 0.5 / mult8, 0xFF2F16);
    //6
    draw_rec(-27 + Xmult8 + 19 * i / mult8, 25 + Ymult8 - 20 * j / mult8, 0.5 / mult8, 4 / mult8, 0xFF2F16);
    draw_rec(-26.5 + Xmult8 + 19 * i / mult8, 26.75 + Ymult8 - 20 * j / mult8, 1.5 / mult8, 0.5 / mult8, 0xFF2F16);
    draw_rec(-26.5 + Xmult8 + 19 * i / mult8, 23.25 + Ymult8 - 20 * j / mult8, 1.5 / mult8, 0.5 / mult8, 0xFF2F16);
    draw_rec(-26.5 + Xmult8 + 19 * i / mult8, 25 + Ymult8 - 20 * j / mult8, 1.5 / mult8, 0.5 / mult8, 0xFF2F16);
    draw_rec(-26 + Xmult8 + 19 * i / mult8, 24.125 + Ymult8 - 20 * j / mult8, 0.5 / mult8, 1.25 / mult8, 0xFF2F16);
}
internal void
draw_512_8(int i, int j) {
    //5
    draw_rec(-30.25 + Xmult8 + 19 * i / mult8, 26.75 + Ymult8 - 20 * j / mult8, 1.5 / mult8, 0.5 / mult8, 0xC50909);
    draw_rec(-29.75 + Xmult8 + 19 * i / mult8, 24.125 + Ymult8 - 20 * j / mult8, 0.5 / mult8, 1.25 / mult8, 0xC50909);
    draw_rec(-30.25 + Xmult8 + 19 * i / mult8, 25 + Ymult8 - 20 * j / mult8, 1.5 / mult8, 0.5 / mult8, 0xC50909);
    draw_rec(-30.75 + Xmult8 + 19 * i / mult8, 25.875 + Ymult8 - 20 * j / mult8, 0.5 / mult8, 1.25 / mult8, 0xC50909);
    draw_rec(-30.25 + Xmult8 + 19 * i / mult8, 23.25 + Ymult8 - 20 * j / mult8, 1.5 / mult8, 0.5 / mult8, 0xC50909);
    //1
    draw_rec(-28.5 + Xmult8 + 19 * i / mult8, 25 + Ymult8 - 20 * j / mult8, 0.5 / mult8, 4 / mult8, 0xC50909);
    //2  31 = 28.5
    draw_rec(-26.75 + Xmult8 + 19 * i / mult8, 26.75 + Ymult8 - 20 * j / mult8, 1.5 / mult8, 0.5 / mult8, 0xC50909);
    draw_rec(-26.25 + Xmult8 + 19 * i / mult8, 25.875 + Ymult8 - 20 * j / mult8, 0.5 / mult8, 1.25 / mult8, 0xC50909);
    draw_rec(-26.75 + Xmult8 + 19 * i / mult8, 25 + Ymult8 - 20 * j / mult8, 1.5 / mult8, 0.5 / mult8, 0xC50909);
    draw_rec(-27.25 + Xmult8 + 19 * i / mult8, 24.125 + Ymult8 - 20 * j / mult8, 0.5 / mult8, 1.25 / mult8, 0xC50909);
    draw_rec(-26.75 + Xmult8 + 19 * i / mult8, 23.25 + Ymult8 - 20 * j / mult8, 1.5 / mult8, 0.5 / mult8, 0xC50909);
}
internal void
draw_1024_8(int i, int j) {
    //1
    draw_rec(-31.5 + Xmult8 + 19 * i / mult8, 25 + Ymult8 - 20 * j / mult8, 0.5 / mult8, 4 / mult8, 0xADCF2D);
    //0 
    
    draw_rec(-30.5 + Xmult8 + 19 * i / mult8, 30 - 20 * j / mult8, 0.25, 2, 0xADCF2D);
    draw_rec(-29.5 + Xmult8 + 19 * i / mult8, 30 - 20 * j / mult8, 0.25, 2, 0xADCF2D);
    draw_rec(-30 + Xmult8 + 19 * i / mult8, 31.75 - 20 * j / mult8, 0.25, 0.25, 0xADCF2D);
    draw_rec(-30 + Xmult8 + 19 * i / mult8, 28.25 - 20 * j / mult8, 0.25, 0.25, 0xADCF2D);
    
    //2
    draw_rec(-28 + Xmult8 + 19 * i / mult8, 26.75 + Ymult8 - 20 * j / mult8, 1.5 / mult8, 0.5 / mult8, 0xADCF2D);
    draw_rec(-27.5 + Xmult8 + 19 * i / mult8, 25.875 + Ymult8 - 20 * j / mult8, 0.5 / mult8, 1.25 / mult8, 0xADCF2D);
    draw_rec(-28 + Xmult8 + 19 * i / mult8, 25 + Ymult8 - 20 * j / mult8, 1.5 / mult8, 0.5 / mult8, 0xADCF2D);
    draw_rec(-28.5 + Xmult8 + 19 * i / mult8, 24.125 + Ymult8 - 20 * j / mult8, 0.5 / mult8, 1.25 / mult8, 0xADCF2D);
    draw_rec(-28 + Xmult8 + 19 * i / mult8, 23.25 + Ymult8 - 20 * j / mult8, 1.5 / mult8, 0.5 / mult8, 0xADCF2D);
    
    //4 -32.5 = -26
    draw_rec(-25.5 + Xmult8 + 19 * i / mult8, 30 - 20 * j / mult8, 0.5 / mult8, 4 / mult8, 0xADCF2D);
    draw_rec(-26 + Xmult8 + 19 * i / mult8, 30 - 20 * j / mult8, 1.5 / mult8, 0.5 / mult8, 0xADCF2D);
    draw_rec(-26.5 + Xmult8 + 19 * i / mult8, 31 - 20 * j / mult8, 0.5 / mult8, 2 / mult8, 0xADCF2D);
}
internal void
draw_2048_8(int i, int j) {
    //2 32.5
    draw_rec(-31.25 - 0.125 + Xmult8 + 19 * i / mult8, 26.75 + Ymult8 - 20 * j / mult8, 1.5 / mult8, 0.5 / mult8, 0x24D720);
    draw_rec(-30.75 - 0.125 + Xmult8 + 19 * i / mult8, 25.875 + Ymult8 - 20 * j / mult8, 0.5 / mult8, 1.25 / mult8, 0x24D720);
    draw_rec(-31.25 - 0.125 + Xmult8 + 19 * i / mult8, 25 + Ymult8 - 20 * j / mult8, 1.5 / mult8, 0.5 / mult8, 0x24D720);
    draw_rec(-31.75 - 0.125 + Xmult8 + 19 * i / mult8, 24.125 + Ymult8 - 20 * j / mult8, 0.5 / mult8, 1.25 / mult8, 0x24D720);
    draw_rec(-31.25 - 0.125 + Xmult8 + 19 * i / mult8, 23.25 + Ymult8 - 20 * j / mult8, 1.5 / mult8, 0.5 / mult8, 0x24D720);
    //0
    
    draw_rec(-30 - 0.125 + Xmult8 + 19 * i / mult8, 30 - 20 * j / mult8, 0.25, 2, 0x24D720);
    draw_rec(-29 - 0.125 + Xmult8 + 19 * i / mult8, 30 - 20 * j / mult8, 0.25, 2, 0x24D720);
    draw_rec(-29.5 - 0.125 + Xmult8 + 19 * i / mult8, 31.75 - 20 * j / mult8, 0.25, 0.25, 0x24D720);
    draw_rec(-29.5 - 0.125 + Xmult8 + 19 * i / mult8, 28.25 - 20 * j / mult8, 0.25, 0.25, 0x24D720);
    //4
   //27.25 - 1.25 = 26
    draw_rec(-27.25 - 0.125 + Xmult8 + 19 * i / mult8, 30 - 20 * j / mult8, 0.5 / mult8, 4 / mult8, 0x24D720);
    draw_rec(-27.75 - 0.125 + Xmult8 + 19 * i / mult8, 30 - 20 * j / mult8, 1.5 / mult8, 0.5 / mult8, 0x24D720);
    draw_rec(-28.25 - 0.125 + Xmult8 + 19 * i / mult8, 31 - 20 * j / mult8, 0.5 / mult8, 2 / mult8, 0x24D720);
    //8
    draw_rec(-25.75 - 0.125 - 4.5 + 19 * i / mult8, 31.75 - 20 * j / mult8, 1.5 / mult8, 0.5 / mult8, 0x24D720);
    draw_rec(-26.5 - 0.125 - 4.5 + 19 * i / mult8, 31 - 20 * j / mult8, 0.5 / mult8, 1.5 / mult8, 0x24D720);
    draw_rec(-25 - 0.125 - 4.5 + 19 * i / mult8, 31 - 20 * j / mult8, 0.5 / mult8, 1.5 / mult8, 0x24D720);
    draw_rec(-25.75 - 0.125 - 4.5 + 19 * i / mult8, 30 - 20 * j / mult8, 1.5 / mult8, 0.5 / mult8, 0x24D720);
    draw_rec(-26.5 - 0.125 - 4.5 + 19 * i / mult8, 29 - 20 * j / mult8, 0.5 / mult8, 1.5 / mult8, 0x24D720);
    draw_rec(-25 - 0.125 - 4.5 + 19 * i / mult8, 29 - 20 * j / mult8, 0.5 / mult8, 1.5 / mult8, 0x24D720);
    draw_rec(-25.75 - 0.125 - 4.5 + 19 * i / mult8, 28.25 - 20 * j / mult8, 1.5 / mult8, 0.5 / mult8, 0x24D720);
}