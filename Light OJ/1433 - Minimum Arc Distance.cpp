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
        double ox,oy,ax,ay,bx,by;
        scanf("%lf%lf%lf%lf%lf%lf",&ox,&oy,&ax,&ay,&bx,&by);
        double radius,angle,a,b,c,result,arc;

        b=sqrt(pow((ax-ox),2.0)+pow((ay-oy),2.0));
        a=sqrt(pow((ax-bx),2.0)+pow((ay-by),2.0));

        c=b;

        result=((b*b + c*c - a*a))/(2*c*b);
        angle=acos(result);

        printf("Case %d: %0.8lf\n",++k,b*angle);


    }


    return 0;
}
