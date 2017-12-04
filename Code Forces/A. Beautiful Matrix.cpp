#include<bits/stdc++.h>
using namespace std;

int main()
{
    int p,q;
    for(int i=1; i<=5; i++)
    {
        for(int j=1; j<=5; j++)
        {
            int x;
            scanf("%d",&x);
            if(x==1)
            {
                p=i;
                q=j;
            }
        }
    }
    printf("%d\n",abs(3-p)+abs(3-q));


    return 0;
}
