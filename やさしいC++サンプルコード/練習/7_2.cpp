#include <iostream>
using namespace std;

//square関数の宣言
int square(int x);
double square(double x);

//square関数の呼び出し
int main()
{
   int num1;
   int sq1;
   cout << "整数を入力してください。\n";
   cin >> num1;
   sq1 = square(num1);
   cout << num1 << "の2乗は" << sq1 << "です。\n";

   double num2;
   double sq2;
   cout << "小数を入力してください。\n";
   cin >> num2;
   sq2 = square(num2);
   cout << num2 << "の2乗は" << sq2 << "です。\n";

   return 0;
}

//square関数(int型)の定義
int square(int x)
{
   return x * x;
}

//square関数(double型)の定義
double square(double x)
{
   return x * x;
}

