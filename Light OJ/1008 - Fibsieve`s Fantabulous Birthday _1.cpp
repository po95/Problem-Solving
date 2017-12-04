#include<bits/stdc++.h>
using namespace std;

int main()

{
    int n;
    int r,i,k,l;
    long long t,s,j;
    scanf("%d",&n);
    k=0;
    while(1==scanf("%lld",&t)&&k<n)
    {
        r=(int)ceil(sqrt(t));
        s=(r*r);
        int x,y;
        long long u=s, mid=s-r+1,l=s-(2*r-2);


        if(r%2!=0)
        {
            if(u>=t && t>=mid)
            {
                x=1;
                y=r;
                for(j=u; j>=mid; j--)
                {
                    if(j==t) break;
                    else if(j==mid) continue;
                    x++;
                }
            }
            else if(t<mid && t>=l)
            {
                x=r;
                y=r-1;
                for(j=mid-1; j>=l; j--)
                {
                    if(j==t) break;
                    else if(j==l) continue;
                    y--;
                }
            }

        }
        else if(r%2==0)
        {
            if(t<=u&&t>=mid)
            {
                x=r;
                y=1;
                for(j=u; j>=mid; j--)
                {
                    if(j==t) break;
                    else if(j==mid) continue;
                    y++;
                }
            }
            else if(t<mid&&t>=l)
            {
                x=r-1;
                y=r;
                for(j=mid-1; j>=l; j--)
                {
                    if(j==t) break;
                    else if(j==l) continue;
                    x--;
                }
            }
        }

        printf("Case %d: %d %d\n",++k,x,y);
    }


    return 0;
}
