#include<bits/stdc++.h>
using namespace std;

int main()

{
    int t;
    scanf("%d",&t);
    int k=0;
    char s[250];
    long long num2;
    while(t--)
    {
        scanf("%s%lld",s,&num2);

            if(num2==0|| num2==-0)
            {
                printf("Case %d: not divisible\n",++k);
                continue;
            }
            int l=strlen(s);
            if((l==1 && (s[0]=='0')) || (l==2 && (s[0]=='-' && s[1]=='0')))
            {
                printf("Case %d: divisible\n",++k);
                continue;
            }
            long long num1=0;
            int c=0;
            if(num2<0) num2=num2*(-1);
            if(s[0]=='-') c=1;
            int i;
           for(i=c; i<l; i++)
           {
               num1=num1+(s[i]-48);
               if(num1<num2)
               {
                   num1*=10;
                   continue;
               }
               else if(num1>=num2)
               {
                   num1=num1%num2;
                   num1*=10;
               }

           }
           if(num1==0 && i==l) printf("Case %d: divisible\n",++k);
           else printf("Case %d: not divisible\n",++k);

    }


    return 0;
}
