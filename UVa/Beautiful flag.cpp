#include<bits/stdc++.h>
using namespace std;

int main()

{
    int n;
    while(1==scanf("%d",&n))
    {
        int i=1,r;
        while(i<=n)
        {
            scanf("%d",&r);
            int l,w;
            l=r*5;
            w=r*3;
            printf("Case %d:\n",i);
            printf("-%d %d\n",(9*l)/20,w/2);
            printf("%d %d\n",(11*l)/20,w/2);
            printf("%d -%d\n",(11*l)/20,w/2);
            printf("-%d -%d\n",(9*l)/20,w/2);
            i++;
        }
    }


    return 0;
}
