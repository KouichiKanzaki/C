#include <iostream>
using namespace std;

//構造体型Personの宣言
struct Person{
   int age;
   double weight;
   double height;
};

int main()
{
   Person ps[2];

   for(int i=0; i<2; i++){
      cout << "年齢を入力してください。\n";
      cin >> ps[i].age;
      cout << "体重を入力してください。\n";
      cin >> ps[i].weight;
      cout << "身長を入力してください。\n";
      cin >> ps[i].height;
   }

   for(int j=0; j<2; j++){
      cout << "年齢" << ps[j].age << "体重" << ps[j].weight << "身長" << ps[j].height << "です。\n";
}
   return 0;
}
