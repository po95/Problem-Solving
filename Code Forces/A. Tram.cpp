#include<bits/stdc++.h>
using namespace std;

int main()

{
    int t;
    while(1==scanf("%d",&t))
    {
        int sum=0;
        int m=0;
        for(int i=1; i<=t; i++)
        {
            int en,ex;
            scanf("%d %d",&ex,&en);

            sum=sum-ex+en;

            if(sum>m) m=sum;

        }
        printf("%d\n",m);
    }


    return 0;
}
