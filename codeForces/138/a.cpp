#include <cmath>
#include <iostream>
#include <iomanip>
#include <string>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
   int one, two, three;
   cin >> one >> two >> three;
   cin.clear();

   int b = sqrt((one*two)/three),
       a = one/b,
       c = two/b;
   cout << ((a + b + c) * 4);   
   return 0;
}