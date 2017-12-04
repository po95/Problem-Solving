#include<bits/stdc++.h>
using namespace std;
int color[210],visited[210];
vector<int>v[210];

int bicolor(int scr)
{
    queue<int>q;
    visited[scr]=1;
    q.push(scr);
    int c=0;

    int u;

    while(!q.empty())
    {
        u=q.front();
        q.pop();

        for(int i=0; i<v[u].size(); i++)
        {
            if(color[u]==color[v[u][i]] && color[u]!=-1)
            {
                c=1;
                return c;
            }
            else if(visited[v[u][i]]==0)
            {
                visited[v[u][i]]=1;
                q.push(v[u][i]);
            }
        }
    }
    return c;
}

void init(int n)
{
    for(int i=1; i<=n; i++)
    {
        v[i-1].clear();
    }
}

int main()

{
    freopen("s.txt","r",stdin);
    int nodes,edges;
    while(1==scanf("%d",&nodes))
    {
        if(nodes==0) break;
        scanf("%d",&edges);

        memset(color,-1,sizeof(color));
        memset(visited,0,sizeof(visited));

        for(int i=1; i<=edges; i++)
        {
            int a,b;
            scanf("%d%d",&a,&b);
            v[a].push_back(b);
            v[b].push_back(a);

            if(color[a]==-1 && color[b]==-1)
            {
                color[a]=1;
                color[b]=0;
            }
            if(color[a]==1 && color[b]==-1)
            {
                color[b]=0;
            }
            if(color[a]==0 && color[b]==-1)
            {
                color[b]=1;
            }
            if(color[a]==-1 && color[b]==1)
            {
                color[a]=0;
            }
            if(color[a]==-1 && color[b]==0)
            {
                color[a]=1;
            }
        }
        int c;
        c=bicolor(0);
        if(c==0) printf("BICOLORABLE.\n");
        else if(c==1) printf("NOT BICOLORABLE.\n");
        init(nodes);
    }


    return 0;
}
