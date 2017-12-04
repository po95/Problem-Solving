#include<bits/stdc++.h>
#define M 50570
#define mod 1000000007
using namespace std;

bool marked[M];

vector<int>primes;

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

long long fod(int n)
{
    long long divisors=1;
    int k;
    for(int i=0; primes[i]<=n; i++)
    {
        k=primes[i];
        int c=1;
        int trace=0;
        while((n/k)>=1)
        {
            trace+=(int)floor(n/k);
            c++;
            k=(int)pow(primes[i],c);

        }

        divisors=(divisors%mod * (trace+1)%mod)%mod;
    }

    return divisors;

}

int main()
{
    sieve(M);

    for(int i=2; i<=50500; i++)
    {
        if(isPrime(i))
        {
            primes.push_back(i);
        }
    }

    int t;

    scanf("%d",&t);

    while(t--)
    {
        int n;

        scanf("%d",&n);

        long long r=fod(n);

        printf("%lld\n",r);
    }
    return 0;
}
