#define is_down(b) input ->buttons[b].is_down
#define pressed(b) (input ->buttons[b].is_down && input ->buttons[b].changed)
#define released(b) (!input ->buttons[b].is_down && input ->buttons[b].changed)

float przes_x = 6;
int hot_button = 0;

internal void
simulate_start(Input* input) {
	clear_screen(0xffffff);
	draw_rec(0, 0, 60, 20, 0x9A9A9A);

	//2
	draw_rec(-27, 8.5, 6, 2, 0xFFD330);
	draw_rec(-31, -4, 2, 6, 0xFFD330);
	draw_rec(-27, 0, 6, 2, 0xFFD330);
	draw_rec(-23, 4, 2, 6, 0xFFD330);
	draw_rec(-27, -8.5, 6, 2, 0xFFD330);
	//0
	draw_rec(-5, 0, 2, 10, 0xFFD330);
	draw_rec(-13, 0, 2, 10, 0xFFD330);
	draw_rec(-9, 8.5, 6, 2, 0xFFD330);
	draw_rec(-9, -8.5, 6, 2, 0xFFD330);
	//4
	draw_rec(12, 0, 2, 10.5, 0xFFD330);
	draw_rec(10, 0, 4, 2, 0xFFD330);
	draw_rec(5, 4.25, 2, 6.25, 0xFFD330);
	//8
	draw_rec(25.25, 8.5, 4, 2, 0xFFD330);
	draw_rec(22, 4.5, 2, 4, 0xFFD330);
	draw_rec(29, 4.5, 2, 4, 0xFFD330);
	draw_rec(25.25, 0, 4, 2, 0xFFD330);
	draw_rec(22, -4.5, 2, 4, 0xFFD330);
	draw_rec(29, -4.5, 2, 4, 0xFFD330);
	draw_rec(25.25, -8.5, 4, 2, 0xFFD330);


	//Press Spacebar to continue
	//Srodek duzych liter = y = -16
	//Srodek malych liter = y = -17

		//Press
			//P
				draw_rec(-35  - przes_x, -16, 0.5, 3, 0xFFD330);
				draw_rec(-34 - przes_x, -13.5, 1, 0.5, 0xFFD330);
				draw_rec(-32.5 - przes_x, -15, 0.5, 2, 0xFFD330);
				draw_rec(-34  - przes_x, -16.5, 1, 0.5, 0xFFD330);
			//r
				draw_rec(-31  - przes_x, -17, 0.5, 2, 0xFFD330);
				draw_rec(-30  - przes_x, -16.5, 0.5, 0.5, 0xFFD330);
			//e
				draw_rec(-28 - przes_x, -15.5, 1, 0.5, 0xFFD330);
				draw_rec(-28 - przes_x, -17, 1, 0.5, 0xFFD330);
				draw_rec(-27.5 - przes_x, -18.5, 1.5, 0.5, 0xFFD330);
				draw_rec(-28.5 - przes_x, -17, 0.5, 2, 0xFFD330);
				draw_rec(-27 - przes_x, -16.25, 0.5, 0.5, 0xFFD330);
			//s
				draw_rec(-24.5 - przes_x, -15.5, 1, 0.5, 0xFFD330);
				draw_rec(-24.5 - przes_x, -17, 1, 0.5, 0xFFD330);
				draw_rec(-24.5 - przes_x, -18.5, 1, 0.5, 0xFFD330);
				draw_rec(-25 - przes_x, -16.25, 0.5, 0.5, 0xFFD330);
				draw_rec(-24 - przes_x, -18, 0.5, 0.5, 0xFFD330);
			//s
				draw_rec(-21.5 - przes_x, -15.5, 1, 0.5, 0xFFD330);
				draw_rec(-21.5 - przes_x, -17, 1, 0.5, 0xFFD330);
				draw_rec(-21.5 - przes_x, -18.5, 1, 0.5, 0xFFD330);
				draw_rec(-22 - przes_x, -16.25, 0.5, 0.5, 0xFFD330);
				draw_rec(-21 - przes_x, -18, 0.5, 0.5, 0xFFD330);
	
		//Spacebar
			//S
				draw_rec(-16.5 - przes_x, -13.5, 1.5, 0.5, 0xFFD330);
				draw_rec(-18  - przes_x, -14.75, 0.5, 1, 0xFFD330);
				draw_rec(-17  - przes_x, -16, 1, 0.5, 0xFFD330);
				draw_rec(-16  - przes_x, -17.25, 0.5, 1, 0xFFD330);
				draw_rec(-17.5  - przes_x, -18.5, 1.5, 0.5, 0xFFD330);
			//p
				draw_rec(-14.5  - przes_x, -17, 0.5, 2, 0xFFD330);
				draw_rec(-13.5  - przes_x, -15.5, 1, 0.5, 0xFFD330);
				draw_rec(-13.5  - przes_x, -17.5, 1, 0.5, 0xFFD330);
				draw_rec(-13  - przes_x, -16.5, 0.5, 1, 0xFFD330);
			//a
				draw_rec(-11.5  - przes_x, -17.5, 0.5, 1.5, 0xFFD330);
				draw_rec(-9.5  - przes_x, -17.5, 0.5, 1.5, 0xFFD330);
				draw_rec(-10.5  - przes_x, -15.5, 1, 0.5, 0xFFD330);
				draw_rec(-10.5  - przes_x, -17, 1, 0.5, 0xFFD330);
			//c
				draw_rec(-7  - przes_x, -15.5, 1, 0.5, 0xFFD330);
				draw_rec(-7  - przes_x, -18.5, 1, 0.5, 0xFFD330);
				draw_rec(-8  - przes_x, -17.25, 0.5, 1.5, 0xFFD330);
			//e 
				draw_rec(-4.5  - przes_x, -15.5, 1, 0.5, 0xFFD330);
				draw_rec(-4.5  - przes_x, -17, 1, 0.5, 0xFFD330);
				draw_rec(-4  - przes_x, -18.5, 1.5, 0.5, 0xFFD330);
				draw_rec(-5  - przes_x, -17, 0.5, 2, 0xFFD330);
				draw_rec(-3.5  - przes_x, -16.25, 0.5, 0.5, 0xFFD330);
			//b
				draw_rec(-1.5  - przes_x, -17, 0.5, 2, 0xFFD330);
				draw_rec(-1  - przes_x, -15.5, 0.75, 0.5, 0xFFD330);
				draw_rec(-1  - przes_x, -17, 0.75, 0.5, 0xFFD330);
				draw_rec(-1  - przes_x, -18.5, 0.75, 0.5, 0xFFD330);
				draw_rec(0  - przes_x, -17.75, 0.5, 0.5, 0xFFD330);
				draw_rec(0  - przes_x, -16.25, 0.5, 0.5, 0xFFD330);
			//a
				draw_rec(3.5  - przes_x, -17.5, 0.5, 1.5, 0xFFD330);
				draw_rec(1.5  - przes_x, -17.5, 0.5, 1.5, 0xFFD330);
				draw_rec(2.5  - przes_x, -15.5, 1, 0.5, 0xFFD330);
				draw_rec(2.5  - przes_x, -17, 1, 0.5, 0xFFD330);
			//r
				draw_rec(5  - przes_x, -17, 0.5, 2, 0xFFD330);
				draw_rec(6  - przes_x, -16.5, 0.5, 0.5, 0xFFD330);
		
		//To
			//T
				draw_rec(9  - przes_x, -16, 0.5, 3, 0xFFD330);
				draw_rec(9  - przes_x, -13.5, 2.5, 0.5, 0xFFD330);
			//o
				draw_rec(10.5  - przes_x, -17.25, 0.5, 1, 0xFFD330);
				draw_rec(13  - przes_x, -17.25, 0.5, 1, 0xFFD330);
				draw_rec(11.75  - przes_x, -18.5, 1, 0.5, 0xFFD330);
				draw_rec(11.75  - przes_x, -16, 1, 0.5, 0xFFD330);
	
		//Continue
			//C
				draw_rec(16  - przes_x, -16, 0.5, 2.5, 0xFFD330);
				draw_rec(17.5  - przes_x, -13.5, 1.5, 0.5, 0xFFD330);
				draw_rec(17.5  - przes_x, -18.5, 1.5, 0.5, 0xFFD330);
			//o 
				draw_rec(20  - przes_x, -17.25, 0.5, 1, 0xFFD330);
				draw_rec(22.5  - przes_x, -17.25, 0.5, 1, 0xFFD330);
				draw_rec(21.25  - przes_x, -18.5, 1, 0.5, 0xFFD330);
				draw_rec(21.25  - przes_x, -16, 1, 0.5, 0xFFD330);
			//n
				draw_rec(24  - przes_x, -17.5, 0.5, 1.5, 0xFFD330);
				draw_rec(27  - przes_x, -17.5, 0.5, 1.5, 0xFFD330);
				draw_rec(25.5  - przes_x, -16, 1, 0.5, 0xFFD330);
				draw_rec(23.5  - przes_x, -16, 0.5, 0.5, 0xFFD330);
			//t
				draw_rec(29.5  - przes_x, -17, 0.5, 2, 0xFFD330);
				draw_rec(29.5  - przes_x, -16.5, 1.5, 0.5, 0xFFD330);
			//i
				draw_rec(32  - przes_x, -18, 0.5, 1, 0xFFD330);
				draw_rec(32  - przes_x, -15.5, 0.5, 0.5, 0xFFD330);
			//n
				draw_rec(34  - przes_x, -17.5, 0.5, 1.5, 0xFFD330);
				draw_rec(37  - przes_x, -17.5, 0.5, 1.5, 0xFFD330);
				draw_rec(35.5  - przes_x, -16, 1, 0.5, 0xFFD330);
				draw_rec(33.5  - przes_x, -16, 0.5, 0.5, 0xFFD330);
			//u
				draw_rec(23 + 15.5  - przes_x, -17, 0.5, 1.5, 0xFFD330);
				draw_rec(26 + 15.5  - przes_x, -17, 0.5, 1.5, 0xFFD330);
				draw_rec(24.5 + 15.5  - przes_x, -18.5, 1, 0.5, 0xFFD330);
				draw_rec(26.5 + 15.5  - przes_x, -18.5, 0.5, 0.5, 0xFFD330);
			//e  -4.5 = 30
				draw_rec(44  - przes_x, -15.5, 1, 0.5, 0xFFD330);
				draw_rec(44  - przes_x, -17, 1, 0.5, 0xFFD330);
				draw_rec(44.5  - przes_x, -18.5, 1.5, 0.5, 0xFFD330);
				draw_rec(43.5  - przes_x, -17, 0.5, 2, 0xFFD330);
				draw_rec(45  - przes_x, -16.25, 0.5, 0.5, 0xFFD330);

				if (pressed(BUTTON_SPACEBAR)) {
					startScreen = false;
				}

				if (pressed(BUTTON_ESC)) {
					startScreen = false;
					difficultyScreen = false;
					running = false;
					endScreen = false; //poki nie ma endscreen
				}


}