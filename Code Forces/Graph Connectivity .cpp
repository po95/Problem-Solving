#include<bits/stdc++.h>
using namespace std;

vector <int> v[30];
bool visited[30];



void bfs(int source)
{
    visited[source]=true;
    queue<int>q;

    int u=source;

    q.push(u);

    while(!q.empty())
    {
        u=q.front();
        q.pop();

        for(int i=0; i<v[u].size(); i++)
        {
            if(visited[v[u][i]]==false)
            {
                q.push(v[u][i]);
                visited[v[u][i]]=true;
            }
        }
    }
}

void init(int n)
{
    for(int i=0; i<=n; i++)
    {
        visited[i]=false;
        v[i].clear();
    }
}

int main()
{
   freopen("uva459.txt","r",stdin);
    int t;

    scanf("%d",&t);

    getchar();
    getchar();
    while(t--)
    {
        //getchar();

        char s[4],limit;

        scanf("%c",&limit);

        getchar();

        while(gets(s))
        {
            if(strlen(s)==0) break;

            v[s[1]-64].push_back(s[0]-64);
            v[s[0]-64].push_back(s[1]-64);

        }



       int x=limit-64;

        int c=0;

        for(int i=1; i<=x; i++)
        {
            if(visited[i]==false)
            {
                bfs(i);
                c++;
            }
        }

        printf("%d\n",c);
        if(t!=0) printf("\n");

        init(x);

    }



    return 0;
}
