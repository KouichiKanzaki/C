#include <iostream>
using namespace std;

//Pointクラスの宣言
class Point{
    private:
     int x;
     int y;
   public:
     void setX(int a);
     void setY(int b);
     int getX(){return x;}
     int getY(){return y;}
};

//Pointクラスメンバ関数の定義
void Point::setX(int a)
{
   if(a >= 0  && a <= 10)
      x = a;
   else
      x = 0;
}
void Point::setY(int b)
{
   if(b >= 0 && b <= 10)
      y = b;
   else
      y = 0;
}

int main()
{
   Point p;
   int x, y;

   cout << "X座標を入力してください。\n";
   cin >> x;
   cout << "Y座標を入力してください。\n";
   cin >> y;
   
   p.setX(x);
   p.setY(y);
   
   cout << "座標は(" << p.getX() << "," << p.getY() << ")です。\n";

   return 0;
}
