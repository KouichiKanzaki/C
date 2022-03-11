#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#define BOARD_WIDTH 8
#define BOARD_HEIGHT 8
#define DIRECTION_MAX 8
enum {
	COLOR_NONE = -1,
	COLOR_BLACK = 0,
	COLOR_WHITE = 1,
	COLOR_MAX
};
int directions[][2] = {
	{0, -1},	// DIRECTION_UP
	{-1, -1},	// DIRECTION_UP_LEFT
	{-1, 0},	// DIRECTION_LEFT
	{-1, 1},	// DIRECTION_DONW_LEFT
	{0, 1},		// DIRECTION_DONW
	{1, 1},		// DIRECTION_DONW_RIGHT
	{1, 0},		// DIRECTION_RIGHT
	{1, -1}		// DIRECTION_UP_RIGHT
};
char colorNames[][5 + 1] = {
	"Black",
	"White"
};
int cels[BOARD_HEIGHT][BOARD_WIDTH];
int cursorX, cursorY;
int turn;

bool checkCanPut(int _color, int _x, int _y, bool _turnOver) {
	if (cels[_y][_x] != COLOR_NONE)
		return false;
	for (int i = 0; i < DIRECTION_MAX; i++) {
		int x = _x, y = _y;
		x += directions[i][0];
		y += directions[i][1];
		if (x < 0)
			x = 0;
		if (y < 0)
			y = 0;
		if (x > (BOARD_WIDTH - 1))
			x = BOARD_WIDTH - 1;
		if (y > (BOARD_HEIGHT - 1))
			y = BOARD_HEIGHT - 1;
		if (cels[y][x] != (_color ^ 1))
			continue;
		while (1) {
			x += directions[i][0];
			y += directions[i][1];
			if ((x < 0) || (x >= BOARD_WIDTH) || (y < 0) || (y >= BOARD_HEIGHT))
				break;
			if (cels[y][x] == COLOR_NONE)
				break;
			if (cels[y][x] == _color) {
				if (!_turnOver)
					return true;	//置ける
				//ひっくり返す
				int x2 = _x, y2 = _y;
				while (1) {
					cels[y2][x2] = _color;
					x2 += directions[i][0];
					y2 += directions[i][1];
					if ((x2 == x) && (y2 == y))
						break;
				}
			}
		}
	}
	return false;
}
bool checkCanPutALL(int _color) {
	for (int y = 0; y < BOARD_WIDTH; y++) {
		for (int x = 0; x < BOARD_HEIGHT; x++)
			if (checkCanPut(_color, x, y, false))
				return true;
	}
	return false;
}
void drawBoard() {
	system("cls");
	for (int y = 0; y < BOARD_WIDTH; y++) {
		for (int x = 0; x < BOARD_HEIGHT; x++)
			if ((x == cursorX) && (y == cursorY))
				printf("◎");
			else {
				switch (cels[y][x]) {
				case COLOR_NONE: printf("・"); break;
				case COLOR_BLACK: printf("●"); break;
				case COLOR_WHITE: printf("○"); break;
				}
			}
		printf("\n");
	}
}
int main() {
	//init
	for (int y = 0; y < BOARD_WIDTH; y++) {
		for (int x = 0; x < BOARD_HEIGHT; x++)
			cels[y][x] = COLOR_NONE;
		cels[3][3] = cels[4][4] = COLOR_WHITE;
		cels[4][3] = cels[3][4] = COLOR_BLACK;
	}
	bool cantPut = false;
	//main
	while (1) {
		drawBoard();
		if (cantPut) {
			printf("Can't put!\n");
		}
		else {
			printf("%s turn.\n", colorNames[turn]);
			cantPut = true;
		}
		cantPut = false;
		switch (_getch()) {
		case 'w':
			cursorY--;
			cursorY = (BOARD_HEIGHT + cursorY) % BOARD_HEIGHT;
			break;
		case 's':
			cursorY++;
			cursorY = (BOARD_HEIGHT + cursorY) % BOARD_HEIGHT;
			break;
		case 'd':
			cursorX++;
			cursorX = (BOARD_WIDTH + cursorX) % BOARD_WIDTH;
			break;
		case 'a':
			cursorX--;
			cursorX = (BOARD_WIDTH + cursorX) % BOARD_WIDTH;
			break;
		default:
			//置けない
			if (!checkCanPut(turn, cursorX, cursorY, false)) {
				cantPut = true;
				break;
			}
			//置ける
			checkCanPut(turn, cursorX, cursorY, true);
			cels[cursorY][cursorX] = turn;
			turn ^= 1;
			if (!checkCanPutALL(turn))
				turn ^= 1;
			break;
		}
		//end check
		if ((!checkCanPutALL(COLOR_BLACK)) && (!checkCanPutALL(COLOR_WHITE))) {
			int count[COLOR_MAX] = {};
			for (int y = 0; y < BOARD_WIDTH; y++)
				for (int x = 0; x < BOARD_HEIGHT; x++)
					if (cels[y][x] != COLOR_NONE)
						count[cels[y][x]]++;
			drawBoard();
			for (int i = 0; i < COLOR_MAX; i++)
				printf("%s:%d\n", colorNames[i], count[i]);
			if (count[COLOR_BLACK] == count[COLOR_WHITE])
				printf("Draw!\n");
			else {
				if (count[COLOR_BLACK] > count[COLOR_WHITE])
					printf("%s", colorNames[COLOR_BLACK]);
				else
					printf("%s", colorNames[COLOR_WHITE]);
				printf(" Won!\n");
			}
			_getch();
			break;
		}
	}
}