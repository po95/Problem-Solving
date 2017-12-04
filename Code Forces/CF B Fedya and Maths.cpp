#include<bits/stdc++.h>
using namespace std;

int main()
{
    char s[100050];

    scanf("%s",s);

    int l=strlen(s);

    if(l==1 && s[0]=='0')
    {
        printf("4\n");
    }

    else
    {
        int sum=1;

        int k=1,num=0,red;

        for(int i=l-1; i>=(l-2) && i>=0; i--)
        {
            num=num+(k*s[i]-'0');
            k*=10;
        }

        red=num%4;

        if(red==1) sum+=5;
        else if(red==2) sum+=8;
        else if(red==3) sum+=5;
        else if(red==0) sum+=2;

        if((s[l-1]-'0')%2==1) sum+=4;
        else if((s[l-1]-'0')%2==0) sum+=1;

        printf("%d\n",sum%5);

    }




    return 0;
}
