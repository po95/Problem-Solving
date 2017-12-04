#include<bits/stdc++.h>
using namespace std;

int main()

{
    unsigned int t;

    scanf("%u",&t);

    while(t--)
    {
        int n,k;
        scanf("%d%d",&n,&k);

        long long sum=0;
        int x;
        for(int i=0; i<n; i++)
        {
            scanf("%d",&x);
            sum+=x;
        }
        if(sum%2==0)
        {
            if(k==1) printf("odd\n");
            else printf("even\n");
        }
        else printf("even\n");
    }


    return 0;
}
