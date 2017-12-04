#include<bits/stdc++.h>
using namespace std;

int main()
{
    int coin[110];
    int n;

    while(1==scanf("%d",&n))
    {

        int sum=0;
        for(int i=0; i<n; i++)
        {
            scanf("%d",&coin[i]);
            sum+=coin[i];
        }

        int exp=sum/2;
        sort(coin,coin+n);
        sum=0;
        int num;
        int c=0;
        for(int i=n-1; i>=0; i--)
        {
            sum+=coin[i];
            c++;
            if(sum>exp) break;

        }
        printf("%d\n",c);

    }


    return 0;
}

