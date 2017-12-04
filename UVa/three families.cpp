#include<bits/stdc++.h>
using namespace std;

int main()

{
    int a,b,c;
    unsigned int t;

    while(1==scanf("%u",&t))
    {
        while(t--)
        {
            double k=0;
            scanf("%d%d%d",&a,&b,&c);
            double r=((double)a+(double)b)/3.0;

            k=(double)a-r;
            if(k>0)
            {
                k=((double)c/r)*k;
                printf("%0.0lf\n",k);
            }
            else printf("%0.0lf\n",k);

        }
    }

    return 0;
}
