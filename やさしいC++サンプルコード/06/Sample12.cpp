#include <iostream>
using namespace std;

int main()
{
   int res;

   cout << "何番目の処理を飛ばしますか？（1～10）\n";

   cin >> res;

   for(int i=1; i<=10; i++){
      if(i == res)
         continue;
      cout << i << "番目の処理です。\n";
   }

   return 0;
}
