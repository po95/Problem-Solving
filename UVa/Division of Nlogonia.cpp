#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;

    while(1==scanf("%d",&t))
    {
        if(t==0) break;

        int x,y;
        scanf("%d%d",&x,&y);

        for(int i=1; i<=t; i++)
        {
            int m,n;
            scanf("%d%d",&m,&n);

            if(m==x || n==y) printf("divisa\n");

            else if(m>x && n>y) printf("NE\n");

            else if(m>x && n<y) printf("SE\n");

            else if(m<x && n<y) printf("SO\n");

            else if(m<x && n>y) printf("NO\n");
        }
    }

    return 0;
}
