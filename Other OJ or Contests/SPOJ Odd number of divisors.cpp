#include<bits/stdc++.h>
#define M 10000000010
#define pf printf
#define pf1(x) printf("%d\n",x)
#define sf1(x) scanf("%d",&x)
#define sf2(x,y) scanf("%d%d%d",&x,&y)
#define sf3(x,y,z) scanf("%d%d%d",&x,&y,&z)
#define mem(x,y) memset(x,y,sizeof(x))
#define pi acos(-1.0)

using namespace std;
bool marked[100010];
vector<int>primes;

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
    if(n<2) return false;

    if(n==2) return true;

    if(n%2==0) return false;

    return marked[n]==false;
}

int onod(int n)
{

    int sum=1;

   // double r;
    int r=sqrt(n);

    //if((int)ceil(r)!=(int)floor(r)) return 0;



    for(int i=0; primes[i]<=r; i++)
    {
        int c=0;
        if(primes[i]>n)
        {
            break;
        }

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
    sieve(100000);

    for(int i=2; i<=100000; i++)
    {
        if(isPrime(i))
        {
            primes.push_back(i);
        }
    }
    int t;

    sf1(t);

    int k=0;

    while(t--)
    {
        int k;
        long long low,high;
        scanf("%d %lld %lld",&k,&low,&high);

        int c=0,r;

        long long i;
        int rt=ceil(sqrt(low));

        low=rt*rt;



        for( i=low; i<=high; i+=(2*rt-1))
        {
            r=onod(i);
            if(r==k) c++;
            rt++;
        }

        pf1(c);
    }


    return 0;
}
