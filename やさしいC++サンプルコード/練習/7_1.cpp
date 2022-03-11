#include <iostream>
using namespace std;

//square関数の宣言
int square(int x);

//sqr関数の呼び出し
int main()
{
   int num1;
   int sq1;
   cout << "整数を入力してください。\n";
   cin >> num1;
   sq1 = square(num1);
   cout << num1 << "の2乗は" << sq1 << "です。\n";

   return 0;
}

//square関数の定義
int square(int x)
{
   return x * x;
}
