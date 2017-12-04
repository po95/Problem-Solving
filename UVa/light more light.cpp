#include<bits/stdc++.h>
#include<cmath>
using namespace std;

int main()

{
    int n;

    while(1==scanf("%d",&n))
    {
        double r;
        r=sqrt(n);
        if(n==0) break;
        if(floor(r)>r || floor(r)<r) printf("no\n");
        else printf("yes\n");
    }

    return 0;
}

