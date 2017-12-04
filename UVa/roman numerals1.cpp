#include<bits/stdc++.h>
using namespace std;
int ara[100][100];
int main()
{

    int i,j;
    int n;

    while(1==scanf("%d",&n))
    {
        if(n==0) break;
        int R,C,x,y;
        int m=0;
        int r=-1,c=-1;
        for(i=0; i<n; i++)
        {
            for(j=0; j<n; j++)
            {
                scanf("%d",&ara[i][j]);
            }
         }
         for(i=0; i<n; i++)
         {
             R=0;
             C=0;
             for(j=0; j<n; j++)
             {
                R+=ara[i][j];
                C+=ara[j][i];
             }
            ara[i][n]=R;
            ara[n][i]=C;
           if(R%2!=0 && r==-1)
            {
                x=i;
                r=1;
            }
            if(C%2!=0 && c==-1)
            {
                y=i;
                c=1;
            }

        }

        if((c==1 || r==1)  && ara[x][y]==1)
        {
            ara[x][y]=0;
            ara[x][n]=ara[x][n]-1;
            ara[n][y]=ara[n][y]-1;
        }
        else if((c==1 || r==1)&& ara[x][y]==0)
        {
            ara[x][y]=1;
            ara[x][n]=ara[x][n]+1;
            ara[n][y]=ara[n][y]+1;
        }
        for(i=0; i<n; i++)
        {
            if((ara[i][n]%2)!=0 || (ara[n][i]%2)!=0 )
            {
                m=1;
                break;
            }

        }
        if(m==0 && r==-1 && c==-1) printf("OK\n");
        else if(m==0 && r==1 && c==1) printf("Change bit (%d,%d)\n",x+1,y+1);
        else printf("Corrupt\n");
    }



    return 0;
}
