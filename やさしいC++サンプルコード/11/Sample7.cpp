#include <iostream>
using namespace std;

//共用体型Yearの宣言
union Year{
   int ad;
   int gengo; 
};

int main()
{
   Year myyear;

   cout << "西暦年を入力してください。\n";
   cin >> myyear.ad;

   cout << "西暦は" << myyear.ad << "です。\n";
   cout << "元号も" << myyear.gengo << "です。\n";

   cout << "元号を入力してください。\n";
   cin >> myyear.gengo;

   cout << "元号は" << myyear.gengo << "です。\n";
   cout << "西暦も" << myyear.ad << "です。\n";

   return 0;
}
