#include<bits/stdc++.h>
using namespace std;

int main()
{
    freopen("xenia.txt","r",stdin);
    int m,n;

    scanf("%d%d",&n,&m);

    long long result=0;
    int pre=1;

    for(int i=1; i<=m; i++)
    {
        int x;

        scanf("%d",&x);

        if(x>=pre)
        {
            result+=(x-pre);
            pre=x;
        }
        else if(x<pre)
        {
            result+=(n-pre+x);
            pre=x;
        }

    }

    printf("%I64d\n",result);


    return 0;
}
