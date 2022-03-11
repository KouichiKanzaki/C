#include <iostream>
using namespace std;

//squaret関数テンプレートの定義
template <class T>
T squaret(T x)
{
   return x * x;
}

//squaret関数の呼び出し
int main()
{
   int num1;
   int sq1;
   cout << "整数を入力してください。\n";
   cin >> num1;
   sq1 = squaret(num1);
   cout << num1 << "の2乗は" << sq1 << "です。\n";

   double num2;
   double sq2;
   cout << "小数を入力してください。\n";
   cin >> num2;
   sq2 = squaret(num2);
   cout << num2 << "の2乗は" << sq2 << "です。\n";

   return 0;
}
