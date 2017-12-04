//accepted
#include<bits/stdc++.h>
using namespace std;

char s[202][202];
bool trace[202][202];
int n;

bool check()
{
    stack< pair<int,int> > sta;

    pair<int,int>p;


    for(int i=0; i<n; i++)
    {
        if(s[0][i]=='b')
        {
            trace[0][1]=true;
            sta.push(make_pair(0,i));
        }
    }

    int ai[]={-1,-1,0,0,1,1};
    int aj[]={-1,0,-1,1,0,1};

    while(!sta.empty())
    {
        p=sta.top();
        sta.pop();

        int x,y;

        if(p.first==n-1) return true;

        for(int i=0; i<6; i++)
        {
            x=p.first+ai[i];
            y=p.second+aj[i];

            if((x>=0&&x<n)&&(y>=0&&y<n)&&trace[x][y]==false&& s[x][y]=='b')
            {
                trace[x][y]=true;
                sta.push(make_pair(x,y));
            }
        }
    }
    return false;
}

int main()
{

    int k=0;

    while(1==scanf("%d",&n))
    {
        if(n==0) break;

        getchar();

        for(int i=0; i<n; i++)
        {
            gets(s[i]);
        }

        for(int i=0; i<n; i++)
        {
            memset(trace[i],false,sizeof(trace[i]));
        }

        if(check())
        {
            printf("%d B\n",++k);
        }
        else
        {
            printf("%d W\n",++k);
        }

    }


    return 0;
}
