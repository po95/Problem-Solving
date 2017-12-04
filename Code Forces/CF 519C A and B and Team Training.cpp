#include<bits/stdc++.h>
using namespace std;

int main()
{
    int m,n;

    scanf("%d%d",&m,&n);

    if(m==0 || n==0 || (m==1 && n==1)) printf("0\n");

    else if((m/n)>=2) printf("%d\n",n);

    else if((n/m)>=2) printf("%d\n",m);

    else
    {
        if(m<=n)
        {
            while((n/m)!=2 && m>1)
            {
                m--;
                n++;
            }

            printf("%d\n",m);
        }
        else
        {
            while((m/n)!=2 && n>1)
            {
                n--;
                m++;
            }

            printf("%d\n",n);
        }
    }


    return 0;
}
