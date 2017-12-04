#include<bits/stdc++.h>




























using namespace std;



int main()

{
    int t;

    scanf("%d",&t);

    int k=0;

    while(t--)
    {
        scanf("%d",&n);

        int r=goldbach(n);

        printf("Case %d: %d\n",++k,r);
    }
    return 0;
}
