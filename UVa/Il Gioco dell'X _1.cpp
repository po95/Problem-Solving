#include<bits/stdc++.h>
using namespace std;

//int ara[210][210];
int n,r;

char s[210][210];

void dfs(int i,int j)
{
    if((i>=0&&i<n) && (j>=0&&j<n))
    {
        //if(ara[i][j]==0)
        if(s[i][j]=='b')
        {
            if(i==(n-1))
            {
                printf("final\n");
                r=1;
                return;
            }
            printf("kaj chole\n");
            s[i][j]='w';

            dfs(i-1,j-1);
            dfs(i-1,j);
            dfs(i,j-1);
            dfs(i,j+1);
            dfs(i+1,j);
            dfs(i+1,j+1);

            s[i][j]='b';

        }
        else return;
    }
    else return;
}
int main()
{
    //freopen("Gioco.txt","r",stdin);

    //char s[210];

    int k=0;

    while(1==scanf("%d",&n))
    {
        //memset(ara,0,sizeof(ara));
        if(n==0) break;

        getchar();

        for(int i=0; i<n; i++)
        {
            gets(s[i]);
            //int l=strlen(s);

           /* for(int j=0; j<l; j++)
            {
                if(s[j]=='w')
                {
                    ara[i][j+1]=1;
                }
                else if(s[j]=='b')
                {
                    ara[i][j+1]=0;
                }
            }*/
        }

        r=0;

        for(int i=0; i<n; i++)
        {
            dfs(0,i);

            if(r==1) break;
        }

        if(r==1)
        {
            printf("%d B\n",++k);
        }
        else if(r==0)
        {
            printf("%d W\n",++k);
        }


    }


    return 0;
}
