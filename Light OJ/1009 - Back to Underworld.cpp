//accepted
#include<bits/stdc++.h>
#define mem(x,y) memset(x,y,sizeof(x))
#define M 20010
using namespace std;

vector<int>v[M];
bool lycan[M],vam[M],visit[M];


int bfs(int src)
{
    queue<int>q;

    visit[src]=true;
    lycan[src]=true;


    int cl=1,cv=0;

    q.push(src);

    int x,y;

    while(!q.empty())
    {
        x=q.front();
        q.pop();

        for(int i=0; i<v[x].size(); i++)
        {
            if(visit[v[x][i]]==false)
            {
                if(lycan[x]==true)
                {
                    visit[v[x][i]]=true;
                    vam[v[x][i]]=true;
                    q.push(v[x][i]);
                    cv++;
                }
                else if(vam[x]==true)
                {
                    visit[v[x][i]]=true;
                    lycan[v[x][i]]=true;
                    q.push(v[x][i]);
                    cl++;
                }
            }
        }
    }

    return max(cl,cv);
}



void init(int n) // for initialization
{
    for(int i=1; i<=n; i++)
    {
        v[i].clear();
        lycan[i]=false;
        vam[i]=false;
        visit[i]=false;
    }
}

int main()
{
  // freopen("underworld.txt","r",stdin);
    int n;

    scanf("%d",&n);

    int k=0;

    while(n--)
    {
        int edges;

        scanf("%d",&edges);

        map<int,int>mymap;

        int assign=1;

        for(int i=1; i<=edges; i++)
        {
            int x,y,p,q;
            scanf("%d%d",&x,&y);

            if(mymap[x]==0)
            {
                mymap[x]=assign;
                p=assign;
                assign++;
            }
            else
            {
                p=mymap[x];
            }
            if(mymap[y]==0)
            {
                mymap[y]=assign;
                q=assign;
                assign++;
            }
            else
            {
                q=mymap[y];
            }

            v[p].push_back(q);
            v[q].push_back(p);
        }
        int sum=0;

        for(int i=1; i<assign; i++)
        {
            if(visit[i]==false)
            {
                int r=bfs(i);
                sum+=r;
            }
        }

        printf("Case %d: %d\n",++k,sum);

        init(assign);
    }


    return 0;
}
