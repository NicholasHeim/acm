#include <iostream>
#include <vector>
 
using namespace std;
 
int main(int argc, char const *argv[])
{
   // 1 <= n <= 2000
   // 0 <= k <= 10^9
   int n, k;
   cin >> n >> k;
   cin.clear();
   cin.ignore(1000, '\n');
 
   vector<long long> values, sums, *swap, *sumsp = &sums, *valuesp = &values;
   int value = 1, temp;
   while(value <= n && cin >> temp)
   {
      values.push_back(temp);
      sums.push_back(temp);
      ++value;
   }
 
   for (long i = 0; i < k; ++i)
   {
      for (long j = 1; j < n; ++j)
      {
         sumsp->at(j) = sumsp->at(j - 1) + valuesp->at(j);
      }
      swap = valuesp;
      valuesp = sumsp;
      sumsp = swap;
      if(i % 25 == 0)
         for(int j = 0; j < n; ++j)
            valuesp->at(j) = valuesp->at(j) % 1000000007;
   }
   //1000000007
   for (int j = 0; j < n; ++j)
      cout << (valuesp->at(j) % 1000000007) << " ";
 
   cout << endl;
   return 0;
}