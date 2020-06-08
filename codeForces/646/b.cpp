#include <string>
#include <iomanip>
#include <iostream>

using namespace std;

int main()
{
    int test, front, back, dist;
    scanf("%d", &test);
    
    string input;

    for(int i = 0; i < test; ++i)
    {
        front = 0; back = 0;
        getline(cin, input);

        if(input.size() < 3)
        {
            printf("0\n");
            continue;
        }

        if(input[0] != input.back()) // Front and back are different characters
        {
            for(int j = 0; ; ++j)
            {
                
            }
        }
        
    }


}