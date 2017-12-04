#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long a,b,c;
    while(2==scanf("%lld %lld",&a,&b))
    {
        long long i,c,mv,ml,s;
        if(a==0 && b==0) break;
        if(a>b) swap(a,b);

        mv=a;
        ml=0;
        long long sum;
        for(i=a; i<=b; i++)
        {
            s=0;
            sum=i;
            if(i==1)
            {
                ml=3;
                mv=1;
            }
            while(sum>=1)
            {
                if(sum==1)
                {
                    break;
                }
                else if(sum%2==0)
                {
                    s++;
                    sum=sum/2;
                }
                else if(sum%2!=0)
                {
                    sum=(sum*3)+1;
                    s++;
                }
            }
            if(s>ml)
            {
                ml=s;
                mv=i;
            }
        }
        printf("Between %lld and %lld, %lld generates the longest sequence of %lld values.\n",a,b,mv,ml);

    }

    return 0;
}
