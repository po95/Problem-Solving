#include<bits/stdc++.h>
using namespace std;

int main()
{
    double r;
    int k=0;

    while(1==scanf("%lf",&r))
    {
        if(r==0) break;
        int w,l;

        scanf("%d%d",&w,&l);
        double m=sqrt(l*l+w*w);

        if((m/2.0)<=r) printf("Pizza %d fits on the table.\n",++k);
        else printf("Pizza %d does not fit on the table.\n",++k);
    }


    return 0;
}
