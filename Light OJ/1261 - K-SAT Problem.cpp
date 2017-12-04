#include<bits/stdc++.h>
using namespace std;

int main()

{
    unsigned int t;
    scanf("%u",&t);
    int g=0;
    while(t--)
    {
        int n,m,k;
        vector<int>v[35];
        scanf("%d%d%d",&n,&m,&k);
        int x;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<k; j++)
            {
                scanf("%d",&x);
                v[i].push_back(x);
            }
        }
        int p,solu[32];

        scanf("%d",&p);
        if(p==0)
        {
            int c=1;
            for(int i=0; i<n; i++)
            {
                int trace=0;
                for(int j=0; j<v[i].size(); j++)
                {
                    if(v[i][j]<0)
                    {
                        trace=1;
                        break;
                    }

                }
                if(trace!=1)
                {
                    c=0;
                    break;
                }
            }
            if(c==1) printf("Case %d: Yes\n",++g);
        else printf("Case %d: No\n",++g);

        }
        else
        {

        for(int i=0; i<p; i++)
        {
            scanf("%d",&solu[i]);
        }
        int c;
        int sum=0;
        for(int i=0;i<n; i++)
        {
            c=0;
            for(int j=0; j<v[i].size(); j++)
            {
                int trace=1;
                x=v[i][j];
                for(int q=0; q<p; q++)
                {
                    if(x>0 && solu[q]==x)
                    {
                        c=1;
                        sum++;
                        break;
                    }
                    else if(x<0 && x*(-1)==solu[q])
                    {
                        trace=0;
                        break;
                    }

                }
                if(trace==1 && x<0)
                {
                    sum++;
                    break;
                }
                if(c==1) break;

            }
        }
        if(n==sum) printf("Case %d: Yes\n",++g);
        else printf("Case %d: No\n",++g);
        }

    }


    return 0;
}ww
