#include<bits/stdc++.h>
using namespace std;

int main()
{
    int ara[5];
    int n;
    int i,j;

    while(3==scanf("%d%d%d",&ara[0],&ara[1],&ara[2]))
    {
        for(i=0; i<3; i++)
        {
            if(i==0) continue;
            if(ara[i]<ara[i-1])
            {
                for(j=i; j>0; j--)
                {
                    if(ara[j]<ara[j-1]) swap(ara[j],ara[j-1]);
                    else break;

                }
            }

        }

    if(ara[0]==0 && ara[1]==0 && ara[2]==0)
    {
        break;
    }

    if(ara[2]*ara[2]==(ara[1]*ara[1] + ara[0]*ara[0])) printf("right\n");
    else printf("wrong\n");
    }


    return 0;
}
