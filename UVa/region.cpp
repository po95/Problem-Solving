#include<bits/stdc++.h>
#include<cmath>
#define pi acos(-1.0)

using namespace std;

int main()
{

    double a,b,c;
    double r1,r2,r3;
    int n;

    while(1==scanf("%d",&n))
    {
        while(n--)
        {
            scanf("%lf%lf%lf",&r1,&r2,&r3);
            a=r1+r3;
            b=r1+r2;
            c=r2+r3;

            double s,t;
            s=(a+b+c)/2.0;
            t=sqrt(s*(s-a)*(s-b)*(s-c));

            double A,B,C;

            C=acos((a*a+b*b-c*c)/(2*a*b))*(r1*r1/2.0);
            A=acos((c*c+b*b-a*a)/(2*c*b))*(r2*r2/2.0);
            B=acos((a*a+c*c-b*b)/(2*a*c))*(r3*r3/2.0);

            printf("%0.6lf\n",t-(A+B+C));
        }

    }



    return 0;
}
