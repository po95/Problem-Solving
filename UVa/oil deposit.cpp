#include<bits/stdc++.h>
using namespace std;

int ara[110][110];

void findoil(int x,int y)
{
    if(ara[x][y]=='@')
    {
        ara[x][y]='*';
        findoil(x-1,y-1);
        findoil(x-1,y);
        findoil(x-1,y+1);
        findoil(x,y-1);
        findoil(x,y+1);
        findoil(x+1,y-1);
        findoil(x+1,y);
        findoil(x+1,y+1);
    }
    if(ara[x][y]=='*') return;

}



int main()

{
    int m,n;
    char s[110];
    while(2==scanf("%d%d",&m,&n))
    {
        if(m==0 || n==0) break;
        memset(ara,0,sizeof(ara));

        for(int i=1; i<=m; i++)
        {
            int l;
            getchar();
            scanf("%[^\n]",s);
            l=strlen(s);
            for(int k=0,j=1; k<l; k++)
            {
                if(s[k]=='*')
                {
                    ara[i][j++]='*';
                }
                else if(s[k]=='@')
                {
                    ara[i][j++]='@';
                }
            }
        }
        int c=0;
        for(int i=1; i<=m; i++)
        {
            for(int j=1; j<=n; j++)
            {
                if(ara[i][j]=='@')
                {
                    findoil(i,j);
                    ara[i][j]='*';
                    c++;
                }
            }
        }
        printf("%d\n",c);

    }
    return 0;

}

