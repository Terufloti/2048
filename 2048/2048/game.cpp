#define is_down(b) input ->buttons[b].is_down
#define pressed(b) (input ->buttons[b].is_down && input ->buttons[b].changed)
#define released(b) (!input ->buttons[b].is_down && input ->buttons[b].changed)



int board[boardSize][boardSize];
int beforeAction[boardSize][boardSize];
const short boardSize8 = 8;
int board8[boardSize8][boardSize8];
int beforeAction8[boardSize8][boardSize8];
const short boardSize16 = 16;
int board16[boardSize16][boardSize16];
int beforeAction16[boardSize16][boardSize16];


internal void
simulate_game4x4(Input* input) {


		//Ca³oœæ na (bia³o)
		clear_screen(0xffffff);
		//Background 2048 (plansza)
		draw_rec(0, -5, 40, 40, 0x3f3f3f);
		//gorna belka
		draw_rec(0, 40, 50, 4, 0x3f3f3f);
		draw_scoreboard();

		//pola bez liczb
		draw_area4x4();

		//Wszystkie liczby przez ca³oœæ gry
		for (int i = 0; i < boardSize; i++) {
			for (int j = 0; j < boardSize; j++) {
				switch (board[i][j]) {
				case 0: /*draw_0(i, j)*/; break;
				case 2: draw_2(i, j); break;
				case 4: draw_4(i, j); break;
				case 8: draw_8(i, j); break;
				case 16: draw_16(i, j); break;
				case 32: draw_32(i, j); break;
				case 64: draw_64(i, j); break;
				case 128: draw_128(i, j); break;
				case 256: draw_256(i, j); break;
				case 512: draw_512(i, j); break;
				case 1024: draw_1024(i, j); break;
				case 2048: draw_2048(i, j); break;
				}
			}
		}

		draw_score(score,48,39.5,1.f, 0xFFD330);
		
		
		// skopiowanie aktualnej tablicy do beforeAction
		for (int i = 0; i < boardSize; i++) { 
			for (int j = 0; j < boardSize; j++) {
				beforeAction[i][j] = board[i][j];
			}
		}
		sameArrays = true;

		//UP
		if (pressed(BUTTON_UP)) {
			moveUp(board);
			for (int i = 0; i < boardSize; i++) {
				for (int j = 0; j < boardSize; j++) {
					if (board[i][j] != beforeAction[i][j]) {
						sameArrays = false;
					}
				}
			}
			if (sameArrays == false) {
				saveToBoard(board);
				for (int i = 0; i < boardSize; i++) {
					for (int j = 0; j < boardSize; j++) {
					}
				}
			}
			if (endGame(board) == true) {
				running = false;
			}
		}

		//DOWN
		if (pressed(BUTTON_DOWN)) {
			moveDown(board);
			for (int i = 0; i < boardSize; i++) {
				for (int j = 0; j < boardSize; j++) {
					if (board[i][j] != beforeAction[i][j]) {
						sameArrays = false;
					}
				}
			}
			if (sameArrays == false) {
				saveToBoard(board);
				for (int i = 0; i < boardSize; i++) {
					for (int j = 0; j < boardSize; j++) {
					}
				}
			}
			if (endGame(board) == true) {
				running = false;
			}
		}

		//LEFT
		if (pressed(BUTTON_LEFT)) {
			moveLeft(board);
			for (int i = 0; i < boardSize; i++) {
				for (int j = 0; j < boardSize; j++) {
					if (board[i][j] != beforeAction[i][j]) {
						sameArrays = false;
					}
				}
			}
			if (sameArrays == false) {
				saveToBoard(board);
				for (int i = 0; i < boardSize; i++) {
					for (int j = 0; j < boardSize; j++) {
					}
				}
			}
			if (endGame(board) == true) {
				running = false;
			}
		}

		//RIGHT
		if (pressed(BUTTON_RIGHT)) {
			moveRight(board);
			for (int i = 0; i < boardSize; i++) {
				for (int j = 0; j < boardSize; j++) {
					if (board[i][j] != beforeAction[i][j]) {
						sameArrays = false;
					}
				}
			}
			if (sameArrays == false) {
				saveToBoard(board);
				for (int i = 0; i < boardSize; i++) {
					for (int j = 0; j < boardSize; j++) {
					}
				}
			}
			if (endGame(board) == true) {
				running = false;
			}
		}


		//ESC
		if (pressed(BUTTON_ESC)) {
			running = false;
			endScreen = false; //false poki co...
		}
}

internal void
simulate_game8x8(Input* input) {


	
	



	//Ca³oœæ na (bia³o)
	clear_screen(0xffffff);
	//Background 2048 (plansza)
	draw_rec(0, -5, 40, 40, 0x3f3f3f);
	//pola (bez liczb)
	draw_rec(0, 40, 50, 4, 0x3f3f3f);
	draw_scoreboard();


	draw_area8x8();

	//Wszystkie liczby przez ca³oœæ gry
	for (int i = 0; i < boardSize8; i++) {
		for (int j = 0; j < boardSize8; j++) {
			switch (board8[i][j]) {
			case 0: /*draw_0_8(i, j)*/; break;
			case 2: draw_2_8(i, j); break;
			case 4: draw_4_8(i, j); break;
			case 8: draw_8_8(i, j); break;
			case 16: draw_16_8(i, j); break;
			case 32: draw_32_8(i, j); break;
			case 64: draw_64_8(i, j); break;
			case 128: draw_128_8(i, j); break;
			case 256: draw_256_8(i, j); break;
			case 512: draw_512_8(i, j); break;
			case 1024: draw_1024_8(i, j); break;
			case 2048: draw_2048_8(i, j); break;
			}
		}
	}


	draw_score(score, 48, 39.5, 1.f, 0xFFD330);


	// skopiowanie aktualnej tablicy do beforeAction8
	for (int i = 0; i < boardSize8; i++) {
		for (int j = 0; j < boardSize8; j++) {
			beforeAction8[i][j] = board8[i][j];
		}
	}
	sameArrays = true;

	//UP
	if (pressed(BUTTON_UP)) {
		moveUp8(board8);
		for (int i = 0; i < boardSize8; i++) {
			for (int j = 0; j < boardSize8; j++) {
				if (board8[i][j] != beforeAction8[i][j]) {
					sameArrays = false;
				}
			}
		}
		if (sameArrays == false) {
			saveToBoard8(board8);
			for (int i = 0; i < rozmiar8; i++) {
				for (int j = 0; j < rozmiar8; j++) {
				}
			}
		}
		if (endGame8(board8) == true) {
			running = false;
		}
	}

	//DOWN
	if (pressed(BUTTON_DOWN)) {
		moveDown8(board8);
		for (int i = 0; i < rozmiar8; i++) {
			for (int j = 0; j < rozmiar8; j++) {
				if (board8[i][j] != beforeAction8[i][j]) {
					sameArrays = false;
				}
			}
		}
		if (sameArrays == false) {
			saveToBoard8(board8);
			for (int i = 0; i < rozmiar8; i++) {
				for (int j = 0; j < rozmiar8; j++) {
				}
			}
		}
		if (endGame8(board8) == true) {
			running = false;
		}
	}

	//LEFT
	if (pressed(BUTTON_LEFT)) {
		moveLeft8(board8);
		for (int i = 0; i < rozmiar8; i++) {
			for (int j = 0; j < rozmiar8; j++) {
				if (board8[i][j] != beforeAction8[i][j]) {
					sameArrays = false;
				}
			}
		}
		if (sameArrays == false) {
			saveToBoard8(board8);
			for (int i = 0; i < rozmiar8; i++) {
				for (int j = 0; j < rozmiar8; j++) {
				}
			}
		}
		if (endGame8(board8) == true) {
			running = false;
		}
	}

	//RIGHT
	if (pressed(BUTTON_RIGHT)) {
		moveRight8(board8);
		for (int i = 0; i < rozmiar8; i++) {
			for (int j = 0; j < rozmiar8; j++) {
				if (board8[i][j] != beforeAction8[i][j]) {
					sameArrays = false;
				}
			}
		}
		if (sameArrays == false) {
			saveToBoard8(board8);
			for (int i = 0; i < rozmiar8; i++) {
				for (int j = 0; j < rozmiar8; j++) {
				}
			}
		}
		if (endGame8(board8) == true) {
			running = false;
		}
	}


	//ESC
	if (pressed(BUTTON_ESC)) {
		running = false;
		endScreen = false; //false poki co...
	}
}

internal void
simulate_game16x16(Input* input) {
	//Ca³oœæ na (bia³o)
	clear_screen(0xffffff);
	//Background 2048 (plansza)
	draw_rec(0, -5, 40, 40, 0x3f3f3f);
	//pola (bez liczb)
	draw_rec(0, 40, 50, 4, 0x3f3f3f);
	draw_scoreboard();

	draw_area16x16();
	

	//Wszystkie liczby przez ca³oœæ gry
	for (int i = 0; i < boardSize16; i++) {
		for (int j = 0; j < boardSize16; j++) {
			switch (board16[i][j]) {
			case 0: /*draw_0_16(i, j)*/; break;
			case 2: draw_2_16(i, j); break;
			case 4: draw_4_16(i, j); break;
			case 8: draw_8_16(i, j); break;
			case 16: draw_16_16(i, j); break;
			case 32: draw_32_16(i, j); break;
			case 64: draw_64_16(i, j); break;
			case 128: draw_128_16(i, j); break;
			case 256: draw_256_16(i, j); break;
			case 512: draw_512_16(i, j); break;
			case 1024: draw_1024_16(i, j); break;
			case 2048: draw_2048_16(i, j); break;
			}
		}
	}


	draw_score(score, 48, 39.5, 1.f, 0xFFD330);


	// skopiowanie aktualnej tablicy do beforeAction
	for (int i = 0; i < boardSize16; i++) {
		for (int j = 0; j < boardSize16; j++) {
			beforeAction16[i][j] = board16[i][j];
		}
	}
	sameArrays = true;


	//UP
	if (pressed(BUTTON_UP)) {
		moveUp16(board16);
		for (int i = 0; i < boardSize16; i++) {
			for (int j = 0; j < boardSize16; j++) {
				if (board16[i][j] != beforeAction16[i][j]) {
					sameArrays = false;
				}
			}
		}
		if (sameArrays == false) {
			saveToBoard16(board16);
			for (int i = 0; i < boardSize16; i++) {
				for (int j = 0; j < boardSize16; j++) {
				}
			}
		}
		if (endGame16(board16) == true) {
			running = false;
		}
	}

	//DOWN
	if (pressed(BUTTON_DOWN)) {
		moveDown16(board16);
		for (int i = 0; i < boardSize16; i++) {
			for (int j = 0; j < boardSize16; j++) {
				if (board16[i][j] != beforeAction16[i][j]) {
					sameArrays = false;
				}
			}
		}
		if (sameArrays == false) {
			saveToBoard16(board16);
			for (int i = 0; i < boardSize16; i++) {
				for (int j = 0; j < boardSize16; j++) {
				}
			}
		}
		if (endGame16(board16) == true) {
			running = false;
		}
	}

	//LEFT
	if (pressed(BUTTON_LEFT)) {
		moveLeft16(board16);
		for (int i = 0; i < boardSize16; i++) {
			for (int j = 0; j < boardSize16; j++) {
				if (board16[i][j] != beforeAction16[i][j]) {
					sameArrays = false;
				}
			}
		}
		if (sameArrays == false) {
			saveToBoard16(board16);
			for (int i = 0; i < boardSize16; i++) {
				for (int j = 0; j < boardSize16; j++) {
				}
			}
		}
		if (endGame16(board16) == true) {
			running = false;
		}
	}

	//RIGHT
	if (pressed(BUTTON_RIGHT)) {
		moveRight16(board16);
		for (int i = 0; i < boardSize16; i++) {
			for (int j = 0; j < boardSize16; j++) {
				if (board16[i][j] != beforeAction16[i][j]) {
					sameArrays = false;
				}
			}
		}
		if (sameArrays == false) {
			saveToBoard16(board16);
			for (int i = 0; i < boardSize16; i++) {
				for (int j = 0; j < boardSize16; j++) {
				}
			}
		}
		if (endGame16(board16) == true) {
			running = false;
		}
	}


	//ESC
	if (pressed(BUTTON_ESC)) {
		running = false;
		endScreen = false; //false poki co...
	}
}
