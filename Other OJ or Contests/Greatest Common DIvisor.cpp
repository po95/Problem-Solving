#include<bits/stdc++.h>
using namespace std;


int gcd(int a,int b)
{
    int c;
    while(b!=0)
    {
        c=b;
        b=a%b;
        a=c;
    }
    return a;
}

int main()
{
    int a,b;
    while(2==scanf("%d%d",&a,&b))
    {
        printf("%d\n",gcd(a,b));
    }
    return 0;
}
