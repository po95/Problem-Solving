#include<bits/stdc++.h>
#define INF 1999999999
using namespace std;

int main()
{
    int n;

    scanf("%d",&n);

    int m=INF,i,c=0,index;

    for(int i=1; i<=n; i++)
    {
        int x;

        scanf("%d",&x);

        if(x<m)
        {
            m=x;
            index=i;
            c=1;
            continue;
        }

        if(m==x)
        {
            c=0;
        }
    }

    if(c==1)
    {
        printf("%d\n",index);
    }
    else if(c==0)
    {
        printf("Still Rozdil\n");
    }

    return 0;
}
