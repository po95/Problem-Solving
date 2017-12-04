//accepted

#include<bits/stdc++.h>
using namespace std;
char s[25][25];
int result=0;
int n,m;

void dfs(int r,int c)
{

    if(r<0||r>=m) return ;
    if(c<0||c>=n) return ;



    if(s[r][c]=='.')
    {
        result++;
        s[r][c]='#';
        dfs(r-1,c);
        dfs(r+1,c);
        dfs(r,c-1);
        dfs(r,c+1);
    }
    if(s[r][c]=='#')
    {
        return ;
    }

}

int main()
{

    unsigned int t;

    scanf("%u",&t);

    int k=0;

    while(t--)
    {

        char ch;
        int r,c;

        scanf("%d%d",&n,&m);
        getchar();

        for(int i=0; i<m; i++)
        {
            for(int j=0; j<n; j++)
            {
                scanf("%c",&ch);
                if(ch=='@')
                {
                    r=i;
                    c=j;
                    s[i][j]='.';
                    continue;
                }
                s[i][j]=ch;
            }
            getchar();
        }

        dfs(r,c);

        printf("Case %d: %d\n",++k,result);

        result=0;
    }



    return 0;
}
