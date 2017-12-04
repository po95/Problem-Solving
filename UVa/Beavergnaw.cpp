#include<bits/stdc++.h>
#define pi acos(-1.0)
using namespace std;

int main()
{
    double d,v;

    while(2==scanf("%lf%lf",&d,&v))
    {
        if(d==0 && v==0)
        {
            break;
        }

        double result=0;

        result=(((pi*d*d)/4.0)-v-((pi*d*d*d)/6.0))/pi;
        result=12.0*result;

        result=pow(result,1.0/3.0);


        printf("%lf\n",result);


    }
    return 0;
}
