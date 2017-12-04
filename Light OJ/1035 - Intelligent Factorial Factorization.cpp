#include<bits/stdc++.h>
#define M 110
using namespace std;

bool marked[M];
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
    if(n<0) return false;

    if(n==2) return true;

    if(n%2==0) return false;

    return marked[n]==false;
}

void fod(int n)
{
    int k=n;
    int u=0;

    for(int i=0; primes[i]<=k; i++)
    {
        if(u==0)
        {
            int sum=0,c=1;
            int p=primes[i];
            while((n/p)>=1)
            {
                sum+=(int)floor(n/p);
                c++;
                p=(int)pow(primes[i],c);
            }
            printf("%d (%d)",primes[i],sum);
            u=1;
        }
        else if(u==1)
        {
            printf(" * ");

            int sum=0,c=1;

            int p=primes[i];

            while((n/p)>=1)
            {
                sum+=(int)floor(n/p);
                c++;
                p=(int)pow(primes[i],c);
            }
            printf("%d (%d)",primes[i],sum);
        }
    }
}
int main()
{
    sieve(110);
    for(int i=2; i<=110; i++)
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

        printf("Case %d: %d = ",++k,n);

        fod(n);
        printf("\n");

    }


    return 0;
}
