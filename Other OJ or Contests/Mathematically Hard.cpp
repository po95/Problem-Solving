#include<bits/stdc++.h>
#define M 5000010
using namespace std;

int phi[M];
bool marked[M];
unsigned long long int s[M];

void sievephi(int n)
{
    for(int i=1; i<=n; i++)
    {
        phi[i]=i;
    }

    phi[1]=1;
    marked[1]=true;
    s[1]=1;

    for(int i=2; i<=n; i++)
    {
        if(marked[i]==false)
        {
            for(int j=i; j<=n; j+=i)
            {
                marked[j]=true;

                phi[j]= (phi[j]/i)*(i-1);
            }
        }
        s[i]=s[i-1]+phi[i]*phi[i];
    }


}
int main()
{
    sievephi(M);

    int t;

    scanf("%d",&t);

    int k=0;
    int a,b;

    while(t--)
    {
        scanf("%d%d",&a,&b);

        printf("Case %d: %llu\n",++k,s[b]-s[a-1]);

    }



    return 0;
}
