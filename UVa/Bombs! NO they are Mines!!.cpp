//accepted
#include<bits/stdc++.h>
#define INF 99999999
using namespace std;
int er,ec,r,c;

int ara[1010][1010];
int w[1010][1010];
bool visit[1010][1010];


int finds(int i,int j)
{
    int ai[]={-1,0,0,1};
    int aj[]={0,-1,1,0};

    int m=INF;

    queue< pair<int,int> >s;

    pair< int,int > p;

    s.push(make_pair(i,j));
    visit[i][j]=true;
    w[i][j]=0;

    while(!s.empty())
    {

        p=s.front();
        s.pop();

        i=p.first;
        j=p.second;

       // printf("i=%d j=%d\n",i,j);

        if( i==er && j==ec)
        {

            if(m>w[i][j])
            {
                m=w[i][j];
                //printf("dhukse m=%d\n",m);
            }
        }
        int x,y;
        for(int k=0; k<4; k++)
        {
            x=p.first+ai[k];
            y=p.second+aj[k];

            //printf("dhukse abar\n");

            if((x>=0&&x<r)&&(y>=0&&y<c)&& visit[x][y]==false && ara[x][y]!=1)
            {
                visit[x][y]=true;
                w[x][y]=w[i][j]+1;
                s.push(make_pair(x,y));
            }
        }
    }

    return m;

}

void init()
{
    for(int i=0; i<1005; i++)
    {
        memset(visit[i],false,sizeof(visit[i]));
        memset(ara[i],0,sizeof(ara[i]));
        memset(w[i],0,sizeof(w[i]));
    }
}

int main()
{
    //freopen("Bombs.txt","r",stdin);

    while(2==scanf("%d%d",&r,&c))
    {

        if(r==0 && c==0) break;
        int loop;

        init();

        scanf("%d",&loop);

        for(int i=1; i<=loop; i++)
        {
            int x,n;
            scanf("%d%d",&x,&n);

            for(int j=1; j<=n; j++)
            {
                int a;
                scanf("%d",&a);
                ara[x][a]=1;
            }
        }
        int sr,sc;
        scanf("%d%d",&sr,&sc);
        scanf("%d%d",&er,&ec);

        int t;


        t=finds(sr,sc);

        printf("%d\n",t);

    }


    return 0;
}
