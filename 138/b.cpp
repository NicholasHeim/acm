#include <iostream>
#include <vector>
#include <map>

// Another option: save the map between searches, delete the first value (values[current_start]) if it does not occur more than once,
// add the last value(s) at the end if it (they) are not already in the map. This will probably be easier to implement.
using namespace std;
 
int main(int argc, char const *argv[])
{
   int n, k;
   cin >> n >> k;
   cin.clear();
   cin.ignore(1000, '\n');
 
   if(k > n)
   {
      cout << "-1 -1";
      return 0;
   }
 
   vector<int> values;
   int value = 1, temp;
   while(value <= n && cin >> temp)
   {
      values.push_back(temp);
      ++value;
   }
   
   bool not_found = false;
   int min_start = 0, min_length = 0x7fffffff,
       current_start = 0, current_length = 0,
       i;
   map<int, int> seen;

   // initial add to map
   map<int, int>::iterator it;
   for (i = 0; seen.size() != k; ++i)
   {
      it = seen.find(values[i]);
      if(it == seen.end())
         seen.insert(pair<int, int>(values[i], 1));
      else
         ++it->second;
      ++current_length;
   }

   if(current_length < min_length && seen.size() == k)
   {
      min_start = current_start;
      min_length = current_length;
      if(min_length == k)
      {
         cout << (min_start + 1) << " " << (min_start + min_length);
         return 0;
      }
   }
   else
   {
      cout << "-1 -1";
      return 0;
   }

   ++current_start;

   while (values.size() - current_start > k)
   {
      it = seen.find(values[current_start - 1]);
      if(it->second > 1)
         --it->second;
      else
         seen.erase(it);
      // Note that the else means that seen.size() is down by one
      
      it = seen.find(values[current_start + current_length]);
      if(it == seen.end() && seen.size() != k) // This one happening means the size is back to normal.
         seen.insert(pair<int, int>(values[current_start + current_length], 1));
      else
      {
         ++it->second;
         i = current_start;
         while (seen.size() != k && (values.size() - i > k))
         {
            
         }
         
      }

      

      ++current_start;      
   }
   
   

   
   /* while(values.size() - current_start > k)
   {
      for (i = current_start; seen.size() != k; ++i)
      {
         if(seen.find(values[i]) == seen.end())
            seen.insert(pair<int, int>(values[i], 1));
         ++current_length;
      }

      if(current_length < min_length && seen.size() == k)
      {
         min_start = current_start;
         min_length = current_length;
      }

      if(i == values.size() && seen.size() != k && current_start == 0)
      {
         not_found = true;
         break;
      }

      while(current_start < values.size() && values[current_start + 1] == values[current_start + 2])
      {
         ++current_start;
      }
 
      seen.clear();
      ++current_start;
      current_length = 0;
      if(min_length == k)
      {
         cout << (min_start + 1) << " " << (min_start + min_length);
         return 0;
      }
   } */
/* 

 
   if(min_start == 0 && min_length != k)
      min_length = 1;
   
   cout << (min_start + 1) << " " << (min_start + min_length); */
   return 0;
}