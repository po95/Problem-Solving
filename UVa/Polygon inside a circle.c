#include<stdio.h>
#include<math.h>

#define pi 2*acos(0)
int main()

{

    double s,c,r,n;
    double result;

    while(2==scanf("%lf %lf",&r,&n))
    {
        c=sqrt(2*(r*r)-(2*r*r*cos((pi/180)*(360/n))));
        s=(r+r+c)/2;
        result=n*sqrt(s*(s-r)*(s-r)*(s-c));

        printf("%0.3lf\n",result);
    }
    return 0;
}
