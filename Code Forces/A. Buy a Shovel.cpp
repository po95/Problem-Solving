#include<bits/stdc++.h>
using namespace std;

int main()

{
    int k,r;

    scanf("%d%d",&k,&r);
     int m=1,i,n=k;

    for(i=1; i<=10; i++)
    {
        if((k%10)==r || k%10==0)
        {
            m=i;
            if(i==10) m=i-1;
            break;
        }
        else k=n*i;
       // printf("%d %d\n",i,k);
    }
    printf("%d\n",m);

    return 0;
}
