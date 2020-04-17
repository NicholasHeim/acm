#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
   int cases, candies;
   cin >> cases;


   for (int i = 0; i < cases; ++i)
   {
      cin >> candies;

      if(candies > 2)
      {
         if(candies % 2 == 0)
         {
            cout << ((candies / 2) - 1) << endl;
         }
         else
         {
            cout << int(candies / 2) << endl;
         }
      }
      else
      {
         cout << "0" << endl;
      }
   }
   return 0;
}
