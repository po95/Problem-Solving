#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,sum=0,c=0;
    int ara[110];

    scanf("%d",&n);

    for(int i=1; i<=n; i++)
    {
        scanf("%d",&ara[i]);
        sum+=ara[i];
    }

    for(int i=1; i<=5; i++)
    {
        if((sum+i)%(n+1)==1) c++;
    }

    cout<< (5-c)<< endl;

    return 0;
}
