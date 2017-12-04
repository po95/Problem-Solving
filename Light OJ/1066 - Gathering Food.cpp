//accepted
#include<bits/stdc++.h>
#define mem(x,y) memset(x,y,sizeof(x))
using namespace std;

char s[15][15];
bool visit[15][15];
int w[15][15];
int sx,sy,ex,ey;
int alp[28],arax[28],aray[28];
int alm=0,ax=0,ay=0;

int n;

int bfs(int x,int y,int ascii)
{
    int mov=0,trace=0;

    queue< pair<int,int> >q;

    pair<int,int>p;

    q.push(make_pair(x,y));

    visit[x][y]=true;

    int ax[]= {-1,0,0,1},ay[]= {0,-1,1,0};

    while(!q.empty())
    {
        p=q.front();
        q.pop();

        if(p.first==ex && p.second==ey)
        {
            trace=1;
            return w[ex][ey];
        }

        for(int i=0; i<4; i++)
        {
            x=p.first+ax[i];
            y=p.second+ay[i];

            if((x>=0&&x<n)&&(y>=0&&y<n)&&visit[x][y]==false && (s[x][y]=='.' || s[x][y]==(64+ascii)))
            {
                visit[x][y]=true;
                w[x][y]=w[p.first][p.second]+1;
                q.push(make_pair(x,y));
            }
        }

    }

    return mov;
}

void init(int n)
{
    for(int i=0; i<=n; i++)
    {
        mem(w[i],0);
    }
}

void init_visit(int n)
{
    for(int i=0; i<n; i++)
    {
        mem(visit[i],false);
    }
}
int main()
{
    //freopen("Gathering.txt","r",stdin);



    int t;

    scanf("%d",&t);

    int k=0;

    while(t--)
    {
        getchar();

        alm=0,ax=0,ay=0;

        scanf("%d",&n);

        for(int i=0; i<n; i++)
        {
            getchar();
            scanf("%s",s[i]);


            for(int j=0; j<n; j++)
            {
                if(s[i][j]>='A' && s[i][j]<='Z')
                {
                    alp[alm++]=s[i][j]-64;
                    arax[ax++]=i;
                    aray[ay++]=j;
                }

            }

        }


        for(int i=1; i<alm; i++)
        {
            if(alp[i]<alp[i-1])
            {
                for(int j=i; j>0; j--)
                {
                    if(alp[j]<alp[j-1])
                    {
                        swap(alp[j],alp[j-1]);
                        swap(arax[j],arax[j-1]);
                        swap(aray[j],aray[j-1]);
                    }
                }
            }
        }
       /* for(int i=0; i<alm; i++)
        {
            printf("%c\n",64+alp[i]);
        }*/

        int sum=0;
        w[arax[0]][aray[0]]=0;

        for(int i=1; i<alm; i++)
        {

            sx=arax[i-1];
            sy=aray[i-1];
            ex=arax[i];
            ey=aray[i];
            int  ascii=alp[i];
            init_visit(n);

            int r=bfs(sx,sy,ascii) ;
            s[sx][sy]='.';
            s[ex][ey]='.';

            if(r==0)
            {
                sum=0;
                break;
            }

            sum=r;
        }

        if(sum==0 && alm==1) printf("Case %d: %d\n",++k,sum);

        else if(sum==0) printf("Case %d: Impossible\n",++k);

        else if(sum>0) printf("Case %d: %d\n",++k,sum);

        init(n);


    }

    return 0;
}
