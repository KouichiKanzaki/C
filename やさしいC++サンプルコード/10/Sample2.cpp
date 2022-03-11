#include <iostream>
using namespace std;

//countŠÖ”‚ÌéŒ¾
void count();

int a = 0;

//mainŠÖ”
int main()
{
   for(int i=0; i<5; i++)
      count();

  return 0;
}

//countŠÖ”‚Ì’è‹`
void count()
{
   int b = 0;
   static int c = 0;

   cout << "•Ï”a‚Í" << a << "•Ï”b‚Í" << b << "•Ï”c‚Í" << c << "‚Å‚·B\n";

   a++;
   b++;
   c++;
}
