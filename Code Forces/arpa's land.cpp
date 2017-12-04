#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    scanf("%d",&n);

    int r;

    int k=8/2;

    r=n%k;

    if(r==1) printf("8\n");
    else if(r==2) printf("4\n");
    else if(r==3) printf("2\n");
    else if(r==0) printf("6\n");

    return 0;
}
