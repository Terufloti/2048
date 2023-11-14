const short rozmiar16 = 16;

internal int
drawNumber16() {
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
drawPosition16() {
    int positionY = (rand() % rozmiar16);
    int positionX = (rand() % rozmiar16);
    std::string s2 = std::to_string(positionY);
    std::string s1 = std::to_string(positionX);
    std::string position = s2 + s1;
    return position;
}
//wpisanie nowej liczby do tabeli
internal void
saveToBoard16(int board[][rozmiar16]) {
    std::string position, sPositionX, sPositionY;
    int positionX, positionY;
    do {
        position = drawPosition16();
        sPositionY = position.substr(0, 1);
        sPositionX = position.substr(1, 1);
        positionX = std::stoi(sPositionX);
        positionY = std::stoi(sPositionY);
    } while (board[positionX][positionY] != 0); // sprawdzanie czy wylosowana pozycja jest wolna
    board[positionX][positionY] = drawNumber16();
}
//w gore
internal void
moveUp16(int board[][rozmiar16]) {
    for (int i = 0; i < rozmiar16; i++) {
        for (int j = 1; j < rozmiar16; j++) {
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
//w dol
internal void
moveDown16(int board[][rozmiar16]) {
    for (int i = 0; i < rozmiar16; i++) {
        for (int j = rozmiar16 - 2; j >= 0; j--) {
            if (board[i][j] != 0) {
                int maxEmptyCell = -1;
                for (int k = j + 1; k < rozmiar16; k++) {
                    if (board[i][k] == board[i][j]) {
                        board[i][k] += board[i][j];
                        score += board[i][k];
                        board[i][j] = 0;
                        k = rozmiar16 - 1;
                    }
                    else if (board[i][k] == 0) {
                        maxEmptyCell = k;
                        if (k == rozmiar16 - 1) {
                            board[i][maxEmptyCell] = board[i][j];
                            board[i][j] = 0;
                        }
                    }
                    else if (board[i][k] != 0 && maxEmptyCell >= 0) {
                        board[i][maxEmptyCell] = board[i][j];
                        board[i][j] = 0;
                        k = rozmiar16 - 1;
                    }
                    else {
                        k = rozmiar16 - 1;
                    }
                }
            }
        }
    }
}
//w lewo
internal void
moveLeft16(int board16[][rozmiar16]) {
    for (int i = 1; i < rozmiar16; i++) {
        for (int j = 0; j < rozmiar16; j++) {
            if (board16[i][j] != 0) {
                int maxEmptyCell = -1;
                for (int k = i - 1; k >= 0; k--) {
                    if (board16[k][j] == board16[i][j]) {
                        board16[k][j] += board16[i][j];
                        score += board16[k][j];
                        board16[i][j] = 0;
                        k = 0;
                    }
                    else if (board16[k][j] == 0) {
                        maxEmptyCell = k;
                        if (k == 0) {
                            board16[maxEmptyCell][j] = board16[i][j];
                            board16[i][j] = 0;
                        }
                    }
                    else if (board16[k][j] != 0 && maxEmptyCell >= 0) {
                        board16[maxEmptyCell][j] = board16[i][j];
                        board16[i][j] = 0;
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
moveRight16(int board16[][rozmiar16]) {
    for (int i = rozmiar16 - 2; i >= 0; i--) {
        for (int j = 0; j < rozmiar16; j++) {
            if (board16[i][j] != 0) {
                int maxEmptyCell = -1;
                for (int k = i + 1; k < rozmiar16; k++) {
                    if (board16[k][j] == board16[i][j]) {
                        board16[k][j] += board16[i][j];
                        score += board16[k][j];
                        board16[i][j] = 0;
                        k = rozmiar16 - 1;
                    }
                    else if (board16[k][j] == 0) {
                        maxEmptyCell = k;
                        if (k == rozmiar16 - 1) {
                            board16[maxEmptyCell][j] = board16[i][j];
                            board16[i][j] = 0;
                        }
                    }
                    else if (board16[k][j] != 0 && maxEmptyCell >= 0) {
                        board16[maxEmptyCell][j] = board16[i][j];
                        board16[i][j] = 0;
                        k = rozmiar16 - 1;
                    }
                    else {
                        k = rozmiar16 - 1;
                    }
                }
            }
        }
    }
}
//koniec gry
internal bool
endGame16(int board16[][rozmiar16]) {
    bool end;
    for (int i = 0; i < rozmiar16; i++) {
        for (int j = 0; j < rozmiar16; j++) {
            if (board16[i][j] == 0) { // jesli jest w tablicy 0
                end = false;
                j = rozmiar16;
                i = rozmiar16;
            }
            else if (i != 0 && i != rozmiar16 - 1 && j != 0 && j != rozmiar16 - 1) { // sprawdza komorki wewnetrzne
                if (board16[i][j] == board16[i - 1][j] || board16[i][j] == board16[i][j + 1] || board16[i][j] == board16[i + 1][j] || board16[i][j] == board16[i][j - 1]) {
                    end = false;
                    j = rozmiar16;
                    i = rozmiar16;
                }
                else {
                    end = true;
                }
            }
            else if (i == 0) { // sprawdza 1 wiersz
                if (j != 0 && j != rozmiar16 - 1) {
                    if (board16[i][j] == board16[i][j + 1] || board16[i][j] == board16[i + 1][j] || board16[i][j] == board16[i][j - 1]) {
                        end = false;
                        j = rozmiar16;
                        i = rozmiar16;
                    }
                    else {
                        end = true;
                    }
                }
                if (j == 0) {
                    if (board16[i][j] == board16[i][j + 1] || board16[i][j] == board16[i + 1][j]) {
                        end = false;
                        j = rozmiar16;
                        i = rozmiar16;
                    }
                    else {
                        end = true;
                    }
                }
                if (j == rozmiar16 - 1) {
                    if (board16[i][j] == board16[i + 1][j] || board16[i][j] == board16[i][j - 1]) {
                        end = false;
                        j = rozmiar16;
                        i = rozmiar16;
                    }
                    else {
                        end = true;
                    }
                }
            }
            else if (i == rozmiar16 - 1) { // sprawdza ostatni wiersz
                if (j != 0 && j != rozmiar16 - 1) {
                    if (board16[i][j] == board16[i - 1][j] || board16[i][j] == board16[i][j + 1] || board16[i][j] == board16[i][j - 1]) {
                        end = false;
                        j = rozmiar16;
                        i = rozmiar16;
                    }
                    else {
                        end = true;
                    }
                }
                if (j == 0) {
                    if (board16[i][j] == board16[i - 1][j] || board16[i][j] == board16[i][j + 1]) {
                        end = false;
                        j = rozmiar16;
                        i = rozmiar16;
                    }
                    else {
                        end = true;
                    }
                }
                if (j == rozmiar16 - 1) {
                    if (board16[i][j] == board16[i - 1][j] || board16[i][j] == board16[i][j - 1]) {
                        end = false;
                        j = rozmiar16;
                        i = rozmiar16;
                    }
                    else {
                        end = true;
                    }
                }
            }
            else if (j == 0 && i != 0 && i != rozmiar16 - 1) { // sprawdza 1 kolumne, poza 1 i ostatnia komorka, bo byly sprawdzone wyzej
                if (board16[i][j] == board16[i - 1][j] || board16[i][j] == board16[i][j + 1] || board16[i][j] == board16[i + 1][j]) {
                    end = false;
                    j = rozmiar16;
                    i = rozmiar16;
                }
                else {
                    end = true;
                }
            }
            else if (j == rozmiar16 - 1 && i != 0 && i != rozmiar16 - 1) { // sprawdza ostatnia kolumne, poza 1 i ostatnia komorka, bo byly sprawdzone wyzej
                if (board16[i][j] == board16[i - 1][j] || board16[i][j] == board16[i + 1][j] || board16[i][j] == board16[i][j - 1]) {
                    end = false;
                    j = rozmiar16;
                    i = rozmiar16;
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

