#include <cstdio>

using namespace std;

int main()
{
    char a[1000000];
    bool opening = true;
    for(int i = 0; scanf("%c", &a[i]) != EOF; ++i)
    {
        if(a[i] == '"')
        {
            if(opening)
            {
                a[i] = '`';
                a[++i] = '`';
                opening = false;
            }
            else
            {
                a[i] = '\'';
                a[++i] = '\'';
                opening = true;
            }
        }
    }
    printf("%s", a);
}