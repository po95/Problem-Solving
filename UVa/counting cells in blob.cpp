#include<bits/stdc++.h>
using namespace std;

char ara[30][30];
int m,p,n,l;

void couting(int r,int c)
{
    if((r>=0&&r<=l)&&(c>=0&&c<=l))
    {
       if(ara[r][c]=='1')
       {
           ara[r][c]='0';
           p++;

           couting(r-1,c-1);
           couting(r-1,c);
           couting(r-1,c+1);
           couting(r,c-1);
           couting(r,c+1);
           couting(r+1,c-1);
           couting(r+1,c);
           couting(r+1,c+1);
       }
       else return;
    }
    else return;
}


int main()
{
    scanf("%d",&n);
    getchar();
    while(n--)
    {

        getchar();

        scanf("%s",ara[0]);

        l=strlen(ara[0]);

        for(int i=1; i<l; i++)
        {
            scanf("%s",ara[i]);
        }


        m=0;

        for(int i=0; i<l; i++)
        {
            for(int j=0; j<l; j++)
            {
                p=0;
                if(ara[i][j]=='1')
                {
                    couting(i,j);
                    if(m<p) m=p;
                }
            }
        }

        printf("%d\n",m);

        if(n!=0) printf("\n");
    }


    return 0;
}
