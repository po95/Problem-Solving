#include<bits/stdc++.h>
#include<cmath>
#define pi acos(-1.0)

using namespace std;
int main()
{

   unsigned int n;

    while(1==scanf("%u",&n))
    {
        while(n--)
        {
            double l;
            scanf("%lf",&l);
            double r,a,c;
            c=pi*(l/5.0)*(l/5.0);
            a=(l*(l/5.0)*3)-c;

            printf("%0.2lf %0.2lf\n",c,a);
        }
    }
	return 0;
}
