#include <iostream>
#include <string>
 
using namespace std;
 
int main(int argc, char const *argv[])
{
   int cases;
   cin >> cases;
 
   int length, subLength, distinct;
   string output, letters = "abcdefghijklmnopqrstuvwxyz";
 
   for (int i = 0; i < cases; ++i)
   {
      cin >> length >> subLength >> distinct;
 
      /* 
         Cases: 
            length == sublength: put in the required distinct letter then repeat
            subLength == distinct: repeat the same distinct letters until length is reached
            distinct < subLength < length: 
       */
      
      if(distinct < subLength && subLength < length)
      {
         output = letters.substr(0, distinct);
         while (output.length() < subLength)
            output += output;
         
         output = output.substr(0, subLength);
 
         while (output.length() < length)
            output += output;
         
         cout << output.substr(0, length) << endl;
      }
      else if(length == subLength)
      {
         while (output.length() < length)
            output += letters.substr(0, distinct);
         
         cout << output.substr(0, length) << endl;
      }
      else if(subLength == distinct)
      {
         output = letters.substr(0, subLength);
         while (output.length() < length)
            output += output;
         
         cout << output.substr(0, length) << endl;
      }
 
      output = "";
   }
   return 0;
}