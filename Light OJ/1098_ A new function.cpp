#include<bits/stdc++.h>
#define M 45000
using namespace std;

bool marked[45000];

vector<int>primes;

void sieve(int n)
{
    for(int i=3; i<=n; i+=2)
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
    if(n<2) return false;

    if(n==2) return true;

    if(n%2==0) return false;

    return marked[n]==false;
}
int sod(int n)
{
    int sum=1;

    int x=sqrt(n);

    for(int i=0; primes[i]<=x; i++)
    {
        if(n<primes[i]) break;

        int c=0;

        while(n%primes[i]==0)
        {
            n=n/primes[i];
            c++;
        }
        sum*=(((int)pow(primes[i],c+1)-1)/(primes[i]-1));

    }

    if(n>1)
    {
        sum*=((int)(pow(n,2)-1)/((n-1)));
    }

    return sum;
}

int main()
{
    sieve(45000);
    for(int i=2; i<=45000; i++)
    {
        if(isPrime(i))
        {
            primes.push_back(i);
        }
    }

    int t;

    scanf("%d",&t);

    int k=0;

    while(t--)
    {
        int n;
        scanf("%d",&n);
        long long longsum=1,cum=0;
        int sum;

        for(int i=2; i<=n; i++)
        {
            cum+=i;
            sum=sod(i);
            //printf("%d\n",sum);

            longsum+=sum;
        }
        longsum=longsum-(n+cum);
        printf("Case %d: %lld\n",++k,longsum);
    }

    return 0;
}
