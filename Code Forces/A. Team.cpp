#include<bits/stdc++.h>
using namespace std;

int main()

{

    int t;

    while(1==scanf("%d",&t))
    {
        int c=0;
        int x;
        for(int i=0; i<t; i++)
        {
            x=0;
            int m;
            for(int j=0; j<3; j++)
            {
                scanf("%d",&m);
                x+=m;
            }
            if(x>=2) c++;
        }
        printf("%d\n",c);
    }

    return 0;
}

