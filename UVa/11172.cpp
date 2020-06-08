#include <algorithm>
#include <cstdio>
#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

int main()
{
    int t, a, b;
    cin >> t;
    for(int i = 0; i < t; ++i)
    {
        cin >> a >> b;
        a == b ? printf("=\n") : (a < b ? printf("<\n") : printf(">\n"));
    }
}