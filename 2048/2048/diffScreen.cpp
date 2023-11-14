#define is_down(b) input ->buttons[b].is_down
#define pressed(b) (input ->buttons[b].is_down && input ->buttons[b].changed)
#define released(b) (!input ->buttons[b].is_down && input ->buttons[b].changed)

global_variable float x_normal = 45;
global_variable float y_normal = 20;
global_variable float x_easy = 0;

global_variable float x_easiest = -45;




internal void
simulate_diffScreen(Input* input) {
	clear_screen(0xffffff);
	//poziom trudnosci
	//diff easy (2)
	draw_rec(0, 0, 15, 3, 0xff0000);
	//diff normal (4)
	draw_rec(45, 0, 15, 3, 0xfaff00);
	//diff easiest (1)
	draw_rec(-45, 0, 15, 3, 0x49ff00);


	//wyswietlanie na dole "Choose difficulty level and Press Spacebar"


	if (pressed(BUTTON_LEFT)) {
		if (hot_button < 1) hot_button = 3;
		hot_button--;

	}
	else if (pressed(BUTTON_RIGHT)) {
		hot_button++;
		if (hot_button > 2 || hot_button == 3) hot_button = 0;
	}

	switch (hot_button) {
		case 2: {
			draw_rec(x_normal, 0, 15, 3, 0x7c0202);
			draw_rec(x_easy, 0, 15, 3, 0xfaff00);
			//draw_entry8x8_b();
			draw_rec(x_easiest, 0, 15, 3, 0x49ff00);
			//draw_entry16x16_b();
			//wyswietlanie na srodku 4 x 4 (duze)
			draw_entry4x4(0, y_normal);


		}break;
		case 1: {
			draw_rec(x_normal, 0, 15, 3, 0xec0b0b);
			//draw_entry4x4_b();
			draw_rec(x_easy, 0, 15, 3, 0xd4d800);
			draw_rec(x_easiest, 0, 15, 3, 0x49ff00);
			//draw_entry16x16_b();
			//wyswietlanie na srodku 8 x 8 (duze)
			draw_entry8x8(0, y_normal);


		}break;
		case 0: {
			draw_rec(x_normal, 0, 15, 3, 0xec0b0b);
			//draw_entry4x4_b();
			draw_rec(x_easy, 0, 15, 3, 0xfaff00);
			//draw_entry8x8_b();
			draw_rec(x_easiest, 0, 15, 3, 0x288d00);
			//wyswietlanie na srodku 16 x 16 duze
			draw_entry_16x16(0, y_normal);


		}break;
	}
	
	

	if (pressed(BUTTON_SPACEBAR)) {
		if (hot_button == 0) difficulty = 1;
		else if (hot_button == 1) difficulty = 2;
		else if (hot_button == 2) difficulty = 4;
		difficultyScreen = false;

	}
	else if (pressed(BUTTON_ESC)) {
		difficultyScreen = false;
		running = false;
		endScreen = false; //poki nie ma endscreen
	}




}