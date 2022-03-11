#include <iostream>
int wtoj(int, char*, int*);

int main()
{
    int wyear = -1, jyear = 0;
    char nengo[16];
    std::cout << "西暦→和暦の変換。終了する場合は0を入力\n";
    while (wyear != 0) {
        std::cout << "西暦を入力してください\n";
        std::cin >> wyear;
        if (wtoj(wyear, nengo, &jyear) == 0) {
            std::cout << "西暦" << wyear << "年は" << nengo << jyear << "年です。\n";
        }
    }
    return 0;
}
int wtoj(int wyear, char* nengo, int* jyear) {
    if (wyear >= 1868 && wyear <= 1911) {
        strcpy_s(nengo, 16, "明治");
        *jyear = wyear - 1868 + 1;
        return 0;
    }
    else if (wyear >= 1912 && wyear <= 1925) {
        strcpy_s(nengo, 16, "大正");
        *jyear = wyear - 1912 + 1;
        return 0;
    }
    else if (wyear >= 1926 && wyear <= 1988) {
        strcpy_s(nengo, 16, "昭和");
        *jyear = wyear - 1926 + 1;
        return 0;
    }
    else if (wyear >= 1989 && wyear <= 2050) {
        strcpy_s(nengo, 16, "平成");
        *jyear = wyear - 1989 + 1;
        return 0;
    }
    return 1;
}
