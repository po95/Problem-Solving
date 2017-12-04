//accepted
#include<bits/stdc++.h>
using namespace std;

int tr;
vector<int>v[1010];
bool visit[1010];
bool trace[1010];

void bfs(int src)
{
    visit[src]=true;
    if(tr==1) trace[src]=true;

    queue<int>q;

    q.push(src);

    int m,n;

    while(!q.empty())
    {
        m=q.front();
        q.pop();

        for(int i=0; i<v[m].size(); i++)
        {
            if(visit[v[m][i]]==false)
            {
                visit[v[m][i]]=true;
                q.push(v[m][i]);
                if(tr==1)
                {
                    trace[v[m][i]]=true;
                }
            }
        }
    }

}


void init_visit(int n)
{
    for(int i=0; i<=n; i++)
        visit[i]=false;
}

void init_vec(int n)
{
    for(int i=0; i<=n; i++)
    {
        v[i].clear();
        trace[i]=false;
    }
}

int main()
{
    //freopen("bestpicnic.txt","r",stdin);
    int k,n,m;

    int cas;

    scanf("%d",&cas);

    int cs=0;

    while(cas--)
    {
        tr=1;
        int ara[110];

        scanf("%d%d%d",&k,&n,&m);

        for(int i=0; i<k; i++)
        {
            scanf("%d",&ara[i]);
        }

        for(int i=0; i<m; i++)
        {
            int x,y;

            scanf("%d%d",&x,&y);

            v[x].push_back(y);
        }

        init_visit(n);
        int c=0;
        for(int i=0; i<k; i++)
        {
            //init_visit(n);
            bfs(ara[i]);
            if(tr==1)
            {
                tr++;
                for(int i=1; i<=n; i++)
                {
                    if(visit[i]==true)
                    {
                        visit[i]=false;
                        c++;
                    }
                }
               // printf("c=%d\n",c);
            }
            else
            {
                c=0;
                for(int i=1; i<=n; i++)
                {
                    if(trace[i]==true && visit[i]==true)
                    {
                        c++;
                        visit[i]=false;
                    }
                    else if(trace[i]==true)
                    {
                        trace[i]=false;

                    }
                    else if(visit[i]==true)
                    {
                        visit[i]=false;
                    }
                }
            }
        }

        printf("Case %d: %d\n",++cs,c);

        init_vec(n);



    }






    return 0;
}
