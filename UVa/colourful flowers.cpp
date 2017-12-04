#include<bits/stdc++.h>
#define pi acos(-1.0)
using namespace std;

int main()

{
    int a,b,c;

    while(3==scanf("%d%d%d",&a,&b,&c))
    {
        double t,cine,coute,s,r1,r2,triangle;

        s=(a+b+c)/2.0;

        t=sqrt(s*(s-a)*(s-b)*(s-c));

        r1=(t/s);
        r1=pi*r1*r1;

        triangle=t-r1;


        r2=((a*b*c)/(4.0*t));

        r2=(pi*r2*r2)-t;

        printf("%0.4lf %0.4lf %0.4lf\n",r2,triangle,r1);
    }


    return 0;
}
