#include<bits/stdc++.h>
#define M 100500
#define INF 999999
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

int main()
{
    sieve(M);

    int mat[505][505];

    int r,c;
    scanf("%d%d",&r,&c);

    bool find_p=false;
    int sum=0,x,mini=INF;

    for(int i=1; i<=r; i++)
    {
        sum=0;
        for(int j=1; j<=c; j++)
        {
            scanf("%d",&mat[i][j]);
            x=mat[i][j];

            while(!isPrime(x))
            {
                x++;
            }
            sum+=(x-mat[i][j]);
        }
        if(sum<mini)
        {
            mini=sum;
        }
        if(mini==0)
        {
            break;
        }
    }
    if(mini==0)
    {
        printf("0\n");
    }
    else
    {
        for(int i=1; i<=c; i++)
        {
            sum=0;
            for(int j=1; j<=r; j++)
            {
                x=mat[j][i];

                while(!isPrime(x))
                {
                    x++;
                }
                sum+=(x-mat[j][i]);
            }
            if(sum<mini)
            {
                mini=sum;
            }
            if(mini==0) break;

        }

        printf("%d\n",mini);
    }



    return 0;
}
