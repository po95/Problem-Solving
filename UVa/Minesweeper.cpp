//accepted

#include<bits/stdc++.h>

int main()

{
   // freopen("mine.txt","r",stdin);
    int m,n;
    int k=0;

    while(2==scanf("%d%d",&m,&n))
    {
        if(m==0 || n==0) break;

        if(k!=0) printf("\n");

        char s[110][110];

        getchar();

        for(int i=1; i<=m; i++)
        {
            scanf("%s",s[i]);
        }
        printf("Field #%d:\n",++k);

        for(int i=1; i<=m; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(s[i][j]=='.')
                {
                int count=0;
                if(((i-1)>=1&&(i-1)<=m) && ((j-1)>=0&&(j-1)<n) && s[i-1][j-1]=='*')
                {
                    count++;
                }
                if(((i-1)>=1&&(i-1)<=m) && ((j)>=0&&(j)<n) && s[i-1][j]=='*')
                {
                    count++;
                }
                if(((i-1)>=1&&(i-1)<=m) && ((j+1)>=0&&(j+1)<n) && s[i-1][j+1]=='*')
                {
                    count++;
                }
                if(((i)>=1&&(i)<=m) && ((j-1)>=0&&(j-1)<n) && s[i][j-1]=='*')
                {
                    count++;
                }
                if(((i)>=1&&(i)<=m) && ((j+1)>=0&&(j+1)<n) && s[i][j+1]=='*')
                {
                    count++;
                }
                if(((i+1)>=1&&(i+1)<=m) && ((j-1)>=0&&(j-1)<n) && s[i+1][j-1]=='*')
                {
                    count++;
                }
                if(((i+1)>=1&&(i+1)<=m) && ((j)>=0&&(j)<n) && s[i+1][j]=='*')
                {
                    count++;
                }
                if(((i+1)>=1&&(i+1)<=m) && ((j+1)>=0&&(j+1)<n) && s[i+1][j+1]=='*')
                {
                    count++;
                }

                printf("%d",count);

                }
                else printf("%c",s[i][j]);
            }
            printf("\n");
        }
       // printf("\n");

    }


    return 0;
}
