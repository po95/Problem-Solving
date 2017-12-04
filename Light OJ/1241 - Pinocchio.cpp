#include<bits/stdc++.h>
using namespace std;

int main()

{
    unsigned int t;
    scanf("%u",&t);

    int k=0;
    while(t--)
    {
        int n,c=0,x;
        int current=2,temp,r;
        scanf("%d",&n);
        for(int i=0; i<n; i++)
        {
            scanf("%d",&x);
            if(2<x && x>current)
            {
                temp=current;
                current=x;
                if((current-temp)<5) c++;
                else if((current-temp)>=5)
                {
                    r=current-temp;
                    if(r%5==0) c+=(r/5);
                    else if(r%5!=0) c+=((r/5)+1);
                }

            }
        }
        printf("Case %d: %d\n",++k,c);
    }


    return 0;
}
