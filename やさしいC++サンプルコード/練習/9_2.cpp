#include <iostream>
using namespace std;

//length関数の宣言
int length(char* c);

int main()
{
   char str[100];
   cout << "文字列を入力してください。\n";
   cin >> str;
   int ln = length(str);
   cout << "文字列の長さは" << ln << "です。\n";

   return 0;
}

//length関数の定義
int length(char* c)
{
   int i = 0;
   while(c[i]){
      i++;
   }
   return i;
}
