
//word scramble
#include<bits/stdc++.h>
using namespace std;

int main()

{
    int i,j,k,l;
    char s[100000],out[100000],c[5000];


    while(gets(s))
    {
        l=strlen(s);

        for(i=0,k=0; i<l; i++,k++)
        {
            if(s[i]!=32)
            {
                j=0;
                c[j]=s[i];
                while(s[i+1]!=32 && s[i+1]!='\0')
                {
                    j++;
                    i++;
                    c[j]=s[i];
                }
                while(j>=0)
                {
                    out[k]=c[j];
                    j--;
                    k++;
                }
                k--;
            }
            else out[k]=s[i];
        }
        out[k]='\0';
        printf("%s\n",out);

    }

    return 0;
}
