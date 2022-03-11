#include <iostream>
using namespace std;

//buy関数の定義
void buy(int x)
{
   cout << x << "万円の車を買いました。\n";
}

//buy関数の呼び出し
int main()
{
   int num;

   cout << "1台目はいくらの車を買いますか？ \n";
   cin >> num;

   buy(num);

   cout << "2台目はいくらの車を買いますか？ \n";
   cin >> num;

   buy(num);

   return 0;
}
