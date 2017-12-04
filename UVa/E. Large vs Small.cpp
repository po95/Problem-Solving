#include<bits/stdc++.h>
int main()


{
    int n;

    scanf("%d",&n);
    int k=0;

    for(int i=1; i<=n; i++)
    {
        double mi,ma,x;

        scanf("%lf",&x);
        if(i==1)
        {
            mi=x;
            ma=x;
            printf("Case %d: %0.2lf\n",++k,ma/mi);
            continue;
        }
        if(x<mi) mi=x;
        if(x>ma) ma=x;

        printf("Case %d: %0.2lf\n",++k,ma/mi);

    }


    return 0;
}
