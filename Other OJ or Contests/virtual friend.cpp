#include<bits/stdc++.h>
using namespace std;
vector<int>v[50010];
int visited[50010];

int fun(int src)
{
    visited[src]=1;
    int c=1;
    queue<int>q;
    q.push(src);

    int u;
    while(!q.empty())
    {
        u=q.front();
        q.pop();
        for(int i=0; i<v[u].size(); i++)
        {
            int m;
            m=v[u][i];
            if(visited[m]==0)
            {
                visited[m]=1;
                q.push(m);
                c++;
            }
        }

    }
    return c;

}
void inti(int n)
{
    for(int i=0; i<=n; i++)
    {
        v[i].clear();
    }
}


int main()

{
    int n,t;

    while(1==scanf("%d",&n))
    {
        while(n--)
        {
            scanf("%d",&t);
            map<string,int>mapp;
            int assign=0;
            char s[22],str[22];
            int f;

            for(int i=1; i<=t; i++)
            {
                scanf("%s%s",s,str);
                memset(visited,0,sizeof(visited));
                if(mapp.find(s)==mapp.end())
                {
                    mapp[s]=assign++;
                }
                if(mapp.find(str)==mapp.end())
                {
                    mapp[str]=assign++;
                }
                int a,b;
                a=mapp[s];
                b=mapp[str];
                v[a].push_back(b);
                v[b].push_back(a);

                f=fun(a);
                printf("%d\n",f);

            }
            inti(t);

        }
    }

    return 0;
}
