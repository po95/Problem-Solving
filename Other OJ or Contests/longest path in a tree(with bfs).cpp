//got runtime error using double bfs and linear search
#include<bits/stdc++.h>
#define mem(x,y) memset(x,y,sizeof(x))
using namespace std;

vector<int>v[10000];

int visited[10000],path[10000];

void call(int source)
{
    queue<int>q;

    q.push(source);

    visited[source]=1;

    path[source]=0;

    int u;

    while(!q.empty())
    {
        u=q.front();

        q.pop();

        for(int i=0; i<v[u].size(); i++)
        {
            if(visited[v[u][i]]==0)
            {
                visited[v[u][i]]=1;

                q.push(v[u][i]);

                path[v[u][i]]=path[u]+1;
            }
        }
    }
}



int main()


{
    int n;

    scanf("%d",&n);
    if(n==1)
    {
        printf("0\n");
        return 0;
    }


        int x,y;

        for(int i=1; i<n; i++)
        {
            scanf("%d%d",&x,&y);

            v[x].push_back(y);

            v[y].push_back(x);
        }

        int m,c;

        call(1);

        m=path[1];

        for(int i=2; i<=n; i++)
        {
            if(path[i]>m)
            {
                m=path[i];
                c=i;
            }
        }

        mem(visited,0);
        mem(path,0);

        call(c);

        m=path[c];


        for(int i=1; i<=n; i++)
        {
            if(path[i]>m)
            {
                m=path[i];
            }
        }

       printf("%d\n",m);




    return 0;
}
