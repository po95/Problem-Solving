#include<bits/stdc++.h>
#define M 1000500
using namespace std;

bool marked[M];

vector<int>v;

bool isPrime(int n)
{
    if (n < 2) return false;

    if (n == 2) return true;

    if (n % 2 == 0) return false;

    return marked[n] == false;
}

void sieve(int n)
{
    for (int i = 3; i * i <= n; i += 2)
    {
        if (marked[i] == false)
        {
            for (int j = i * i; j <= n; j += i + i)
            {
                marked[j] = true;
            }
        }
    }
}

bool tnod(long long n)
{
    double x=sqrt(n);
    int rt;

    if(ceil(x)==floor(x))
    {
        rt=(int)x;
        if(isPrime(rt)) return true;
        else return false;
    }
    else return false;



}

int main()
{
    sieve(M);

    for(int i=2; i<=M; i++)
    {
        if(isPrime(i))
        {
            v.push_back(i);
        }
    }

    int t;

    scanf("%d",&t);

    while(t--)
    {
        long long n;

        scanf("%I64d",&n);
        bool r;

        if(n==4)
        {
            r=true;
        }
        else if(n%2==0 || n==1)
        {
            r=false;
        }
        else r=tnod(n);

        if(r) printf("YES\n");
        else printf("NO\n");
    }



    return 0;
}
