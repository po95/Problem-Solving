#include<bits/stdc++.h>
using namespace std;

int main()

{
    int n;

    while(1==scanf("%d",&n))
    {
        int c=0;
        for(int i=0; i<n; i++)
        {
            int p,q;
            scanf("%d %d",&p,&q);
            if((p+2)<=q) c++;
        }
        printf("%d\n",c);
    }


    return 0;
}
