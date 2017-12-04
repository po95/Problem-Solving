//product uva 10106

#include<bits/stdc++.h>
using namespace std;

int main()

{
    int i,j,k,l,n,m;

    char str1[300],str2[300],str3[300],out[700];

    int l1,l2;

    while(2==scanf("%s%s",str1,str2))
    {
        if(strcmp(str1,"0")==0 || strcmp(str2,"0")==0) printf("0\n");
        else
        {
            l1=strlen(str1);
            l2=strlen(str2);

            if(l2>l1)
            {
                strcpy(str3,str1);
                strcpy(str1,str2);
                strcpy(str2,str3);

                l1=strlen(str1);
                l2=strlen(str2);
            }
            i=0;
            while(i<=690)
            {
                out[i]='0';
                i++;
            }

            for(n=l2-1,j=0; n>=0; n--,j++)
            {
                int c=0;
                int x;
                for(m=l1-1,k=j; m>=0; m--,k++)
                {
                    x=(str2[n]-48)*(str1[m]-48)+c+(out[k]-48);
                    c=x/10;
                    out[k]=(x%10)+48;
                }
                if(c!=0)
                {

                    out[k]=c+48;
                    k++;
                }
            }
            out[k]='\0';


            for(i=k-1; i>=0; i--)
            {
                printf("%c",out[i]);
            }
            printf("\n");
        }

    }

    return 0;
}

