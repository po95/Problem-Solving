#include<bits/stdc++.h>
using namespace std;

vector<int>primes;
bool marked[1000007];

void sieve(int n)
{
    for(int i=3; i*i<=n; i+=2)
    {
        if(marked[i]==false)
        {
            for(int j=i*i; j<=n; j+=i+i)
            {
                marked[j]=true;
            }
        }
    }
}


bool isPrime(int n)
{
    if (n < 2) return false;

    if (n == 2) return true;

    if (n % 2 == 0) return false;

    return marked[n] == false;
}


int nod(long long n)
{
    int sum=1;

    int x=sqrt(n);

    for(int i=0; primes[i]<=x; i++)
    {
        if(n<=1 || primes[i]>n)
        {
            break;
        }

        int c=0;

        while(n%primes[i]==0)
        {
            n=n/primes[i];
            c++;
        }
        sum*=(c+1);
    }
    if(n>1) sum*=2;

    return sum;
}

int main()
{
    int t;

   int  m=1000007;


   sieve(m);

    for(int i=2; i<=1000007; i++)
    {
        if(isPrime(i))
        {
            primes.push_back(i);
        }
    }

    scanf("%d",&t);

    int k=0;

    long long n;

    while(t--)
    {
        scanf("%lld",&n);

        int r=nod(n);

        printf("Case %d: %d\n",++k,r-1);
    }


    return 0;
}
