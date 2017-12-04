//codeforces 580C

#include<bits/stdc++.h>
using namespace std;

vector<int>v[100010];
vector<int>temp;

int cat[100010],c=0,m,visited[100010];


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


            if(v[v[u][i]].size()==1)
            {
                int sum=0;
                int x=1;

                for(int j=0; j<temp.size(); j++)
                {
                    if(cat[temp[j]]==0) sum=0;

                    else if(cat[temp[j]]==1) sum+=1;

                    if(sum>m)
                    {
                        x=0;
                        break;
                    }
                }
                if(x==1)
                {
                    c+=1;
                }

                temp.pop_back();

                visited[v[u][i]]=0;

                continue;
            }

            call(v[u][i]);

            visited[v[u][i]];

            temp.pop_back();
        }
    }
    visited[source]=0;



}

void init(int n)
{
    for(int i=1; i<=n; i++)
    {
        v[i].clear();
        cat[i]=0;
    }
    temp.clear();
}

int main()

{
    int n;

    while(2==scanf("%d%d",&n,&m))
    {

        for(int i=1; i<=n; i++)
        {
            scanf("%d",&cat[i]);
        }

        int x,y;

        for(int i=1; i<n; i++)
        {
            scanf("%d%d",&x,&y);

            v[x].push_back(y);

            v[y].push_back(x);
        }

        c=0;

        temp.push_back(1);

        call(1);

        printf("%d\n",c);

        init(n);
    }


    return 0;
}
