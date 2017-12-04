#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;

    scanf("%d%d",&n,&k);

    int r=(int)sqrt(k)+1;

    int c=0,re,d;

    for(int i=1; i<r && i<=n; i++)
    {
        re=k%i;
        d=k/i;
        if(re==0 && d<=n)
        {
            if(d==i) c+=1;
            else c+=2;
        }
    }

    printf("%d\n",c);


    return 0;
}
