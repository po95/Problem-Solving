#include<bits/stdc++.h>
#define pi acos(-1.0)
using namespace std;

int main()

{
    unsigned int t;
    scanf("%u",&t);
    int k=0;
    while(t--)
    {
        int r1,r2,h,p;
        scanf("%d%d%d%d",&r1,&r2,&h,&p);

        double result,R;
        R=((double)(r1-r2)*((double)p/(double)h))+r2;

        result=(double)(pi*p)/3.0*(pow(r2,2.0)+r2*R+pow(R,2.0));

        printf("Case %d: %0.10lf\n",++k,result);

    }

    return 0;
}
