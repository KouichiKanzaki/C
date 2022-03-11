#include <iostream>
using namespace std;

//lengthŠÖ”‚ÌéŒ¾
int length(char* c);

int main()
{
   char str[100];
   cout << "•¶š—ñ‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢B\n";
   cin >> str;
   int ln = length(str);
   cout << "•¶š—ñ‚Ì’·‚³‚Í" << ln << "‚Å‚·B\n";

   return 0;
}

//lengthŠÖ”‚Ì’è‹`
int length(char* c)
{
   int i = 0;
   while(c[i]){
      i++;
   }
   return i;
}
