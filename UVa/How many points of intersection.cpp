#include<bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("Howmanypoints.txt","r",stdin);
    long long int a,b;
    int k=0;

    while(2==scanf("%lli%lli",&a,&b))
    {
        if(a==0 && b==0)
        {
            break;
            printf("Case %d: 0\n",++k);
        }

        long long int result=0;

        long long int r=(b-1)*b;

        r=r/2;

        for(long long int i=2; i<=a; i++)
        {
            result+=((i-1)*r);
        }

        printf("Case %d: %lli\n",++k,result);


    }


    return 0;
}
