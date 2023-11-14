const short boardSize = 4;

internal int 
drawNumber() {
	int drawedNumber;
	int randChance = ((rand() % 10) + 1);
	if (randChance == 10) {
		drawedNumber = 4;
	}
	else {
		drawedNumber = 2;
	}
	return drawedNumber;
}

//wylosowanie pozycji w tablicy
internal std::string
drawPosition() { 
	int positionY = (rand() % boardSize);
	int positionX = (rand() % boardSize);
	std::string s2 = std::to_string(positionY);
	std::string s1 = std::to_string(positionX);
	std::string position = s2 + s1;
	return position;
}
//wpisanie nowej liczby do tabeli
internal void
saveToBoard(int board[][boardSize]) {
	std::string position, sPositionX, sPositionY;
	int positionX, positionY;
	do {
		position = drawPosition();
		sPositionY = position.substr(0, 1);
		sPositionX = position.substr(1,1);
		positionX = std::stoi(sPositionX);
		positionY = std::stoi(sPositionY);
	} while (board[positionX][positionY] != 0); // sprawdzanie czy wylosowana pozycja jest wolna
	board[positionX][positionY] = drawNumber();
}
//w góre
internal void
moveUp(int board[][boardSize]) {
	for (int i = 0; i < boardSize; i++) {
		for (int j = 1; j < boardSize; j++) {
			if (board[i][j] != 0) {
				int maxEmptyCell = -1;
				for (int k = j - 1; k >= 0; k--) {
					if (board[i][k] == board[i][j]) {
						board[i][k] += board[i][j];
						score += board[i][k];
						board[i][j] = 0;
						k = 0;
						
					}
					else if (board[i][k] == 0) {
						maxEmptyCell = k;
						if (k == 0) {
							board[i][maxEmptyCell] = board[i][j];
							board[i][j] = 0;
						}
					}
					else if (board[i][k] != 0 && maxEmptyCell >= 0) {
						board[i][maxEmptyCell] = board[i][j];
						board[i][j] = 0;
						k = 0;
						
					}
					else {
						k = 0;
					}
				}
			}
		}
	}
}
//w dó³
internal void
moveDown(int board[][boardSize]) {
	for (int i = 0; i < boardSize; i++) {
		for (int j = boardSize - 2; j >= 0; j--) {
			if (board[i][j] != 0) {
				int maxEmptyCell = -1;
				for (int k = j + 1; k < boardSize; k++) {
					if (board[i][k] == board[i][j]) {
						board[i][k] += board[i][j];
						score += board[i][k];
						board[i][j] = 0;
						k = boardSize - 1;
						
					}
					else if (board[i][k] == 0) {
						maxEmptyCell = k;
						if (k == boardSize - 1) {
							board[i][maxEmptyCell] = board[i][j];
							board[i][j] = 0;
						}
					}
					else if (board[i][k] != 0 && maxEmptyCell >= 0) {
						board[i][maxEmptyCell] = board[i][j];
						board[i][j] = 0;
						k = boardSize - 1;
						score += board[i][j];
					}
					else {
						k = boardSize - 1;
					}
				}
			}
		}
	}
}
//w lewo
internal void
moveLeft(int board[][boardSize]) {
	for (int i = 1; i < boardSize; i++) {
		for (int j = 0; j < boardSize; j++) {
			if (board[i][j] != 0) {
				int maxEmptyCell = -1;
				for (int k = i - 1; k >= 0; k--) {
					if (board[k][j] == board[i][j]) {
						board[k][j] += board[i][j];
						score += board[k][j];
						board[i][j] = 0;
						k = 0;
					}
					else if (board[k][j] == 0) {
						maxEmptyCell = k;
						if (k == 0) {
							board[maxEmptyCell][j] = board[i][j];
							board[i][j] = 0;
						}
					}
					else if (board[k][j] != 0 && maxEmptyCell >= 0) {
						board[maxEmptyCell][j] = board[i][j];
						board[i][j] = 0;
						k = 0;
					
					}
					else {
						k = 0;
					}
				}
			}
		}
	}
}
//w prawo
internal void
moveRight(int board[][boardSize]) {
	for (int i = boardSize - 2; i >= 0; i--) {
		for (int j = 0; j < boardSize; j++) {
			if (board[i][j] != 0) {
				int maxEmptyCell = -1;
				for (int k = i + 1; k < boardSize; k++) {
					if (board[k][j] == board[i][j]) {
						board[k][j] += board[i][j];
						score += board[k][j];
						board[i][j] = 0;
						k = boardSize - 1;
					}
					else if (board[k][j] == 0) {
						maxEmptyCell = k;
						if (k == boardSize - 1) {
							board[maxEmptyCell][j] = board[i][j];
							board[i][j] = 0;
						}
					}
					else if (board[k][j] != 0 && maxEmptyCell >= 0) {
						board[maxEmptyCell][j] = board[i][j];
						board[i][j] = 0;
						k = boardSize - 1;
					
					}
					else {
						k = boardSize - 1;
					}
				}
			}
		}
	}
}
//koniec gry
internal bool
endGame(int board[][boardSize]) { 
	bool end;
	for (int i = 0; i < boardSize; i++) {
		for (int j = 0; j < boardSize; j++) {
			if (board[i][j] == 0) { // jesli jest w tablicy 0 
				end = false;
				j = boardSize;
				i = boardSize;
			}
			else if (i != 0 && i != boardSize - 1 && j != 0 && j != boardSize - 1) { // sprawdza komorki wewnetrzne
				if (board[i][j] == board[i - 1][j] || board[i][j] == board[i][j + 1] || board[i][j] == board[i + 1][j] || board[i][j] == board[i][j - 1]) {
					end = false;
					j = boardSize;
					i = boardSize;
				}
				else {
					end = true;
				}
			}
			else if (i == 0) { // sprawdza 1 wiersz
				if (j != 0 && j != boardSize - 1) {
					if (board[i][j] == board[i][j + 1] || board[i][j] == board[i + 1][j] || board[i][j] == board[i][j - 1]) {
						end = false;
						j = boardSize;
						i = boardSize;
					}
					else {
						end = true;
					}
				}
				if (j == 0) {
					if (board[i][j] == board[i][j + 1] || board[i][j] == board[i + 1][j]) {
						end = false;
						j = boardSize;
						i = boardSize;
					}
					else {
						end = true;
					}
				}
				if (j == boardSize - 1) {
					if (board[i][j] == board[i + 1][j] || board[i][j] == board[i][j - 1]) {
						end = false;
						j = boardSize;
						i = boardSize;
					}
					else {
						end = true;
					}
				}
			}
			else if (i == boardSize - 1) { // sprawdza ostatni wiersz
				if (j != 0 && j != boardSize - 1) {
					if (board[i][j] == board[i - 1][j] || board[i][j] == board[i][j + 1] || board[i][j] == board[i][j - 1]) {
						end = false;
						j = boardSize;
						i = boardSize;
					}
					else {
						end = true;
					}
				}
				if (j == 0) {
					if (board[i][j] == board[i - 1][j] || board[i][j] == board[i][j + 1]) {
						end = false;
						j = boardSize;
						i = boardSize;
					}
					else {
						end = true;
					}
				}
				if (j == boardSize - 1) {
					if (board[i][j] == board[i - 1][j] || board[i][j] == board[i][j - 1]) {
						end = false;
						j = boardSize;
						i = boardSize;
					}
					else {
						end = true;
					}
				}
			}
			else if (j == 0 && i != 0 && i != boardSize - 1) { // sprawdza 1 kolumne, poza 1 i ostatnia komorka, bo byly sprawdzone wyzej
				if (board[i][j] == board[i - 1][j] || board[i][j] == board[i][j + 1] || board[i][j] == board[i + 1][j]) {
					end = false;
					j = boardSize;
					i = boardSize;
				}
				else {
					end = true;
				}
			}
			else if (j == boardSize - 1 && i != 0 && i != boardSize - 1) { // sprawdza ostatnia kolumne, poza 1 i ostatnia komorka, bo byly sprawdzone wyzej
				if (board[i][j] == board[i - 1][j] || board[i][j] == board[i + 1][j] || board[i][j] == board[i][j - 1]) {
					end = false;
					j = boardSize;
					i = boardSize;
				}
				else {
					end = true;
				}
			}
			else {
				end = true;
			}
		}
	}
	return end;
}
