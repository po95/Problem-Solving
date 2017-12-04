#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;

    scanf("%d",&t);

    int k=0;

    while(t--)
    {
        double x1,y1,x2,y2,x3,y3,x4,y4;
        scanf("%lf%lf%lf%lf%lf%lf",&x1,&y1,&x2,&y2,&x3,&y3);

        x4=x3-(x2-x1);
        y4=y1+(y3-y2);

        //printf("%lf %lf\n",x4,y4);

        double area,a,b,c,A;

        a=sqrt((x4-x1)*(x4-x1)+(y4-y1)*(y4-y1));
        b=sqrt((x4-x2)*(x4-x2)+(y4-y2)*(y4-y2));
        c=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));

        A=acos(((a*a)+(c*c)-(b*b))/(2.0*a*c));

        area=c*sin(A)*a;

        printf("Case %d: %0.0lf %0.0lf %0.0lf\n",++k,x4,y4,area);
    }

    return 0;
}
