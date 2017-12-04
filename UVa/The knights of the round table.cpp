#include<bits/stdc++.h>
#define pi acos(-1.0)
using namespace std;

int main()
{
    double a,b,c;
    while(3==scanf("%lf%lf%lf",&a,&b,&c))
    {
        double r;

        double s=(a+b+c)/2.0;

        //double mx=max(a,b);
        //mx=max(mx,c);

       // double result=0;

        //if(s>mx)
        //{

        if(a<=0|| b<=0|| c<=0)
        {
            printf("The radius of the round table is: 0.000\n");
            continue;
        }
            r=sqrt(s*(s-a)*(s-b)*(s-c))/s;

            //result=pi*r*r;
       // }

        printf("The radius of the round table is: %0.3lf\n",r);

    }


    return 0;
}
