
#include<bits/stdc++.h>
using namespace std;

int main()

{
    int n,x;

    while(2==scanf("%d%d",&n,&x))
    {
        long long sum=x;
        int c=0;
        char ch,o;
        int p;
        for(int i=1; i<=n; i++)
        {
            getchar();
            scanf("%c",&ch);

            if(ch=='+')
            {
                scanf("%d",&p);
                sum+=p;
            }
            else if(ch=='-')
            {
                scanf("%d",&p);
                if(sum>=p)
                {
                    sum-=p;
                }
                else c++;
            }
        }
        printf("%I64d %d\n",sum,c);
    }


    return 0;
}
