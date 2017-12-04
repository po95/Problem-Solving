#include<bits/stdc++.h>
using namespace std;

int main()

{
    double a,b;
    while(2==scanf("%lf%lf",&a,&b))
    {
        if(a==0 && b==0)
            break;

        double p,f;

        p=pow(a,1.0/b);
        f=p-floor(p);

        if(f>=.60) printf("%0.0lf\n",ceil(p));
        else printf("%0.0lf\n",floor(p));
    }

    return 0;
}
