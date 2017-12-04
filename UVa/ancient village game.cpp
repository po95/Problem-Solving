#include<bits/stdc++.h>
#define pi acos(-1.0)
using namespace std;

int main()

{
    int n;
    double a;
    int i=1;
    while(2==scanf("%d %lf",&n,&a))
    {
        if(n<3) break;
        double m,p;
        m=sqrt((a/n)/(cos(pi/n)*sin(pi/n)));
        p=m*cos(pi/n);
        double oc,ic;
        oc=(pi*m*m)-a;
        ic=a-(pi*p*p);

        printf("Case %d: %0.5lf %0.5lf\n",i,oc,ic);
        i++;
    }

    return 0;
}
