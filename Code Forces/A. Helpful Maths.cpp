#include<bits/stdc++.h>
using namespace std;

int main()

{
    char s[110];

    int num[100];


    while(1==scanf("%s",s))
    {
        int l=strlen(s);
        int k=0;
        for(int i=0; i<l; i++)
        {
            if(s[i]>='1' && s[i]<='3')
            {
                num[k++]=s[i]-48;
            }
        }
        sort(num,num+k);
        for(int i=0; i<k; i++)
        {
            printf("%d",num[i]);
            if(i!=(k-1)) printf("+");
        }
        printf("\n");

    }





    return 0;
}
