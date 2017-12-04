#include<bits/stdc++.h>
using namespace std;

int out[6][6];

void toggle(int r,int c)
{

    if(out[r][c]==1) out[r][c]=0;
    else out[r][c]=1;


    if(out[r-1][c]==1 ) out[r-1][c]=0;
    else out[r-1][c]=1;


    if(out[r][c-1]==1 ) out[r][c-1]=0;
    else out[r][c-1]=1;

    if(out[r][c+1]==1 ) out[r][c+1]=0;
    else out[r][c+1]=1;


    if(out[r+1][c]==1) out[r+1][c]=0;
    else out[r+1][c]=1;
}

int main()
{

    for(int i=1; i<=3; i++)
    {
        for(int j=1; j<=3; j++)
        {
            out[i][j]=1;
        }
    }




    for(int i=1; i<=3; i++)
    {
        for(int j=1; j<=3; j++)
        {
            int x;
            scanf("%d",&x);

            if(x%2==1)
            {
                toggle(i,j);
            }
        }
    }

    for(int i=1; i<=3; i++)
    {
        for(int j=1; j<=3; j++)
        {
            printf("%d",out[i][j]);
        }
        printf("\n");
    }

    return 0;
}
