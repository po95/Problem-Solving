#include<bits/stdc++.h>
using namespace std;

int main()


{
    int i,j,k;
    char s[40];

    unsigned t;
    while(1==scanf("%u",&t))
    {
        while(t--)
        {
            scanf("%s",s);
            for(i=7; i<32; i+=8)
            {
                int sum=0;
                int k=1;
                for(j=i; j>=(i-7); j--)
                {
                    sum+=((s[j]-48)*k);
                    k*=2;
                }
                if((i+1)!=32) printf("%d.",sum);
                else printf("%d",sum);


            }
            printf("\n");
        }
    }
    return 0;
}
