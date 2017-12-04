#include<bits/stdc++.h>
#define pi acos(-1)
using namespace std;

int main()

{
    int n;
    while(1==scanf("%d",&n))
    {
        int k=0;
        while(n--)
        {
            double r;
            scanf("%lf",&r);

            printf("Case %d: %0.2lf\n",++k,(r*4.0*r)-(pi*r*r));
        }
    }


    return 0;
}
