#include<bits/stdc++.h>
using namespace std;

int main()

{
    unsigned int t;
    scanf("%u",&t);

    int k=0;
    while(t--)
    {
        double v1,v2,v3,a1,a2;
        scanf("%lf%lf%lf%lf%lf",&v1,&v2,&v3,&a1,&a2);

        double s1,s2,s,sb,t,t1,t2;

        s1=(v1*v1)/(2.0*a1);
        s2=(v2*v2)/(2.0*a2);

        s=s1+s2;

        t1=(v1/a1);
        t2=(v2/a2);
        t=max(t1,t2);

        sb=(v3*t);

        printf("Case %d: %.10lf %.10lf\n",++k,s,sb);

    }



    return 0;
}
