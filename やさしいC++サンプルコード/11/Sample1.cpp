#include <iostream>
using namespace std;

//—ñ‹“Œ^Week‚ÌéŒ¾
enum Week{SUN, MON, TUE, WED, THU, FRI, SAT};

int main()
{
   Week w;
   w = SUN;

   switch(w){
      case SUN: cout << "“ú—j‚Å‚·B\n"; break;
      case MON: cout << "Œ—j‚Å‚·B\n"; break;
      case TUE: cout << "‰Î—j‚Å‚·B\n"; break;
      case WED: cout << "…—j‚Å‚·B\n"; break;
      case THU: cout << "–Ø—j‚Å‚·B\n"; break;
      case FRI: cout << "‹à—j‚Å‚·B\n"; break;
      case SAT: cout << "“y—j‚Å‚·B\n"; break;
      default: cout << "‰½—j“ú‚¾‚©‚í‚©‚è‚Ü‚¹‚ñB\n"; break;
   }

   return 0;
}
