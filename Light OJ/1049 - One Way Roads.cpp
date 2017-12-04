#include<bits/stdc++.h>
#define M 105
#define mem(x,y) memset(x,y,sizeof(x))
using namespace std;

vector<int>v[105];

bool trace[M][M];
int w[M][M];
bool visit[M];

int clk=0,aclk=0;

void dfsclk(int src,int psrc)
{
  // visit[src]=true;

   int u=src;

   for(int i=0; i<v[u].size(); i++)
   {
       if(visit[v[u][i]]==false && psrc!=v[u][i])
       {
           visit[v[u][i]]=true;
           //printf("dhukse\n");

           if(trace[u][v[u][i]]==false)
           {
              // printf("dhuklo\n");
               clk+=w[u][v[u][i]];
           }
           dfsclk(v[u][i],u);
       }
   }

}


void init(int n)
{
    for(int i=1; i<=n; i++)
    {
        v[i].clear();
        mem(trace[i],false);
        mem(w[i],0);
    }
}
void init_visit(int n)
{
    for(int i=1; i<=n; i++)
    {
        visit[i]=false;
    }
}
int main()
{
    //freopen("one.txt","r",stdin);
    int t;

    scanf("%d",&t);

    int k=0;

    while(t--)
    {
        getchar();
        int n;
        scanf("%d",&n);

        for(int i=1; i<=n; i++)
        {
            int a,b,c;
            scanf("%d%d%d",&a,&b,&c);
            trace[a][b]=true;
            w[a][b]=c;
            w[b][a]=c;

            v[a].push_back(b);
            v[b].push_back(a);

        }
        init_visit(n);
        clk=0;
        dfsclk(1,v[1][0]);
        aclk=clk;
       // printf("%d\n",aclk);

        init_visit(n);
        clk=0;
        dfsclk(1,v[1][1]);
       // printf("%d\n",clk);

        printf("Case %d: %d\n",++k,(int)min(clk,aclk));

        init(n);
    }




    return 0;
}
