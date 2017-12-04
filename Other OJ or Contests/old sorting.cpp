#include<bits/stdc++.h>
using namespace std;

int main()

{
    unsigned int t;
    scanf("%u",&t);

    int k=0;

    while(t--)
    {
        int n;
        int num[110];
        scanf("%d",&n);

        for(int i=1; i<=n; i++)
        {
            scanf("%d",&num[i]);
        }

        int c=0;
        for(int i=1; i<=n; i++)
        {
            if(num[i]==i) continue;
            else if(num[i]!=i)
            {
                c++;
                for(int j=i; j<=n; j++)
                {
                    if(num[j]==i)
                    {
                        swap(num[j],num[i]);
                        break;
                    }
                }
            }
        }

        printf("Case %d: %d\n",++k,c);
    }


    return 0;
}
