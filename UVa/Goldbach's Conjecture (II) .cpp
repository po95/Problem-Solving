#include<bits/stdc++.h>
#define M 10000100
using namespace std;

int stat[(M/32)+1000];

vector<int>primes;

bool check(int N,int pos)
{
    return (bool)(N&(1<<pos));
}

int sett(int N, int pos)
{
    return (N=N | (1<<pos));
}

void sieve(int n)
{
    int r=(int)sqrt(n)+1;

    for(int i=3; i<=r; i+=2)
    {
        if(check(stat[i/32],i%32)==0)
        {
            for(int j=i*i; j<=n; j+=(i+i))
            {
                stat[j/32]=sett(stat[j/32],j%32);
            }
        }
    }
    primes.push_back(2);
    //printf("2\n");
    for(int i=3; i<=n; i+=2)
    {
        if(check(stat[i/32],i%32)==0)
        {
            primes.push_back(i);
            //printf("%d\n",i);
        }
    }
}

int god(int n)
{
    int d=n/2,c=0;

    int r;

    if(n==4) return 1;

    for(int i=0; primes[i]<=d; i++)
    {
        r=n-primes[i];

        if(r%2!=0)
        {
            if(check(stat[(n-primes[i])/32],(n-primes[i])%32)==0)
            {
                c++;
            }
        }
        else continue;

    }
    return c;
}

int main()
{
    sieve(M);

    int t;

    //scanf("%d",&t);

    int n;


    while(1==scanf("%d",&n))
    {
        //int n;
        if(n==0) break;

       // scanf("%d",&n);

        int r=god(n);

        printf("%d\n",r);
    }
    return 0;
}
