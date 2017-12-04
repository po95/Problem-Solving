#include<bits/stdc++.h>
using namespace std;

int main()

{
    int n,m;
    int v;

    while(2==scanf("%d %d",&n,&m))
    {
        int i,j,c,g;
        c=0;
        for(i=0; i<n; i++)
        {
            g=0;
            for(j=0; j<m; j++)
            {
                scanf("%d",&v);
                if(v>0) g++;
            }
            if(g==m) c++;
        }
        printf("%d\n",c);

    }

    return 0;
}
