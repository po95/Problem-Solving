#include<bits/stdc++.h>
using namespace std;

int main()

{
    unsigned int t;
    scanf("%u",&t);

    while(t--)
    {
        int n;
        scanf("%d",&n);
        int m,x;
        long long sum=0;

        for(int i=0; i<n; i++)
        {
            scanf("%d",&x);

            if(i==0)
            {
                m=x;
                sum+=x;
            }

            else
            {
                if(x>m)
                {
                    sum+=(x-m);
                    m=x;
                }
                else if(x<m)
                {
                    m=x;
                }

            }

        }
        printf("%lld\n",sum);
    }


    return 0;
}
