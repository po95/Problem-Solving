#include<bits/stdc++.h>
using namespace std;

int main()

{

    int t;
    while(1==scanf("%d",&t))
    {
        for(int j=0; j<t; j++)
        {
            int n;
            scanf("%d",&n);
            long long sum=0;
            int f;
            for(int i=0; i<n; i++)
            {
                scanf("%d",&f);
                if(f>0) sum+=f;
            }
            printf("Case %d: %lld\n",j+1,sum);
        }
    }

    return 0;
}
