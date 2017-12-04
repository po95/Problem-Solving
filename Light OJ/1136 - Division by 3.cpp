#include<bits/stdc++.h>
using namespace std;

int main()

{
    freopen("t.txt","r",stdin);
    int t;
    while(1==scanf("%d",&t))
    {
        int k=0;
        int a,b;
        while(t--)
        {
            int c=0;

            scanf("%d%d",&a,&b);
            if((b-a)>2)
            {
                int s=0,e=0;
                if(a%3==0)
                {
                    s=1;
                    a=a+2;
                }
                else if((a+1)%3==0)
                {
                    s=0;
                }
                else if((a+1)%3!=0)
                {
                    s=0;
                    a=a+1;
                }
                if(b%3==0)
                {
                    e=0;
                }
                else if((b-2)%3==0)
                {
                    e=1;
                    b=b-2;
                }
                else if((b-1)%3==0)
                {
                    e=0;
                    b=b-1;
                }
                c=(b-a)-((b-a)/3)+1+s+e;
            }
            else if((b-a)<=2)
            {
                for(int i=a; i<=b; i++)
                {
                    if((i%3)==0 ||(i+1)%3==0) c++;
                }
            }
            printf("Case %d: %d\n",++k,c);
        }
    }


    return 0;
}
