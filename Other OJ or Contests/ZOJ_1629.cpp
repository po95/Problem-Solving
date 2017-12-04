#include<bits/stdc++.h>
#include<cmath>
using namespace std;

int main()
{
    int n;

    while(1==scanf("%d",&n))
    {
        int r;
        r=floor(n*(n+2)*(2*n+1)/8);
        printf("%d\n",r);
    }
    return 0;
}
