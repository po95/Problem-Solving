#include<bits/stdc++.h>
using namespace std;
int ara[]={2,3,5};

int ugly(long long n)
{
    int c;

    for(int i=0; i<3; i++)
    {
            while(n%ara[i]==0)
            {
                n=n/ara[i];
            }
    }
    if(n==1) return c=1;
    else return c=0;
}

int main()

{
    int c=0;
    long long i=1;
    while(c<=1500)
    {
        if(ugly(i)==1)
        {
            c++;
            if(c==1500) break;

        }

        i++;
    }

    printf("The 1500'th ugly number is <%lld>.\n",i);




    return 0;
}
