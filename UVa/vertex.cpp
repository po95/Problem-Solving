//accepted
#include<bits/stdc++.h>
#define mem(x,y) memset(x,y,sizeof(x))
using namespace std;

bool visited[105];

vector<int>v[110];
vector<int>trace[110];

void bfs(int i,int n)
{
    queue<int>q;

    q.push(i);

    int x;

    while(!q.empty())
    {
        x=q.front();
        q.pop();

        for(int y=0; y<v[x].size(); y++)
        {
            if(visited[v[x][y]]==false)
            {
                visited[v[x][y]]=true;
                q.push(v[x][y]);
            }
        }

    }

    for(int y=1; y<=n; y++)
    {
        if(visited[y]==false)
        {
            trace[i].push_back(y);
        }
    }
}

void init(int n)
{
    for(int i=1; i<=n; i++)
    {
        v[i].clear();
        trace[i].clear();
    }
}

void print(int n)
{
    for(int i=0; i<trace[n].size(); i++)
            printf(" %d",trace[n][i]);
}


int main()
{
    int n;

    while(1==scanf("%d",&n))
    {
        if(n==0) break;

        int x;

        while(1==scanf("%d",&x) && x!=0)
        {
            int y;
            while(1==scanf("%d",&y)&& y!=0)
            {
                v[x].push_back(y);
            }
        }

        for(int i=1; i<=n; i++)
        {
            mem(visited,false);
            bfs(i,n);
        }

        int loop;

        scanf("%d",&loop);

        for(int i=1; i<=loop; i++)
        {
            int x;
            scanf("%d",&x);
            printf("%d",trace[x].size());
            print(x);
            printf("\n");
        }
        init(n);
    }


    return 0;
}
