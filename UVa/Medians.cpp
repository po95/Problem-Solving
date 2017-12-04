#include<bits/stdc++.h>
#include<cmath>
using namespace std;

int main()

{
    double a,b,c;
    while(3==scanf("%lf%lf%lf",&a,&b,&c))
    {
        double r;
        r=(a+b+c)/2.0;
        if(((r-a)*(r-b)*(r-c))<=0) printf("-1.000\n");
        else
        {
            double area;
            area=(r*(r-a)*(r-b)*(r-c));
            area=sqrt(area);
            printf("%0.3lf\n",(4*area)/3.0);
        }
    }
    return 0;

}
