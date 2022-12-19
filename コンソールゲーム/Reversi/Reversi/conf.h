//定数設定
#define BOARD_WIDTH     8
#define BOARD_HEIGHT    8

//変数宣言
enum {
    TURN_BLACK,
    TURN_WHITE,
    TURN_NONE,
    TURN_MAX,
};
const char* diskAA[TURN_MAX] = {
    "●",
    "○",
    "・",
};
typedef struct {
    int x, y;
}VEC2;
int board[BOARD_HEIGHT][BOARD_WIDTH];
VEC2 cursorPosition;

//プロトタイプ宣言
void Init(void);
void DrawScreen(void);
