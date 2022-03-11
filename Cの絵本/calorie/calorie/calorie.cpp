#include <iostream>
#include "callib.h"

int main()
{
    CALORIE cal[500] = {
        {"ご飯",150.0},
        {"うどん",100.0},
        {"食パン",250.0},
    };
    int cal_num = 3;
    int mode = 0;
    std::cout << "カロリー計算ツール\n";
    while (1) {
        std::cout << "登録は1、計算は2，終了は0\n";
        std::cin >> mode;
        if (mode == 0) {
            break;
        }
        else if (mode == 1) {
            cal_num = calregist(cal, cal_num);
        }
        else if (mode == 2) {
            std::cout << "総カロリー" << calcalc(cal, cal_num) << "\n";
        }
    }
}

