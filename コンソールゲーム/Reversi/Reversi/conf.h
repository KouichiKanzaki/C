//�萔�ݒ�
#define BOARD_WIDTH     8
#define BOARD_HEIGHT    8

//�ϐ��錾
enum {
    TURN_BLACK,
    TURN_WHITE,
    TURN_NONE,
    TURN_MAX,
};
const char* diskAA[TURN_MAX] = {
    "��",
    "��",
    "�E",
};
typedef struct {
    int x, y;
}VEC2;
int board[BOARD_HEIGHT][BOARD_WIDTH];
VEC2 cursorPosition;

//�v���g�^�C�v�錾
void Init(void);
void DrawScreen(void);
