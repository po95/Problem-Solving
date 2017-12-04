#include<bits/stdc++.h>
#define M 100000
using namespace std;

bool marked[M];

vector<int>primes;

void sieve(int n)
{
    for(int i=3; i*i<=n; i++)
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

bool isprime(int n)
{
    if(n<2) return false;

    if(n==2) return true;

    if(n%2==0) return false;

    return marked[n]==false;
}

int fod(int n)
{
    int c=0;
    int sum=0;
    int x=sqrt(n);

    for(int i=0; primes[i]<=x; i++)
    {
        if(primes[i]>n) break;
        int trace=0;
        while(n%primes[i]==0)
        {
            n=n/primes[i];
            if(trace==0)
            {
                sum++;
                trace=1;
            }
        }
        if(sum==3) break;
    }
    if(n>1) sum++;

    if(sum>=3) c=1;

    return c;
}



int main()
{
    sieve(M);

    for(int i=2; i<=M; i++)
    {
        if(isprime(i))
        {
            primes.push_back(i);
        }
    }

    int t;

    scanf("%d",&t);
    int n;

    while(t--)
    {
        scanf("%d",&n);

        int i=30;
        int c=1;
        int r;

        while(c<n)
        {
            i++;
            r=fod(i);

            if(r==1) c++;

        }
        printf("%d\n",i);

    }


    return 0;
}
