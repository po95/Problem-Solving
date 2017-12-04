#include<bits/stdc++.h>
using namespace std;

int main()

{
    int n;
    int ara[4];

    while(1==scanf("%d",&n))
    {
        int k=0;
        while(n--)
        {

            for(int i=0; i<3; i++)
            {
                scanf("%d",&ara[i]);
                if(i==0) continue;
                if(ara[i]>ara[i-1])
                {
                    for(int j=i; j>0; j--)
                    {
                        if(ara[j]>ara[j-1]) swap(ara[j],ara[j-1]);
                    }
                }
            }
            if(ara[0]*ara[0]==(ara[1]*ara[1] + ara[2]*ara[2])) printf("Case %d: yes\n",++k);
            else printf("Case %d: no\n",++k);

        }
    }



    return 0;
}
