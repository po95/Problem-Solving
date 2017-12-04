#include<bits/stdc++.h>
using namespace std;

char s[30][30];
int l;

void dfs(int r,int c)
{
    if((r>=0&&r<l)&&(c>=0&&c<l))
    {
        if(s[r][c]=='1')
        {
            s[r][c]='0';

            dfs(r-1,c-1);
            dfs(r-1,c);
            dfs(r-1,c+1);
            dfs(r,c-1);
            dfs(r,c+1);
            dfs(r+1,c-1);
            dfs(r+1,c);
            dfs(r+1,c+1);
        }
    }
    else return;
}




int main()
{
    int k=0;
    while(1==scanf("%d",&l))
    {
        getchar();
        for(int i=0; i<l; i++)
        {
            scanf("%s",s[i]);
        }
        int c=0;

        for(int i=0; i<l; i++)
        {
            for(int j=0; j<l; j++)
            {
                if(s[i][j]=='1')
                {
                    dfs(i,j);
                    c++;
                }
            }
        }
        printf("Image number %d contains %d war eagles.\n",++k,c);
    }


    return 0;
}
