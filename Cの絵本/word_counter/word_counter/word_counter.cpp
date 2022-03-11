#include <iostream>

int main()
{
    char c = '\0';
    char prevletter;
    int wordnum;
    int word_in;
    //入力繰り返し
    while (1) {
        wordnum = 0;
        word_in = 0;
        prevletter = '\n';
        printf("文字列を入力してください：");
        // 1行分
        while (1) {
            c = getchar();
            if (c == '\n') {
                if (word_in)
                    wordnum++;
                break;
            }
            prevletter = c;
            if (c == ' ' || c == '.') {
                if (word_in) {
                    wordnum++;
                    word_in = 0;
                }
            }
            else {
                word_in = 1;
            }
        }
        if (prevletter == '\n') {
            break;
        }
        printf("単語数=　%d\n", wordnum);
    }
}
