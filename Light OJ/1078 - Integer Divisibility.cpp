#include<bits/stdc++.h>
using namespace std;

int main()
{
    unsigned int t;

    scanf("%u",&t);
    int k=0;

    while(t--)
    {
        int n,d;
        scanf("%d%d",&n,&d);

        int c=1;
        int num=d;
        while(num%n!=0)
        {
            c++;
            num=num*10+d;
            num=num%n;
        }

        printf("Case %d: %d\n",++k,c);

    }



    return 0;
}
