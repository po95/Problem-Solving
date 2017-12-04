#include<bits/stdc++.h>
using namespace std;

int main()

{
    int ara[5];
    int t,r,n;
    int i,j;

    while(1==scanf("%d",&t))
    {
        while(t--)
        {
            for(i=0; i<3; i++)
            {
                scanf("%d",&ara[i]);
                if(i==0) continue;
                if(ara[i]<ara[i-1])
                {
                    for(j=i; j>0; j--)
                    {
                        swap(ara[j],ara[j-1]);
                    }
                }
            }
            if((ara[1]+ara[0])>ara[2]) printf("OK\n");
            else printf("Wrong!!\n");
        }
    }



    return 0;
}
