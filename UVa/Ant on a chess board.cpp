#include<bits/stdc++.h>
#include<cmath>
using namespace std;

int main()

{
    long long n;

    while(1==scanf("%lld",&n))
    {
       if(n==0) break;
        double r;
        int v,i;
        r=sqrt(n);
        v=(int)ceil(r);
        int x,y;

        if(v%2==0)
        {
            x=1,y=v;
            long long k;
            k=v*v;

            for(i=1,k=k; i<=(2*v-1)&&n!=k; i++,k--)
            {

                if(i<v)
                {
                    x++;
                }
                else if(i>=v)
                {
                    y--;
                }

            }
        }
        else if(v%2!=0)
        {
            x=v,y=1;
            long long k;
            k=v*v;

            for(i=1,k=k; i<=(2*v-1)&&n!=k; i++,k--)
            {

                if(i<v)
                {
                    y++;
                }
                else if(i>=v)
                {
                    x--;
                }

            }
        }
        printf("%d %d\n",y,x);
    }


    return 0;
}
