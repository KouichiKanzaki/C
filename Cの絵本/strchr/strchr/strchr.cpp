#include <iostream>

int main()
{
    char s[] = "I love cat dogkk.I";
    char c = 'I';
    char* p = s;
    int n = 0;

    printf("\"%s\"の中から'%c'を探す\n", s, c);
    while (*p != '\0') {
        if (*p == c) {
            printf("%d文字目で発見\n", p - s + 1);
            n++;
        }
        p++;
    }
    if (n == 0) {
        printf("ありません\n");
    }
    else {
        printf("全部で%d個\n", n);
    }
}