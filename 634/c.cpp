#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <iterator>
#include <map>
#include <algorithm>
 
using namespace std;

int main(int argc, char const *argv[])
{
   int count, students;
   cin >> count;
   for (int i = 0; i < count; ++i)
   {
      cin >> students;
      cin.clear();
      cin.ignore(1000, '\n');

      string line;
      getline(cin, line);
      stringstream ss(line);
      istream_iterator<int> begin(ss), end;
      vector<int> initSkills(begin, end);

      // Just for review with maps
      map<int, int> values;
      for (auto &&j : initSkills)
      {
         auto ret = values.insert(pair<int, int> (j, 1));
         if(ret.second == false)
            ++values[j];
      }
      
      // Put values into vectors
      vector<int> skills, skillCount;
      for (auto &&j : values)
      {
         skills.push_back(j.first);
         skillCount.push_back(j.second);
      }

      // Determine the hard maximum size
      int max = *max_element(skillCount.begin(), skillCount.end());
      bool flag = false;
      if(skills.size() < max - 1)
         cout << skills.size() << endl;
      else if(skills.size() > max + 1 || max == skills.size() - 1)
         cout << max << endl;
      else if(skills.size() == max || skills.size() == max - 1)
         cout << (max - 1) << endl;
   }
   
   return 0;
}
