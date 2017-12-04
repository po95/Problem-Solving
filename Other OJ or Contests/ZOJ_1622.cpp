#include<bits/stdc++.h>
using namespace std;

int main()

{
    int n;

    while(1==scanf("%d",&n))
    {
        int sum_0=0,c_0=0;
        int sum_1=0,c_1=0;
        int x;
        for(int i=0; i<n; i++)
        {
            scanf("%d",&x);

            if(c_0==0)
            {
                if(x==1) sum_0++;
                c_0=1;
            }
            else if(c_0==1)
            {
                if(x==0) sum_0++;
                c_0=0;
            }
            if(c_1==0)
            {
                if(x==0) sum_1++;
                c_1=1;
            }
            else if(c_1==1)
            {
                if(x==1) sum_1++;
                c_1=0;
            }
        }
        printf("%d\n",min(sum_0,sum_1));
    }

    return 0;
}
