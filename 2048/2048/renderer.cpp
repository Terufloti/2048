#include "engine.cpp"
#include <wincrypt.h>
internal void
clear_screen(u32 color) {
	u32* pixel = (u32*)render_state.memory;;
	for (int y = 0; y < render_state.height; y++) {
		for (int x = 0; x < render_state.width; x++) {
			*pixel++ = color;
		}
	}
}

global_variable float render_scale = 0.01f;
global_variable float sec = 0.75;

internal void
draw_rec_in_pixels(int x0, int y0, int x1, int y1, u32 color) {

	x0 = clamp(0, x0, render_state.width);
	x1 = clamp(0, x1, render_state.width);
	y0 = clamp(0, y0, render_state.height);
	y1 = clamp(0, y1, render_state.height);

	for (int y = y0; y < y1; y++) {
		u32* pixel = (u32*)render_state.memory + x0 + y * render_state.width;
		for (int x = x0; x < x1; x++) {
			*pixel++ = color;
		}
	}
}

internal void
draw_rec(float x, float y, float half_size_x, float half_size_y, u32 color) {

	x *= render_state.height * render_scale;
	y *= render_state.height * render_scale;
	half_size_x *= render_state.height * render_scale;
	half_size_y *= render_state.height * render_scale;

	x += render_state.width / 2.f;
	y += render_state.height / 2.f;

	//change to pixels

	int x0 = x - half_size_x;
	int x1 = x + half_size_x;
	int y0 = y - half_size_y;
	int y1 = y + half_size_y;

	draw_rec_in_pixels(x0, y0, x1, y1, color);
}

internal void
draw_area4x4() {
	int val = 0;
	const short boardSize = 4;
	for (int i = 0; i < boardSize; i++) {
		for (int j = 0; j < boardSize; j++) {
			if (val = 0)
				draw_rec(-28.5 + 19 * i, 25 - 20 * j, 7.5, 7.5, 0xffffff);
			else
				draw_rec(-28.5 + 19 * i, 25 - 20 * j, 7.5, 7.5, 0x6F6F6F);
		}
	}
}
internal void
draw_area8x8() {
    int val = 0; float d = 2;
    const short boardSize = 8;
    for (int i = 0; i < boardSize; i++) {
        for (int j = 0; j < boardSize; j++) {
            if (val = 0)
                draw_rec(-33 + 19 * i/d, 30 - 20 * j/d, 7.5/d, 7.5/d, 0xffffff);
            else
                draw_rec(-33 + 19 * i/d, 30 - 20 * j/d, 7.5/d, 7.5/d, 0x6F6F6F);
        }
    }
}
internal void
draw_area16x16() {
	int val = 0; float d = 4;
	const short boardSize = 16;
	for (int i = 0; i < boardSize; i++) {
		for (int j = 0; j < boardSize; j++) {
			if (val = 0)
				draw_rec(-35.5 + 19 * i / d, 32.5 - 20 * j / d, 7.5 / d, 7.5 / d, 0xffffff);
			else
				draw_rec(-35.5 + 19 * i / d, 32.5 - 20 * j / d, 7.5 / d, 7.5 / d, 0x6F6F6F);
		}
	}
}
internal void
draw_entry4x4_b() {
	//4x4
	//4
	draw_rec(41.5, -25, 0.25, 2, 0x8c8c8c);
	draw_rec(41, -25, 0.75, 0.25, 0x8c8c8c);
	draw_rec(40.5, -24, 0.25, 1, 0x8c8c8c);
	//x
	draw_rec(45, -25, .25, .25, 0x8c8c8c);
	draw_rec(44.5, -24.5, .25, .25, 0x8c8c8c);
	draw_rec(45.5, -24.5, .25, .25, 0x8c8c8c);
	draw_rec(45.5, -25.5, .25, .25, 0x8c8c8c);
	draw_rec(44.5, -25.5, .25, .25, 0x8c8c8c);
	//4
	draw_rec(49.5, -25, 0.25, 2, 0x8c8c8c);
	draw_rec(49, -25, 0.75, 0.25, 0x8c8c8c);
	draw_rec(48.5, -24, 0.25, 1, 0x8c8c8c);
}
internal void
draw_entry4x4(float x, float y_normal) {
	//4x4
	// x=45
	//4
	draw_rec(x - 4.5, y_normal, 0.5, 6, 0x000000);
	draw_rec(x - 6.5, y_normal, 2.25, 0.5, 0x000000);
	draw_rec(x - 8.25, y_normal + 3, 0.5, 3, 0x000000);
	//x
	draw_rec(x, y_normal, .5, .5, 0x000000);
	draw_rec(x - 0.5, y_normal+0.5, .25, .25, 0x000000);
	draw_rec(x + 0.5, y_normal+0.5, .25, .25, 0x000000);
	draw_rec(x + 0.5, y_normal-0.5, .25, .25, 0x000000);
	draw_rec(x - 0.5, y_normal-0.5, .25, .25, 0x000000);
	draw_rec(x - .75, y_normal + .75, .25, .25, 0x000000);
	draw_rec(x + .75, y_normal + .75, .25, .25, 0x000000);
	draw_rec(x + .75, y_normal - .75, .25, .25, 0x000000);
	draw_rec(x - .75, y_normal - .75, .25, .25, 0x000000);
	draw_rec(x - 1, y_normal + 1, .25, .25, 0x000000);
	draw_rec(x + 1, y_normal + 1, .25, .25, 0x000000);
	draw_rec(x + 1, y_normal - 1, .25, .25, 0x000000);
	draw_rec(x - 1, y_normal - 1, .25, .25, 0x000000);
	//4
	draw_rec(x + 8.5, y_normal, 0.5, 6, 0x000000);
	draw_rec(x + 6.5, y_normal, 2.25, 0.5, 0x000000);
	draw_rec(x + 4.75, y_normal + 3, 0.5, 3, 0x000000);
}
internal void
draw_entry8x8_b() {
	//8x8
	//8


	//x
	draw_rec(0, -25, .25, .25, 0x8c8c8c);
	draw_rec(-0.5, -24.5, .25, .25, 0x8c8c8c);
	draw_rec(0.5, -24.5, .25, .25, 0x8c8c8c);
	draw_rec(0.5, -25.5, .25, .25, 0x8c8c8c);
	draw_rec(-0.5, -25.5, .25, .25, 0x8c8c8c);

}
internal void
draw_entry8x8(float x, float y_normal) {
	//8x8
	//8
	draw_rec(x+7 , y_normal - 4.5, 2.25, 0.5, 0x000000);
	draw_rec(x+4.75, y_normal - 2.5, 0.5, 2.25, 0x000000);
	draw_rec(x+9.25 , y_normal - 2.5, 0.5, 2.25, 0x000000);
	draw_rec(x+7, y_normal, 2.25, 0.5, 0x000000);
	draw_rec(x+4.75 , y_normal + 2.5, 0.5, 2.25, 0x000000);
	draw_rec(x+9.25 , y_normal + 2.5, 0.5, 2.25, 0x000000);
	draw_rec(x+7, y_normal + 4.5, 2.25, 0.5, 0x000000);
	
	//x
	draw_rec(x, y_normal, .5, .5, 0x000000);
	draw_rec(x-0.5, y_normal+0.5, .25, .25, 0x000000);
	draw_rec(x+0.5, y_normal+0.5, .25, .25, 0x000000);
	draw_rec(x+0.5, y_normal-0.5, .25, .25, 0x000000);
	draw_rec(x-0.5, y_normal-0.5, .25, .25, 0x000000);
	draw_rec(x - .75, y_normal + .75, .25, .25, 0x000000);
	draw_rec(x + .75, y_normal + .75, .25, .25, 0x000000);
	draw_rec(x + .75, y_normal - .75, .25, .25, 0x000000);
	draw_rec(x - .75, y_normal - .75, .25, .25, 0x000000);
	draw_rec(x - 1, y_normal + 1, .25, .25, 0x000000);
	draw_rec(x + 1, y_normal + 1, .25, .25, 0x000000);
	draw_rec(x + 1, y_normal - 1, .25, .25, 0x000000);
	draw_rec(x - 1, y_normal - 1, .25, .25, 0x000000);
	//8
	draw_rec(x - 7, y_normal - 4.5, 2.25, 0.5, 0x000000);
	draw_rec(x - 4.75, y_normal - 2.5, 0.5, 2.25, 0x000000);
	draw_rec(x - 9.25, y_normal - 2.5, 0.5, 2.25, 0x000000);
	draw_rec(x - 7, y_normal, 2.25, 0.5, 0x000000);
	draw_rec(x - 4.75, y_normal + 2.5, 0.5, 2.25, 0x000000);
	draw_rec(x - 9.25, y_normal + 2.5, 0.5, 2.25, 0x000000);
	draw_rec(x - 7, y_normal + 4.5, 2.25, 0.5, 0x000000);

}
internal void
draw_entry16x16_b() {
	//16x16
	//16

	//x
	draw_rec(-45, -25, .25, .25, 0x8c8c8c);
	draw_rec(-44.5, -24.5, .25, .25, 0x8c8c8c);
	draw_rec(-45.5, -24.5, .25, .25, 0x8c8c8c);
	draw_rec(-45.5, -25.5, .25, .25, 0x8c8c8c);
	draw_rec(-44.5, -25.5, .25, .25, 0x8c8c8c);
	//16

}
internal void
draw_entry_16x16(float x, float y_normal) {
	//16x16
	//16

	draw_rec(x+4, y_normal, 0.5 , 6, 0x000000);
	
	draw_rec(x+7, y_normal, 0.5, 6, 0x000000);
	draw_rec(x+8.75, y_normal, 2.25, 0.5, 0x000000);
	draw_rec(x + 8.75, y_normal+0.25 + 1.75*3, 2.25, 0.5, 0x000000);
	draw_rec(x + 8.75, y_normal - 0.25 - 1.75*3, 2.25, 0.5, 0x000000);
	draw_rec(x + 10.5, y_normal -2.75, 0.5, 2.25, 0x000000);

	//x
	draw_rec(x, y_normal, .5, .5, 0x000000);
	draw_rec(x - 0.5, y_normal + 0.5, .25, .25, 0x000000);
	draw_rec(x + 0.5, y_normal + 0.5, .25, .25, 0x000000);
	draw_rec(x + 0.5, y_normal - 0.5, .25, .25, 0x000000);
	draw_rec(x - 0.5, y_normal - 0.5, .25, .25, 0x000000);
	draw_rec(x - .75, y_normal + .75, .25, .25, 0x000000);
	draw_rec(x + .75, y_normal + .75, .25, .25, 0x000000);
	draw_rec(x + .75, y_normal - .75, .25, .25, 0x000000);
	draw_rec(x - .75, y_normal - .75, .25, .25, 0x000000);
	draw_rec(x - 1, y_normal + 1, .25, .25, 0x000000);
	draw_rec(x + 1, y_normal + 1, .25, .25, 0x000000);
	draw_rec(x + 1, y_normal - 1, .25, .25, 0x000000);
	draw_rec(x - 1, y_normal - 1, .25, .25, 0x000000);
	//16
	draw_rec(x - 10.5, y_normal, 0.5, 6, 0x000000);

	draw_rec(x - 8, y_normal, 0.5, 6, 0x000000);
	draw_rec(x - 6.25, y_normal, 2.25, 0.5, 0x000000);
	draw_rec(x - 6.25, y_normal + 0.25 + 1.75 * 3, 2.25, 0.5, 0x000000);
	draw_rec(x - 6.25, y_normal - 0.25 - 1.75 * 3, 2.25, 0.5, 0x000000);
	draw_rec(x - 4.5, y_normal - 2.75, 0.5, 2.25, 0x000000);
}

//cyferki do gry
internal void
draw_0(int i, int j) {
	//0
	draw_rec(-30 + 19 * i, 25 - 20*j, 0.5, 4, 0xFBDA75);
	draw_rec(-27 + 19 * i, 25 - 20 * j, 0.5, 4, 0xFBDA75);
	draw_rec(-28.5 + 19 * i, 28.5 - 20 * j, 1, 0.5, 0xFBDA75);
	draw_rec(-28.5 + 19 * i, 21.5 - 20 * j, 1, 0.5, 0xFBDA75);
}
internal void
draw_2(int i, int j) {
	//2
	draw_rec(-28.5 + 19 * i, 28.5 - 20 * j, 1.5, 0.5, 0xFFD34A);
	draw_rec(-27.5 + 19 * i, 27 - 20 * j, 0.5, 1.5, 0xFFD34A);
	draw_rec(-28.5 + 19 * i, 25 - 20 * j, 1.5, 0.5, 0xFFD34A);
	draw_rec(-29.5 + 19 * i, 23.5 - 20 * j, 0.5, 1.5, 0xFFD34A);
	draw_rec(-28.5 + 19 * i, 21.5 - 20 * j, 1.5, 0.5, 0xFFD34A);
}
internal void 
draw_4(int i, int j) {
	//4
	draw_rec(-27.5 + 19 * i, 25 - 20 * j, 0.5, 4, 0xFEC514);
	draw_rec(-28.5 + 19 * i, 25 - 20 * j, 1.5, 0.5, 0xFEC514);
	draw_rec(-29.5 + 19 * i, 27 - 20 * j, 0.5, 2, 0xFEC514);
}
internal void
draw_8(int i, int j) {
	//8
	draw_rec(-28.5 + 19 * i, 28.5 - 20 * j, 1.5, 0.5, 0xFEAF14);
	draw_rec(-30 + 19 * i, 26.75 - 20 * j, 0.5, 1.5, 0xFEAF14);
	draw_rec(-27 + 19 * i, 26.75 - 20 * j, 0.5, 1.5, 0xFEAF14);
	draw_rec(-28.5 + 19 * i, 25 - 20 * j, 1.5, 0.5, 0xFEAF14);
	draw_rec(-30 + 19 * i, 23.25 - 20 * j, 0.5, 1.5, 0xFEAF14);
	draw_rec(-27 + 19 * i, 23.25 - 20 * j, 0.5, 1.5, 0xFEAF14);
	draw_rec(-28.5 + 19 * i, 21.5 - 20 * j, 1.5, 0.5, 0xFEAF14);

}
internal void
draw_16(int i, int j) {
	//1
	draw_rec(-30.5 + 19 * i, 25 - 20 * j, 0.5, 4, 0xFE9A14);
	//6
	draw_rec(-27.5 + 19 * i, 25 - 20 * j, 0.5, 4, 0xFE9A14);
	draw_rec(-26.5 + 19 * i, 28.5 - 20 * j, 1.5, 0.5, 0xFE9A14);
	draw_rec(-26.5 + 19 * i, 21.5 - 20 * j, 1.5, 0.5, 0xFE9A14);
	draw_rec(-26.5 + 19 * i, 25 - 20 * j, 1.5, 0.5, 0xFE9A14);
	draw_rec(-25.5 + 19 * i, 23.25 - 20 * j, 0.5, 1.25, 0xFE9A14);
}
internal void
draw_32(int i, int j) {
	//3
	draw_rec(-30.5 + 19 * i, 28.5 - 20 * j, 1.5, 0.5, 0xFF751C);
	draw_rec(-30.5 + 19 * i, 25 - 20 * j, 1.5, 0.5, 0xFF751C);
	draw_rec(-30.5 + 19 * i, 21.5 - 20 * j, 1.5, 0.5, 0xFF751C);
	draw_rec(-29.5 + 19 * i, 25 - 20 * j, 0.5, 4, 0xFF751C);
	//2
	draw_rec(-26.5 + 19 * i, 28.5 - 20 * j, 1.5, 0.5, 0xFF751C);
	draw_rec(-25.5 + 19 * i, 26.75 - 20 * j, 0.5, 1.25, 0xFF751C);
	draw_rec(-26.5 + 19 * i, 25 - 20 * j, 1.5, 0.5, 0xFF751C);
	draw_rec(-27.5 + 19 * i, 23.25 - 20 * j, 0.5, 1.25, 0xFF751C);
	draw_rec(-26.5 + 19 * i, 21.5 - 20 * j, 1.5, 0.5, 0xFF751C);
}
internal void
draw_64(int i, int j) {
	//6
	draw_rec(-31.5 + 19 * i, 25 - 20 * j, 0.5, 4, 0xFF5D16);
	draw_rec(-30.5 + 19 * i, 28.5 - 20 * j, 1.5, 0.5, 0xFF5D16);
	draw_rec(-30.5 + 19 * i, 21.5 - 20 * j, 1.5, 0.5, 0xFF5D16);
	draw_rec(-30.5 + 19 * i, 25 - 20 * j, 1.5, 0.5, 0xFF5D16);
	draw_rec(-29.5 + 19 * i, 23.25 - 20 * j, 0.5, 1.25, 0xFF5D16);
	//4
	draw_rec(-25.5 + 19 * i, 25 - 20 * j, 0.5, 4, 0xFF5D16);
	draw_rec(-26.5 + 19 * i, 25 - 20 * j, 1.5, 0.5, 0xFF5D16);
	draw_rec(-27.5 + 19 * i, 27 - 20 * j, 0.5, 2, 0xFF5D16);
}
internal void
draw_128(int i, int j) {
	//1
	draw_rec(-33 + 19 * i, 25 - 20 * j, 0.5, 4, 0xFF4B16);
	//2
	draw_rec(-30 + 19 * i, 28.5 - 20 * j, 1.5, 0.5, 0xFF4B16);
	draw_rec(-29 + 19 * i, 26.75 - 20 * j, 0.5, 1.25, 0xFF4B16);
	draw_rec(-30 + 19 * i, 25 - 20 * j, 1.5, 0.5, 0xFF4B16);
	draw_rec(-31 + 19 * i, 23.25 - 20 * j, 0.5, 1.25, 0xFF4B16);
	draw_rec(-30 + 19 * i, 21.5 - 20 * j, 1.5, 0.5, 0xFF4B16);
	//8
	draw_rec(-25.5 + 19 * i, 28.5 - 20 * j, 1.5, 0.5, 0xFF4B16);
	draw_rec(-27 + 19 * i, 26.75 - 20 * j, 0.5, 1.5, 0xFF4B16);
	draw_rec(-24 + 19 * i, 26.75 - 20 * j, 0.5, 1.5, 0xFF4B16);
	draw_rec(-25.5 + 19 * i, 25 - 20 * j, 1.5, 0.5, 0xFF4B16);
	draw_rec(-27 + 19 * i, 23.25 - 20 * j, 0.5, 1.5, 0xFF4B16);
	draw_rec(-24 + 19 * i, 23.25 - 20 * j, 0.5, 1.5, 0xFF4B16);
	draw_rec(-25.5 + 19 * i, 21.5 - 20 * j, 1.5, 0.5, 0xFF4B16);
}
internal void
draw_256(int i, int j) {
	//2
	draw_rec(-32.5 + 19 * i, 28.5 - 20 * j, 1.5, 0.5, 0xFF2F16);
	draw_rec(-31.5 + 19 * i, 26.75 - 20 * j, 0.5, 1.25, 0xFF2F16);
	draw_rec(-32.5 + 19 * i, 25 - 20 * j, 1.5, 0.5, 0xFF2F16);
	draw_rec(-33.5 + 19 * i, 23.25 - 20 * j, 0.5, 1.25, 0xFF2F16);
	draw_rec(-32.5 + 19 * i, 21.5 - 20 * j, 1.5, 0.5, 0xFF2F16);
	//5
	draw_rec(-28.5 + 19 * i, 28.5 - 20 * j, 1.5, 0.5, 0xFF2F16);
	draw_rec(-29.5 + 19 * i, 26.75 - 20 * j, 0.5, 1.25, 0xFF2F16);
	draw_rec(-28.5 + 19 * i, 25 - 20 * j, 1.5, 0.5, 0xFF2F16);
	draw_rec(-27.5 + 19 * i, 23.25 - 20 * j, 0.5, 1.25, 0xFF2F16);
	draw_rec(-28.5 + 19 * i, 21.5 - 20 * j, 1.5, 0.5, 0xFF2F16);
	//6
	draw_rec(-25.5 + 19 * i, 25 - 20 * j, 0.5, 4, 0xFF2F16);
	draw_rec(-24.5 + 19 * i, 28.5 - 20 * j, 1.5, 0.5, 0xFF2F16);
	draw_rec(-24.5 + 19 * i, 21.5 - 20 * j, 1.5, 0.5, 0xFF2F16);
	draw_rec(-24.5 + 19 * i, 25 - 20 * j, 1.5, 0.5, 0xFF2D16);
	draw_rec(-23.5 + 19 * i, 23.25 - 20 * j, 0.5, 1.25, 0xFF2D16);
}
internal void
draw_512(int i, int j) {
	//5 +4.25
	draw_rec(-32.75 + 19 * i, 28.5 - 20 * j, 1.5, 0.5, 0xC50909);
	draw_rec(-33.75 + 19 * i, 26.75 - 20 * j, 0.5, 1.25, 0xC50909);
	draw_rec(-32.75 + 19 * i, 25 - 20 * j, 1.5, 0.5, 0xC50909);
	draw_rec(-31.75 + 19 * i, 23.25 - 20 * j, 0.5, 1.25, 0xC50909);
	draw_rec(-32.75 + 19 * i, 21.5 - 20 * j, 1.5, 0.5, 0xC50909);
	//1
	draw_rec(-28.5 + 19 * i, 25 - 20 * j, 0.5, 4, 0xC50909);
	//2      32.5 - 24.5 = 8 - o tyle zmieniæ wspó³. X
	draw_rec(-24.5 + 19 * i, 28.5 - 20 * j, 1.5, 0.5, 0xC50909);
	draw_rec(-23.5 + 19 * i, 26.75 - 20 * j, 0.5, 1.25, 0xC50909);
	draw_rec(-24.5 + 19 * i, 25 - 20 * j, 1.5, 0.5, 0xC50909);
	draw_rec(-25.5 + 19 * i, 23.25 - 20 * j, 0.5, 1.25, 0xC50909);
	draw_rec(-24.5 + 19 * i, 21.5 - 20 * j, 1.5, 0.5, 0xC50909);
}
internal void
draw_1024(int i, int j) {
	//1
	draw_rec(-34.5 + 19 * i, 25 - 20 * j, 0.5, 4, 0xADCF2D);
	//0
	draw_rec(-32.5 + 19 * i, 25 - 20 * j, 0.5, 4, 0xADCF2D);
	draw_rec(-30.5 + 19 * i, 25 - 20 * j, 0.5, 4, 0xADCF2D);
	draw_rec(-31.5 + 19 * i, 28.5 - 20 * j, 0.5, 0.5, 0xADCF2D);
	draw_rec(-31.5 + 19 * i, 21.5 - 20 * j, 0.5, 0.5, 0xADCF2D);
	//2
	draw_rec(-27.5 + 19 * i, 28.5 - 20 * j, 1.5, 0.5, 0xADCF2D);
	draw_rec(-26.5 + 19 * i, 26.75 - 20 * j, 0.5, 1.25, 0xADCF2D);
	draw_rec(-27.5 + 19 * i, 25 - 20 * j, 1.5, 0.5, 0xADCF2D);
	draw_rec(-28.5 + 19 * i, 23.25 - 20 * j, 0.5, 1.25, 0xADCF2D);
	draw_rec(-27.5 + 19 * i, 21.5 - 20 * j, 1.5, 0.5, 0xADCF2D);
	//4
	draw_rec(-22.5 + 19 * i, 25 - 20 * j, 0.5, 4, 0xADCF2D);
	draw_rec(-23.5 + 19 * i, 25 - 20 * j, 1.5, 0.5, 0xADCF2D);
	draw_rec(-24.5 + 19 * i, 27 - 20 * j, 0.5, 2, 0xADCF2D);
}
internal void
draw_2048(int i, int j) {
	//2 32.5
	draw_rec(-34.25 + 19 * i, 28.5 - 20 * j, 1.5, 0.5, 0x24D720);
	draw_rec(-33.25 + 19 * i, 26.75 - 20 * j, 0.5, 1.25, 0x24D720);
	draw_rec(-34.25 + 19 * i, 25 - 20 * j, 1.5, 0.5, 0x24D720);
	draw_rec(-35.25 + 19 * i, 23.25 - 20 * j, 0.5, 1.25, 0x24D720);
	draw_rec(-34.25 + 19 * i, 21.5 - 20 * j, 1.5, 0.5, 0x24D720);
	//0
	draw_rec(-31.5 + 19 * i, 25 - 20 * j, 0.5, 4, 0x24D720);
	draw_rec(-29.5 + 19 * i, 25 - 20 * j, 0.5, 4, 0x24D720);
	draw_rec(-30.5 + 19 * i, 28.5 - 20 * j, 0.5, 0.5, 0x24D720);
	draw_rec(-30.5 + 19 * i, 21.5 - 20 * j, 0.5, 0.5, 0x24D720);
	//4
	draw_rec(-26 + 19 * i, 25 - 20 * j, 0.5, 4, 0x24D720);
	draw_rec(-27 + 19 * i, 25 - 20 * j, 1.5, 0.5, 0x24D720);
	draw_rec(-28 + 19 * i, 27 - 20 * j, 0.5, 2, 0x24D720);
	//8
	draw_rec(-23.25 + 19 * i, 28.5 - 20 * j, 1, 0.5, 0x24D720);
	draw_rec(-24.5 + 19 * i, 26.75 - 20 * j, 0.5, 1.25, 0x24D720);
	draw_rec(-22 + 19 * i, 26.75 - 20 * j, 0.5, 1.25, 0x24D720);
	draw_rec(-23.25 + 19 * i, 25 - 20 * j, 1, 0.5, 0x24D720);
	draw_rec(-24.5 + 19 * i, 23.25 - 20 * j, 0.5, 1.25, 0x24D720);
	draw_rec(-22 + 19 * i, 23.25 - 20 * j, 0.5, 1.25, 0x24D720);
	draw_rec(-23.25 + 19 * i, 21.5 - 20 * j, 1, 0.5, 0x24D720);
}

//Score:
//-23 = x
//39.5 = y

internal void
draw_scoreboard() {
	int xs = 28.5, ys = 56, xc = 34.5, yc = 57.25, xo = 49.99, yo = 56.75, xr = -34, yr = 56, xe = -3, ye = 56.5;
	//S
	draw_rec(-16.5 - xs, -13.5 + ys, 1.5, 0.5, 0xFFD330);
	draw_rec(-18 - xs, -14.75 + ys, 0.5, 1, 0xFFD330);
	draw_rec(-17 - xs, -16 + ys, 1, 0.5, 0xFFD330);
	draw_rec(-16 - xs, -17.25 + ys, 0.5, 1, 0xFFD330);
	draw_rec(-17.5 - xs, -18.5 + ys, 1.5, 0.5, 0xFFD330);
	//c
	draw_rec(-7 - xc, -16.5 + yc, 1, 0.5, 0xFFD330);
	draw_rec(-7 - xc, -19.5 + yc, 1, 0.5, 0xFFD330);
	draw_rec(-8 - xc, -18.25 + yc, 0.5, 1.5, 0xFFD330);
	//o 
	draw_rec(10.5 - xo , -17.25 + yo, 0.5, 1, 0xFFD330);
	draw_rec(13 - xo, -17.25 + yo, 0.5, 1, 0xFFD330);
	draw_rec(11.75 - xo, -18.5 + yo, 1, 0.5, 0xFFD330);
	draw_rec(11.75 - xo, -16 + yo, 1, 0.5, 0xFFD330);
	//r
	draw_rec(xr, -17 + yr, 0.5, 2, 0xFFD330);
	draw_rec(xr+1, -16.5 + yr, 0.5, 0.5, 0xFFD330);
	//e
	draw_rec(-28 + xe, -15.5 + ye, 1 , 0.5 , 0xFFD330);
	draw_rec(-28 + xe, -17 + ye, 1, 0.5, 0xFFD330);
	draw_rec(-27.5 + xe, -18.5 + ye, 1.5, 0.5, 0xFFD330);
	draw_rec(-28.5 + xe, -17 + ye, 0.5, 2, 0xFFD330);
	draw_rec(-27 + xe, -16.25 + ye, 0.5, 0.5, 0xFFD330);
	//:
	draw_rec(-28, 40, 0.5, 0.5, 0xFFD330);
	draw_rec(-28, 38, 0.5, 0.5, 0xFFD330);
}
internal void
draw_score(int score_num,float x, float y, float size, u32 color) {
	bool drew_score = false;
	while (score_num || !drew_score) {
		drew_score = true;
		int digit = score_num % 10;
		score_num = score_num / 10;
		switch (digit) {
		case 0: {
			x -= 1;
			draw_rec(x-0.625, y, 0.25, 2, color);
			draw_rec(x+0.625, y, 0.25, 2, color);
			draw_rec(x, y+1.75, .725, 0.25, color);
			draw_rec(x, y-1.75, .725, 0.25, color);
			x -= 1;
		} break;
		case 1: {
			x -= 0.5;
			draw_rec(x, y, 0.25, 2, color);
			x -= 0.5;
		} break;
		case 2: {
			x -= 1;
			draw_rec(x,y+1.75, .75, 0.25, color);
			draw_rec(x+0.5, y+1, 0.25, .75, color);
			draw_rec(x, y, .75, 0.25, color);
			draw_rec(x-0.5, y-1, 0.25, .75, color);
			draw_rec(x,y-1.75, .75, 0.25, color);
			x -= 1;
		} break;
		case 3: {
			x -= 1;
			draw_rec(x, y+1.75, .75, 0.25, color);
			draw_rec(x+0.5, y+1, 0.25, .75, color);
			draw_rec(x, y, .75, 0.25, color);
			draw_rec(x+0.5, y-1, 0.25, .75, color);
			draw_rec(x, y-1.75, .75, 0.25, color);
			x -= 1;
		} break;
		case 4: {
			x -= 1;
			draw_rec(x+0.5, y, 0.25, 2, color);
			draw_rec(x, y, .75, 0.25, color);
			draw_rec(x-0.5, y+1, 0.25, 1, color);
			x -= 1;
		} break;
		case 5: {
			x -= 1;
			draw_rec(x,y+1.75, .75, 0.25, color);
			draw_rec(x-0.5, y+1, 0.25, .75, color);
			draw_rec(x, y, .75, 0.25, color);
			draw_rec(x+0.5, y-1, 0.25, .75, color);
			draw_rec(x, y-1.75, .75, 0.25, color);
			x -= 1;
		} break;
		case 6: {
			x -= 1;
			draw_rec(x-0.5, y, 0.25, 2, color);
			draw_rec(x, y+1.75, .75, 0.25, color);
			draw_rec(x, y-1.75, .75, 0.25, color);
			draw_rec(x, y, .75, 0.25, color);
			draw_rec(x+0.5, y-0.875, 0.25, .625, color);
			x -= 1;
		} break;
		case 7: {
			x -= 1;
			draw_rec(x, y+1.75, .75, 0.25, color);
			draw_rec(x+0.5, y, 0.25, 2, color);
			x -= 1;
		} break;
		case 8: {
			x -= 1;
			draw_rec(x,y+1.75, .75, 0.25, color);
			draw_rec(x+0.75, y+1, 0.25, .75, color);
			draw_rec(x-0.75, y+1, 0.25, .75, color);
			draw_rec(x, y, .75, 0.25, color);
			draw_rec(x+0.75, y-1, 0.25, .75, color);
			draw_rec(x-0.75, y-1, 0.25, .75, color);
			draw_rec(x, y-1.75, .75, 0.25, color);
			x -= 1;
		} break;
		case 9: {
			x -= 1;
			draw_rec(x+0.5, y, 0.25, 2, color);
			draw_rec(x, y+1.75, .75, 0.25, color);
			draw_rec(x, y-1.75, .75, 0.25, color);
			draw_rec(x, y, .75, 0.25, color);
			draw_rec(x-0.5, y+0.875, 0.25, .625, color);
			x -= 1;
		} break;
		}
	}
}





