#include<bits/stdc++.h>
#define mem(x,y) memset(x,y,sizeof(x))
using namespace std;

vector<int>v[210];

int visited[210],color[210];


int call(int source)
{
    int c=1;
    queue<int>q;
    q.push(source);

    visited[source]=1;
    color[source]=0;

    int u;

    while(!q.empty())
    {
        u=q.front();

        q.pop();

        if(visited[u]!=1)
        {
            visited[u]=1;
            color[u]=0;
        }

        for(int i=0; i<v[u].size(); i++)
        {
            if(visited[v[u][i]]==0)
            {
                if(color[u]==0) color[v[u][i]]=1;
                else color[v[u][i]]=0;

                visited[v[u][i]]=1;
                q.push(v[u][i]);
            }
            else if(visited[v[u][i]]==1)
            {
                if((color[u]==color[v[u][i]]) && color[u]>-1)
                {
                    c=0;
                    break;
                }
            }
        }
        if(c==0) break;
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

    int n,e;

    freopen("bicoloring.txt","r",stdin);

    while(2==scanf("%d%d",&n,&e))
    {
        if(n==0) break;

        for(int i=1; i<=e; i++)
        {
            int x,y;
            scanf("%d%d",&x,&y);

            v[x].push_back(y);
            v[y].push_back(x);
        }

        mem(visited,0);
        mem(color,-1);

        int r=call(0);

        if(r==1) printf("BICOLORABLE.\n");
        else printf("NOT BICOLORABLE.\n");

        init(n);

    }

    return 0;
}
