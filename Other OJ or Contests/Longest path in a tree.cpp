
//with dfs

#include<bits/stdc++.h>
using namespace std;

vector<int>v[10010];

int visited[10010],path[10010];

int r=0;

int call(int source)
{
    visited[source]=1;

    int u=source;

    for(int i=0; i<v[u].size(); i++)
    {
        if(visited[v[u][i]]==0)
        {
            visited[v[u][i]]=1;
            path[v[u][i]]=path[u]+1;
            r=path[v[u][i]];
            r=call(v[u][i]);
            visited[v[u][i]]=0;
            path[v[u][i]]=0;

        }
    }
    visited[source]=0;
    path[source]=0;
    return r;

}


void init(int n)
{
    for(int i=1; i<=n; i++)
    {
        v[i].clear();
    }
}





int main()

{

    int n;

    while(1==scanf("%d",&n))
    {
        int x,y;
        for(int i=1; i<n; i++)
        {
            scanf("%d%d",&x,&y);
            v[x].push_back(y);
            v[y].push_back(x);
        }
        int m=0;
        int d;
        for(int i=1; i<=n; i++)
        {
            path[i]=0;
            r=0;
            d=call(i);
            if(m<d) m=d;
        }
        printf("%d\n",m);

        init(n);
    }

    return 0;
}
