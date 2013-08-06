#include <iostream>

#include "UebungModularesProgrammieren.h"

using namespace std;
using namespace Stack;

v_stack(int s) {
   top = 0;
   if (s<0 || 10000<s) throw Bad_size();
   max_size = s;
   v = new char[1000];
}

int main ()
{
   char puffer;
   
   v_stack s(6);
   s.push('v');
      
   cin >> puffer;
   
   return 0;
}