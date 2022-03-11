#include <iostream>
using namespace std;

int main()
{
   int res; 

   cout << "¬Ñ‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢Bi1`5j\n";

   cin >> res;

   switch(res){
      case 1:
      case 2:
         cout << "‚à‚¤­‚µ‚ª‚ñ‚Î‚è‚Ü‚µ‚å‚¤B\n";
         break;
      case 3:
      case 4:
         cout << "‚±‚Ì’²Žq‚Å‚ª‚ñ‚Î‚è‚Ü‚µ‚å‚¤B\n";
         break;
      case 5:
         cout << "‚½‚¢‚Ö‚ñ—DG‚Å‚·B\n";
         break;
      default:
         cout << "1`5‚Ü‚Å‚Ì¬Ñ‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢B\n";
         break;
   }
   
   return 0;
}
