#include<bits/stdc++.h>
using namespace std;

vector<int>v[10010];
vector<int>temp;

int visited[10010];

void call(int source)
{
    int u=source;

    visited[u]=1;


    for(int i=0; i<v[u].size();i++)
    {

        if(visited[v[u][i]]==0)
        {
            visited[v[u][i]]=1;
            temp.push_back(v[u][i]);

            call(v[u][i]);

            visited[v[u][i]]=0;

        }
    }
    visited[source]=0;
}

/*void init(int n)
{
    for(int i=1; i<=n; i++)
    {
        v[i].clear();
    }
    temp.clear();
}*/



int main()


{
    int n,m;

    scanf("%d%d",&n,&m);

        int x,y;
        for(int i=1; i<=m; i++)
        {
            scanf("%d%d",&x,&y);

            v[x].push_back(y);
            v[y].push_back(x);
        }

        temp.push_back(1);
        call(1);

        if(m==(n-1) && temp.size()==n)
        {
            printf("YES\n");
        }
        else printf("NO\n");





    return 0;
}
