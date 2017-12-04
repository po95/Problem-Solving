#include<bits/stdc++.h>
using namespace std;

char s[110][110];
bool flag[105][105];
int c,p,l;

void for_water(int r,int c)
{
    if((r>=0&&r<l) && (c>=0&&c<l) && (flag[r][c]==false))
    {
        if(s[r][c]=='W')
        {
            p++;
            flag[r][c]=true;

            for_water(r-1,c-1);
            for_water(r-1,c);
            for_water(r-1,c+1);
            for_water(r,c-1);
            for_water(r,c+1);
            for_water(r+1,c-1);
            for_water(r+1,c);
            for_water(r+1,c+1);


        }
        else return;

    }
    else return;
}


int main()
{
    //freopen("wetland.txt","r",stdin);
    int t;

    scanf("%d",&t);
    getchar();

    while(t--)
    {
        char newl[6];
        getchar();

        scanf("%s",s[0]);

        l=strlen(s[0]);

        for(int i=1; i<l; i++)
        {
            scanf("%s",s[i]);
        }
        getchar();
        int i,j;
        while(gets(newl))
        {
            if(strlen(newl)==0)
                break;
            p=0;

            memset(flag,false,sizeof(flag));

            sscanf(newl,"%d%d",&i,&j);

            if(s[i-1][j-1]=='W') for_water(i-1,j-1);

            printf("%d\n",p);

        }

        if(t!=0) printf("\n");

    }


    return 0;
}
