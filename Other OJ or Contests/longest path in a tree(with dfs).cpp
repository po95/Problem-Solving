// using double dfs and get accepted
#include<bits/stdc++.h>
using namespace std;

vector<int>v[10010];

int visited[10010],path[10010];

int m,node;

void call(int source)
{
    int u=source;
    visited[source]=1;

    for(int i=0; i<v[u].size(); i++)
    {
        if(visited[v[u][i]]==0)
        {
            visited[v[u][i]]=1;

            path[v[u][i]]=path[u]+1;

            if(m<path[v[u][i]])
            {
                m=path[v[u][i]];

                node=v[u][i];
            }
            call(v[u][i]);

            visited[v[u][i]]=0;

            path[v[u][i]]=0;
        }
    }

    visited[source]=0;

    path[source]=0;


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
        if(n==1)
        {
            printf("0\n");
            continue;
        }

        int x,y;
        for(int i=1; i<n; i++)
        {
            scanf("%d%d",&x,&y);
            v[x].push_back(y);
            v[y].push_back(x);
        }
        m=0;
        call(1);
       // printf("%d\n",m);

        m=0;
        call(node);

        printf("%d\n",m);

        init(n);


    }
    return 0;
}
