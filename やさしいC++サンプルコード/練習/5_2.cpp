#include <iostream>
using namespace std;

int main()
{
   int num1, num2;

   cout << "2つの整数を入力してください。\n";
   cin >> num1 >> num2;
   if (num1 < num2) {
      cout << num1 << "より" << num2 << "のほうが大きい値です。\n";
   }
   else if(num1 > num2) {
      cout << num2 << "より" << num1 << "のほうが大きい値です。\n";
   }
   else{
      cout << "2つの数は同じ値です。\n";
   }

   return 0;
}
