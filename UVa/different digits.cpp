#include<bits/stdc++.h>
using namespace std;

int ara[5],i;

void digit(int n)
{
    i=0;
    int k;
    for(k=1000; k>=1; k/=10)
    {
        if(k<=n)
        {
            while(k!=0)
            {
                ara[i]=n/k;
                n=n%k;
                i++;
                k/=10;
            }
        }
    }
}

int main()

{
    int n2,n1;
    int j,k,l;

    while(2==scanf("%d %d",&n1,&n2))
    {
        int c=0;
        for(j=n1; j<=n2; j++)
        {
            digit(j);
            int y=0;
            for(k=0; k<i; k++)
            {
                for(l=0; l<i; l++)
                {
                    if(l==k) continue;

                    else if(ara[k]==ara[l])
                    {
                        y=1;
                        break;
                    }
                }
                if(y==1) break;
            }
            if(y==0) c++;
        }
        printf("%d\n",c);
    }
    return 0;
}
