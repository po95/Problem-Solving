#include<bits/stdc++.h>
using namespace std;

int k,visited[100010];

vector<int>v[100010];
vector<int>temp;
int c;

void call(int source)
{
    int u=source;


    visited[source]=1;

    for(int i=0; i<v[u].size(); i++)
    {
        if(visited[v[u][i]]==0)
        {
            visited[v[u][i]]=1;

            temp.push_back(v[u][i]);

            call(v[u][i]);

            visited[v[u][i]]=0;

            if(c==1)
            {
                visited[source]=0;
                return ;
            }

        }
        else if(visited[v[u][i]]==1)
        {

            if(temp.size()>k && (1==v[u][i]) && c==0)
            {
                int x=0;
                for(int j=0; j<v[1].size(); j++)
                {
                    if(v[1][j]==u)
                    {
                        x=1;
                        c=1;
                        break;
                    }
                }
                if(c==1 && x==1) break;
            }

        }
    }

    visited[source]=0;
    return ;
}


void init(int n)
{
    for(int i=1; i<=n; i++)
    {
        v[i].clear();

    }
    temp.clear();
}

int main()

{
    int n,m;

    while(3==scanf("%d%d%d",&n,&m,&k))
    {
        int x,y;
        for(int i=1; i<=m; i++)
        {
            scanf("%d%d",&x,&y);

            v[x].push_back(y);
            v[y].push_back(x);
        }

        temp.push_back(1);

        call(1);

        printf("%d\n",temp.size());

        for(int i=0; i<temp.size(); i++)
        {
            printf("%d",temp[i]);

            if(i!=(temp.size()-1)) printf("%c",32);

        }
        printf("\n");
        init(n);

    }


    return 0;
}
