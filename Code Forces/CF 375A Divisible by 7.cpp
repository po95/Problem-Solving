#include<bits/stdc++.h>
using namespace std;

char s[1000010];

int main()
{
    scanf("%s",&s);
    int l=0;

    int sum=0;


    for(i=0; s[i]!='\0'; i++)
    {
        sum+=(s[i]-'0');
        l++;
    }

    for(i=l-1; i>=0; i--)
    {
        num=s[i]-'0';
        j=sum-num;
        num=2*num;




    }


    return 0;
}
