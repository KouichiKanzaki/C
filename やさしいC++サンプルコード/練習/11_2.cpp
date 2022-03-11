#include <iostream>
using namespace std;

//構造体型Personの宣言
struct Person{
   int age;
   double weight;
   double height;
};

//aging関数の定義
void aging(Person* p)
{
   p->age++;
}

int main()
{
   Person ps;

   cout << "年齢を入力してください。\n";
   cin >> ps.age;
   cout << "体重を入力してください。\n";
   cin >> ps.weight;
   cout << "身長を入力してください。\n";
   cin >> ps.height;

   cout << "年齢" << ps.age << "体重" << ps.weight << "身長" << ps.height << "です。\n";

   aging(&ps);
   cout << "1年経過しました。\n";

   cout << "年齢" << ps.age << "体重" << ps.weight << "身長" << ps.height << "です。\n";

   return 0;
}
