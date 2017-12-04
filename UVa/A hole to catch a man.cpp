#include<bits/stdc++.h>
#define pi acos(-1.0)
using namespace std;

double area(double a,double b,double c)
{
    double s=(a+b+c)/2.0;

    double ar=sqrt(s*(s-a)*(s-b)*(s-b));

    return ar;

}


double length(int x,int y,int a,int b)
{
    double l=(x-a)*(x-a)+(y-b)*(y-b);
    return l=sqrt(l);

}


int main()
{
    int n;
    while(scanf("%d",&n)==1)
    {
        if(n==0) break;
        double sum=0;

        while(n--)
        {
            int thickness;
            scanf("%d",&thickness);

            int x0,y0,x,y;

            scanf("%d%d",&x0,&y0);

            int given_x,given_y,prev_x,prev_y;
            double a,b,c;

            int trace=0;//for tracing points

            while(scanf("%d%d",&x,&y))//regular points
            {
                if(x0==x && y0==y)
                {
                    break;
                }
                if(trace==0)
                {
                    trace++;
                    given_x=x;
                    given_y=y;
                    a=length(x0,y0,given_x,given_y);
                    continue;
                }

                prev_x=x;
                prev_y=y;

                b=length(prev_x,prev_y,given_x,given_y);
                c=length(prev_x,prev_y,x0,y0);

                sum=sum+area(a,b,c);

                //printf("a=%lf  b=%lf  c=%lf\n",a,b,c);
                //printf("area = %lf, sum= %lf\n",area(a,b,c),sum);

                given_x=prev_x;
                given_y=prev_y;
                a=c;

            }
            sum=sum*(double)thickness;



        }
        double r,hole_thick;
        scanf("%lf%lf",&r,&hole_thick);

        double man_hole=pi*r*r*hole_thick;

        printf("%0.0lf\n",sum/man_hole);



    }


    return 0;
}
