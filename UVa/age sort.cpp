//eita time limit khai (insertion or bubble diye hobe na)

#include<bits/stdc++.h>
using namespace std;
int ara[2000010];

int main()
{
    int n;
    while(1==scanf("%d",&n))
    {
        int i,j;
        if(n==0) break;
        for(i=0; i<n; i++)
        {
            scanf("%d",&ara[i]);
            if(i==0) continue;
            else if(i>0)
            {
                if(ara[i]<ara[i-1])
                {
                    for(j=i; j>0; j--)
                    {
                        if(ara[j]<ara[j-1]) swap(ara[j],ara[j-1]);
                        else break;
                    }
                }
            }
        }
        for(i=0; i<n; i++)
        {
            printf("%d",ara[i]);
            if(i<(n-1)) printf("%c",32);
        }
        printf("\n");
    }
	return 0;
}
