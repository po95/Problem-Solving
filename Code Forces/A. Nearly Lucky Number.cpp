#include<bits/stdc++.h>
using namespace std;


int check(long long n)
{
    int r;
    int c=0;

    if(n==0) return 0;

    while(n>0)
    {
        r=n%10;
        n=n/10;

        if(r==4 || r==7)
        {
            c++;
        }

    }

    if(c==4 || c==7) return 1;
    else return 0;

}



int main()
{
    long long n;

    cin>>n;

    int r=check(n);

    if(r==1) printf("YES\n");
    else printf("NO\n");

    return 0;
}
