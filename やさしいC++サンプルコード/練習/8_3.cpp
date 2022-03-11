#include <iostream>
using namespace std;

//add関数の宣言
void add(int& x1, int& x2, int a);

int main()
{
   int num1 = 0;
   int num2 = 0;
   int ad = 0;

   cout << "2科目分の点数を入力してください。\n";
   cin >> num1 >> num2;
   cout << "加算する点数を入力してください。\n";
   cin >> ad;
   add(num1, num2, ad);
   cout << ad << "点加算しましたので\n";
   cout << "科目1は" << num1 << "点となりました。\n";
   cout << "科目2は" << num2 << "点となりました。\n";

   return 0;
}

//add関数の定義
void add(int& x1, int& x2, int a)
{
   x1 += a;
   x2 += a;
}
