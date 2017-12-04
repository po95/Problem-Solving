//accepted
#include<bits/stdc++.h>
#define INF 999999999
using namespace std;

char s[100010];
long long num[30];

int main()
{

    int n,k;

    scanf("%d%d",&n,&k);

    getchar();

    scanf("%s",s);

    int l=strlen(s);

    for(int i=0; i<l; i++)
    {
        num[s[i]-'A']++;
    }

    sort(num,num+26,greater<int>());

    long long rem=k;

    long long maxi=0;

    for(int i=0; i<26; i++)
    {
        if(num[i]!=0 && rem>0)
        {
            if(num[i]>rem)
            {
                maxi+=(rem*rem);
                rem=0;
            }
            else if(num[i]==rem)
            {
                maxi+=(num[i]*num[i]);
                rem=rem-num[i];
            }
            else if(num[i]<rem)
            {
                maxi+=(num[i]*num[i]);
                rem=rem-num[i];
            }
        }
        else break;
    }

   cout<< maxi <<endl;

    return 0;
}
