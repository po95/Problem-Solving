#include<bits/stdc++.h>
#define pi acos(-1)
using namespace std;

int main()

{
    int n,t;
    double R;
    while(1==scanf("%d",&t))
    {
        for(int i=1; i<=t; i++)
        {
            scanf("%lf%d",&R,&n);
            double angle,s,r;
            angle=((360.0/n)*pi)/180.0;
            s=sin(angle/2.0);
            r=(R*s)/(1.0+s);
            printf("Case %d: %0.10lf\n",i,r);

        }
    }


    return 0;
}
