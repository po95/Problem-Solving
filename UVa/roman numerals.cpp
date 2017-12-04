#include<bits/stdc++.h>
using namespace std;

int main()

{
    int ara[10],mat[10];
    int i,n=1,j;
    ara[0]=1;
    mat[0]=1;
    for(i=1,j=2; i<7; i++)
    {
        if(i>=4)
        {
            mat[i]=j;
            j++;
        }
        else mat[i]=2;
        if(i%2!=0)
        {
            n*=5;
            ara[i]=n;
        }
        else if(i%2==0)
        {
            n*=2;
            ara[i]=n;
        }
    }
    while(1==scanf("%d",&n))
    {
        int sum=0,d;
        for(i=6; i>=0; i--)
        {
            if((n/ara[i])>0||(((i-1)>=0)&&(n/ara[i-1])>0))
            {
                d=n%ara[i];
                n=n/ara[i];
                sum+=(n*mat[i]);
                n=d;

                if(((i-1)>=0 || (i-2)>=0)&&((d/ara[i-1])==4 || (d/ara[i-2])==4))
                {
                    if((i-1)>=0&&(d/ara[i-1]==4))
                    {
                        sum+=mat[i-1]+mat[i];
                        n=d%ara[i-1];
                    }
                    else if(((i-2)>=0&&(d/ara[i-2]==4)))
                    {
                        sum+=mat[i-2]+mat[i];
                        n=d%ara[i-2];
                    }
                }
                else if(((i-1)>=0 || (i-2)>=0)&&((d/ara[i-1])==9 || (d/ara[i-2])==9))
                {
                    if((i-1)>=0&&(d/ara[i-1]==9))
                    {
                        sum+=mat[i-1]+mat[i];
                        n=d%ara[i-1];
                    }


                    else if((i-2)>=0&&(d/ara[i-2]==9))
                    {
                        sum+=mat[i-2]+mat[i];
                        n=d%ara[i-2];
                    }


                }
            }
        }
        printf("%d\n",sum);
    }


    return 0;
}
