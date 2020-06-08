#include <cstdio>

using namespace std;

int main()
{
    int t, n, x, count;
    scanf("%d", &t);

    for(int i = 0; i < t; ++i)
    {
        count = 0;
        scanf("%d%d", &n, &x);
        int p;
        
        for(int j = 0; j < n; ++j)
        {
            scanf("%d", &p);
            if(p%2)
                ++count;
        }

        if(count == 0)
        {
            printf("No\n");
            continue;
        }

        int numEven2 = (--count)/2;
        --x;

        while(numEven2--)
        {
            if(x < 2) break;
            x -= 2;
        }

        n = n - count - 1;
        while(n--)
        {
            if(x < 1) break;
            --x;
        }

        if(x == 0)
        {
            printf("Yes\n");
            continue;
        }

        printf("No\n");
        
    }
}
