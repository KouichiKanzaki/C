#include <iostream>
#include <stdio.h>
#include "conf.h"

int main()
{
    Init();
    while (1) {

    }
	
}

//初期化処理
void Init() {
	for (int y = 0; y < BOARD_HEIGHT; y++) {
		for (int x = 0; x < BOARD_WIDTH; x++) {
			board[y][x] = TURN_NONE;
		}
	}
	board[4][3] = board[3][4] = TURN_BLACK;
	board[3][3] = board[4][4] = TURN_WHITE;
	DrawScreen();
}

//描画処理
void DrawScreen() {
	for (int y = 0; y < BOARD_HEIGHT; y++) {
		for (int x = 0; x < BOARD_WIDTH; x++) {
			printf("%s", diskAA[board[y][x]]);
		}
		if (y == cursorPosition.y) {
			printf("←");
		}
		printf("\n");
	}
}

