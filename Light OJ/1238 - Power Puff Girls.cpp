#include<bits/stdc++.h>
#define INF 9999999
#define pf(x) printf("%d\n",x)
using namespace std;

int m,n,h_x,h_y;

char s[21][21];
bool visited[21][21];
int w[21][21];

int bfs(int i,int j)
{
    int maxx=INF;

    queue< pair<int,int> > qu;

    pair<int,int> p;

    visited[i][j]=true;

    w[i][j]=0;

    qu.push(make_pair(i,j));

    int ai[]={-1,0,0,1};
    int aj[]={0,-1,1,0};

    while(!qu.empty())
    {
        p=qu.front();
        qu.pop();

        i=p.first;
        j=p.second;

        int u=i,v=j;

        if(s[i][j]=='h')
        {
            if(w[i][j]<maxx)
            {
                maxx=w[i][j];
            }
        }

        for(int k=0; k<4; k++)
        {
            i=p.first+ai[k];
            j=p.second+aj[k];

            if((i>=0 && i<m) && (j>=0&&j<n) && visited[i][j]==false &&( s[i][j]=='.' || s[i][j]=='h' || s[i][j]=='a' || s[i][j]=='b' || s[i][j]=='c'))
            {
                w[i][j]=w[u][v]+1;
                visited[i][j]=true;
                qu.push(make_pair(i,j));
            }

        }
    }

    return maxx;
}

void init(int r,int c)
{
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            visited[i][j]=false;
            w[i][j]=0;
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
        scanf("%d%d",&m,&n);

        int  t_a_x=-1, t_a_y=-1, t_b_x=-1, t_b_y=-1, t_c_x=-1, t_c_y=-1;

        getchar();

        for(int i=0; i<m; i++)
        {
            gets(s[i]);

            for(int j=0; j<n; j++)
            {
                if(t_a_x==-1 || t_a_y==-1 || t_b_x==-1 || t_b_y==-1 || t_c_x==-1 || t_c_y==-1 )
                {
                    if(s[i][j]=='a')
                    {
                        t_a_x=i;
                        t_a_y=j;
                        //printf("ta_x = %d ta_y = %d\n",i,j);
                    }

                    else if(s[i][j]=='b')
                    {
                        t_b_x=i;
                        t_b_y=j;
                        //printf("tb_x = %d tb_y = %d\n",i,j);
                    }

                    else if(s[i][j]=='c')
                    {
                        t_c_x=i;
                        t_c_y=j;
                        //printf("tc_x = %d tc_y = %d\n",i,j);
                    }
                }
                else break;

            }
        }

        int blo,bubb,butter;


        init(m,n);

        blo=bfs(t_a_x,t_a_y);

        init(m,n);

        bubb=bfs(t_b_x,t_b_y);

        init(m,n);

        butter=bfs(t_c_x,t_c_y);

        int maxx=max(blo,bubb);

        maxx=max(maxx,butter);

        printf("Case %d: %d\n",++k,maxx);
    }


    return 0;
}
