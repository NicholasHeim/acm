#include <cmath>
#include <iostream>
#include <iomanip>
#include <string>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
   // 10^9 + 7 IS prime. Look for fast modulus algorithm.
   // 1&2 consist of one operation. 
   // When putting s into a, just swap pointers to the arrays.

   // 1 <= n <= 2000
   // 0 <= k <= 10^9
   int n;
   long k;
   cin >> n >> k;
   cin.clear();
   cin.ignore(1000, '\n');

   vector<long> values, sum;
   long value = 1, temp;
   while(value <= n && cin >> temp)
   {
      values.push_back(temp);
      ++value;
   }


   return 0;
}