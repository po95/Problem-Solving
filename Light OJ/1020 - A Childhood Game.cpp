#include<bits/stdc++.h>
using namespace std;

int main()
{
    unsigned int t;
    scanf("%u",&t);
    int n;
    char s[10];

    int k=0;
    while(t--)
    {
        scanf("%d%s",&n,s);

        if(strcmp(s,"Bob")==0)
        {
            if(n%3==0) printf("Case %d: Alice\n",++k);
            else printf("Case %d: Bob\n",++k);
        }
        else
        {
            if(n%3==1) printf("Case %d: Bob\n",++k);
            else printf("Case %d: Alice\n",++k);
        }

    }
    return 0;
}
