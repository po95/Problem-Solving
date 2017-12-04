#include<bits/stdc++.h>
using namespace std;

int ara[2000010];
int main()
{
    int n;
    while(1==scanf("%d",&n))
    {
        int i;
        if(n==0) break;

        for(i=0; i<n; i++)
        {
            scanf("%d",&ara[i]);
        }
        sort(ara,ara+n);
        for(i=0; i<n; i++)
        {
            printf("%d",ara[i]);
            if(i<(n-1)) printf("%c",32);

        }
        printf("\n");
    }
	return 0;
}
