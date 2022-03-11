#include <iostream>
using namespace std;

int main()
{
   int num, sum = 0;
   do{
      cout << "テストの点数を入力してください(0で終了)。\n";
      cin >> num;
      sum += num;
   }while(num);

   cout << "テストの合計点は" << sum << "点です。\n";

   return 0;
}
