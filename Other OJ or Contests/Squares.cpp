#include<bits/stdc++.h>
using namespace std;

int main()

{
    int k,n;

    int num[60];

    while(2==scanf("%d%d",&n,&k))
    {
        for(int i=1; i<=n; i++)
        {
            scanf("%d",&num[i]);
        }

        sort(num+1,num+n+1);

        if(n<k) printf("-1\n");

        else
        {
            int c=0;
            for(int i=n; i>=1; i--)
            {
                c++;
                if(c==k)
                {
                    printf("%d %d",num[i],num[i]);
                    break;
                }

            }
            printf("\n");
        }
    }



    return 0;
}
