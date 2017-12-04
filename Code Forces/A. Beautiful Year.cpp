#include<bits/stdc++.h>
using namespace std;

int pod(int i)
{
    bool ara[14];
    memset(ara,false,sizeof(ara));
    int d=i,r;
    int c=1;

    while(d>0)
    {
        r=d%10;
        d=d/10;

        if(ara[r]==false)
        {
            ara[r]=true;
        }
        else
        {
            c=0;
            break;
        }

    }

    return c;



}

int main()
{
    int i,n;

    scanf("%d",&n);

    for(i=n+1; ; i++)
    {
        if(pod(i)==1)
        {
            break;
        }
    }
    printf("%d\n",i);

    return 0;
}
