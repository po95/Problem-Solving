#include<bits/stdc++.h>
using namespace std;

int main()

{
    int n;
    while(1==scanf("%d",&n))
    {
        unsigned int i=5;
        int c=0;
        while(i--)
        {
            int x;
            scanf("%d",&x);
            if(n==x) c++;
        }
        printf("%d\n",c);
    }

    return 0;
}
