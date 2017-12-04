#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long sum;
    char s[100];
    int i,k;

    while(1==scanf("%s",s))
    {
        if(s[0]=='0' && s[1]=='\0') break;
        int l;
        l=strlen(s);

        sum=0;
        for(i=l-1,k=1; i>=0; i--,k++)
        {
            sum+=((int)pow(2,k)-1)*(s[i]-48);
        }
        printf("%lld\n",sum);
    }

    return 0;
}
