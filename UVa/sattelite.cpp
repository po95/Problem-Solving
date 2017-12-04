#include<bits/stdc++.h>
#define pi acos(-1.0)
using namespace std;

int main()

{
    int d;
    double a;
    char s[10];

    while(3==scanf("%d %lf %s",&d,&a,&s))
    {
            double m,c;
            if(a>180) a=360-a;
            if(strcmp("min",s)==0) a=a/60.0;

            m=sqrt((2*(d+6440)*(d+6440))-(2*(d+6440)*(d+6440)*cos(a*pi/180.0)));
            c=(d+6440)*(a*pi/180.0);

        printf("%0.6lf %0.6lf\n",c,m);
    }

    return 0;
}
