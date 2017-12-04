#include<bits/stdc++.h>
using namespace std;

int main()

{

    double n,p;

    while(2==scanf("%lf %lf",&n,&p))
    {
        double a;
        a=pow(p,1/n);
        printf("%0.0lf\n",a);

    }

    return 0;
}
