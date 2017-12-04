#include<bits/stdc++.h>
using namespace std;

char s[505][505];
bool visited[505][505];
int trace[505][505];

int r,c;

int dfs(int x,int y)
{

    int count=0;
    int m,n;
    x=x-1;
    m=x;
    y=y-1;
    n=y;
    queue< pair<int,int> > sta;
    pair<int,int> p;

    sta.push(make_pair(x,y));
    visited[x][y]=true;

    int ai[]={-1,0,0,1};
    int aj[]={0,-1,1,0};

    while(!sta.empty())
    {
        p=sta.front();
        sta.pop();


        for(int i=0; i<4; i++)
        {
            x=p.first+ai[i];
            y=p.second+aj[i];

            if((x>=0&&x<r) && (y>=0&&y<c) && visited[x][y]==false && s[x][y]!='#')
            {
                visited[x][y]=true;
                sta.push(make_pair(x,y));
                if(s[x][y]=='.') continue;

                else if(s[x][y]=='C') count++;
            }
        }
    }

    //trace[m][n]=count;
    return count;

}

void init_visit(int x,int y)
{
    for(int i=0; i<=x; i++)
    {
        for(int j=0; j<=y; j++)
        {
            visited[i][j]=false;
        }
    }
}

void init_int(int x,int y)
{
    for(int i=0; i<=x; i++)
    {
        for(int j=0; j<=y; j++)
        {
            trace[i][j]=-1;
        }
    }
}

int main()
{
    int t;

    scanf("%d",&t);

    int k=0;

    while(t--)
    {
        int q;

        scanf("%d%d%d",&r,&c,&q);

        init_int(r,c);
        getchar();
        for(int i=0; i<r; i++)
        {
            gets(s[i]);
        }

        printf("Case %d:\n",++k);


        for(int i=0; i<q; i++)
        {
            int x,y;
            scanf("%d%d",&x,&y);

            if(trace[x-1][y-1]!=-1)
            {
                printf("%d\n",trace[x-1][y-1]);
            }
            else
            {
                init_visit(r,c);

                int p=dfs(x,y);

                printf("%d\n",p);

                for(int m=0; m<r; m++)
                {
                    for(int n=0; n<c; n++)
                    {
                        if(visited[m][n]==true) trace[m][n]=p;
                    }
                }
            }
        }
    }
    return 0;
}
