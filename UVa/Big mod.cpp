#include<bits/stdc++.h>
using namespace std;
int m;

int bigmod(int n,int p)
{

    if(p==0) return 1;

    else if(p%2==0)
    {
        int r=bigmod(n,p/2);
        return (r*r)%m;
    }
    else
    {
        /*int r;
        r=((n%m)*(bigmod(n,(p-1)/2)%m))%m;
        return (r*r)%m;*/
        return (n%m)*bigmod(n,(p-1));
    }
}

int main()
{

    int n,p;

    // input test case number
    int t;

    scanf("%d",&t);

    int k=0;

    while(t--)
    {
        //input base and power

        scanf("%d%d%d",&n,&p,&m);

        int result=bigmod(n,p);

        printf("Case %d: %d\n",++k,result);
    }

    return 0;
}
