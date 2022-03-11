#include <iostream>
using namespace std;

//count関数の宣言
int count(char str[], char c);

int main()
{
   char str[100];
   char ch;

   cout << "文字列を入力してください。\n";
   cin >> str;
   cout << "文字列から探す文字を入力してください。\n";
   cin >> ch;
   int c = count(str, ch);
   cout << str << "の中に" << ch << "は" << c << "個あります。\n";

   return 0;
}

//count関数の定義
int count(char str[], char ch)
{
   int i = 0;
   int c = 0;
   while(str[i]){
      if(str[i] == ch)
        c++;
      i++;
   }
   return c;
}
