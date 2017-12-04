//accepted
#include<bits/stdc++.h>
using namespace std;

char r[10000];
char str[10000],str1[10000];

void fibo()
{
    int i,j;
    int l1=strlen(str);
    int l2=strlen(str1);

    i=l1-1;
    j=l2-1;

    int f_num=0,s_num=0,carry=0;
    int m=0,sum;

    while(i>=0 || j>=0)
    {
        f_num=0;
        s_num=0;

        if(i>=0)
        {
            f_num=str[i]-'0';
            i--;
        }
        if(j>=0)
        {
            s_num=str1[j]-'0';
            j--;
        }

        sum=carry+f_num+s_num;
        r[m++]='0'+sum%10;
        carry=sum/10;
    }
    if(carry==0)
    {
        r[m]='\0';
    }
    else
    {
        r[m++]=carry+'0';
        r[m]='\0';
    }
}

int main()
{
    //freopen("fibo.txt","r",stdin);
    int n;

    while(scanf("%d",&n)==1)
    {
        if(n==1 || n==2)
        {
            printf("1\n");
            continue;
        }
        else if(n==0)
        {
            printf("0\n");
            continue;
        }

        else if(n>2)
        {
            str[0]='1';
            str[1]='\0';

            str1[0]='1';
            str1[1]='\0';

            int i=3;


            while(i<=n)
            {
                fibo();
                strcpy(str,str1);
                int l=strlen(r);
                int j=0;

                for(int k=l-1; k>=0; k--)
                {
                    str1[j++]=r[k];
                }

                str1[j]='\0';
                i++;
            }
            printf("The Fibonacci number for %d is %s\n",n,str1);
        }
    }



    return 0;
}
