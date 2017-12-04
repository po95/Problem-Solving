#include<bits/stdc++.h>
using namespace std;

int visit[30],d[30];
vector<int>v[30];


void bfs(int source)
{
    visit[source]=1;

    d[source]=0;

    queue<int>q;

    q.push(source);
    int u;


    while(!q.empty())
    {
        u=q.front();

        q.pop();

        for(int i=0; i<v[u].size(); i++)
        {
            if(visit[v[u][i]]!=1)
            {
                q.push(v[u][i]);

                visit[v[u][i]]=1;

                d[v[u][i]]=d[u]+1;
            }
        }
    }

}
void clean()
{
    for(int i=0; i<21; i++)
    {
        v[i].clear();
    }
}

int main()

{
    int k=0;
    int m,s,f;
    while(1==scanf("%d",&m))
    {

        for(int i=0; i<m; i++)
        {
            scanf("%d",&s);

            v[1].push_back(s);
            v[s].push_back(1);

        }
        for(int i=2; i<=19; i++)
        {
            scanf("%d",&m);

            for(int j=0; j<m; j++)
            {
                scanf("%d",&s);

                v[i].push_back(s);
                v[s].push_back(i);
            }
        }


        scanf("%d",&m);

        printf("Test Set #%d\n",++k);

        for(int i=0; i<m; i++)
        {
            int x,y;

            scanf("%d%d",&x,&y);

            bfs(x);

            printf("%2d to %2d: %d\n",x,y,d[y]);

            memset(visit,0,sizeof(visit));

            memset(d,0,sizeof(d));

        }
        printf("\n");
        clean();

    }

    return 0;
}
