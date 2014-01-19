//
//  C++ sample algirthm code from The Geek Stuff (TGS) article at
//  http://www.thegeekstuff.com/2014/01/cpp-binary-exercise/?utm_source=feedburner&utm_medium=email&utm_campaign=Feed%3A+TheGeekStuff+%28The+Geek+Stuff%29
//
// The code has been reformatted for readability and at least one bug fixed (where the code hangs at the end).
//

#include <iostream>

using namespace std;

void Display(int i, int j, int n)
{
   for (int k = 1; k <= n; k++) 
   {
      if ((k == i) || (k == j)) 
            cout << '1';
       else cout << '0';
   }

   cout << endl;
}

int main(void)
{

   cout << endl << "How many digits in the binary number->";
   int iN;
   cin >> iN;

   cout << endl;

   //Start position for left and right marker
   int i = iN - 1,
      j = iN;

   while (!((i == 1) && (j == 2)))
   {
      Display(i, j, iN);

      if (i == j - 1)
      {
         i--;
         j = iN;
         // cout << endl;
      }
      else
      {
         j--;
      }
   }

   cout << "11";
   for (int i = 2; i < iN; cout << '0', i++) ;
   cout << endl;

   cout << endl;

   return EXIT_SUCCESS;
}


