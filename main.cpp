#include <iostream>
#include "squareN.h"

using namespace std;
int main()
{
int vals1[] = {2, 8,6,3,5,7,4,9,2}; // not magic
    // { 2, 7, 6, 9, 5, 1, 3, 4, 8}; // not magic


       square<3> x3(vals1);
 if (x3.isMagic())
     cout << " square x3 is magic" << endl;
 else
     cout << " square x3 is NOT magic" << endl;

int vals4[] = {  9, 6, 3,16,
                 4,15,10, 5,
                 14, 1, 8,11,
                  7, 12,13,2};
square<4> x4(vals4);
 if (x4.isMagic())
     cout << " square x4 is magic" << endl;
 else
      cout << " square x4 is NOT magic" << endl;


 return 0;
}
