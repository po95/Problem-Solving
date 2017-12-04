#include<bits/stdc++.h>
using namespace std;

int main()

{
    int n;

    while(1==scanf("%d",&n))
    {
        if(n==2) printf("No\n");
        else if(n%2==0) printf("Yes\n");
        else printf("No\n");
    }

    return 0;
}
