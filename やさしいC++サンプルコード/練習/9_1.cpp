#include <iostream>
using namespace std;

//max関数の宣言
int max(int x[]);

int main()
{
   int test[5];
   cout << "テストの点数を入力してください。\n";
   for(int i=0; i<5; i++){
      cin >> test[i];
   }
   int m = max(test);
   cout << "最高点は"<< m << "点です。\n";

   return 0;
}

//max関数の定義
int max(int x[])
{
   int m = x[0];
   for(int i=1; i<5; i++){
      if(m < x[i])
         m = x[i];
   }

   return m;
}
