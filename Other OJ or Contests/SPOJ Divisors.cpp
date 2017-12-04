#include<bits/stdc++.h>
#define M 1000007
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

int d(int n)
{
    int sum=1;
    int x=sqrt(n);
    for(int i=0; primes[i]<=x; i++)
    {
        if(primes[i]>n) break;
        int c=0;
        while(n%primes[i]==0)
        {
            n=n/primes[i];
            c++;
        }
        sum*=(c+1);
    }

    if(n>1)
    {
        sum*=2;
    }

    return sum;
}

bool check(int n)
{
    int x=sqrt(n);

    for(int i=0; primes[i]<=x; i++)
    {
        if(n%primes[i]==0)
        {
            if(isPrime(n/primes[i])==true && primes[i]!=(n/primes[i]))
            {
                return true;
            }
        }
    }
    return false;
}


int main()
{
    int rt=(int)sqrt(M)+1;
    sieve(M);

    for(int i=2; i<=rt+10; i++)
    {
        if(isPrime(i)) primes.push_back(i);
    }

    int c=0;

    for(int i=6; i<=1000000; i++)
    {
        int r=d(i);
        if(check(r))
        {
            c++;
            if(c==9)
            {
                printf("%d\n",i);
                c=0;
            }
        }
    }



    return 0;
}
