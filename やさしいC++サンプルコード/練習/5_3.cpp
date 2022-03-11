#include <iostream>
using namespace std;

int main()
{
   int res;

   cout << "成績を入力してください。\n";
   cin >> res;
   
   cout << "成績は" << res <<"です。";
   
   switch(res){
   case 1:
      cout << "もっとがんばりましょう。\n";
      break;
   case 2:
      cout << "もう少しがんばりましょう。\n";
      break;
   case 3:
      cout << "さらに上をめざしましょう。\n";
      break;
   case 4:
      cout << "たいへんよくできました。\n";
      break;
   case 5:
      cout << "たいへん優秀です。\n";
      break;
   }

   return 0;
}
