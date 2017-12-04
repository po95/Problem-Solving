#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    scanf("%d",&n);

    int sumx=0,sumy=0,sumz=0;

    for(int i=0; i<n; i++)
    {
        int x,y,z;
        scanf("%d%d%d",&x,&y,&z);

        sumx+=x;
        sumy+=y;
        sumz+=z;

    }
    double sum=0;

    sum=sqrt((sumx*sumx)+(sumy*sumy)+(sumz*sumz));
    if(sum==0) printf("YES\n");

    else printf("NO\n");

    return 0;
}
