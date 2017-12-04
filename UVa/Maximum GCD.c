#include<stdio.h>
#include<string.h>

int main()

{
    int i,j,k,l,n,m,p;
    char s[5000];
    long long int ara[110],sum;//g[5000];
    int num[12];//sum;


    while(1==scanf("%d",&n))
    {
        for(i=0; i<n; i++)
        {
            scanf(" %[^\n]",&s);
            l=strlen(s);
            m=0;
            long long int gcd=1;
            for(j=0; j<l; j++)
            {
                p=0;
                k=1;
                sum=0;
                while(s[j]>='0' && s[j]<='9')
                {
                    num[p]=s[j]-48;
                    p++;
                    j++;
                }
                for(p=p-1; p>=0; p--)
                {
                    sum=sum+k*num[p];
                    k*=10;
                }
                ara[m]=sum;
                m++;
            }
            long long int a,b,c,t;
            for(j=0; j<m-1; j++)
            {
                a=ara[j];
                for(p=j+1; p<m; p++)
                {
                    t=a;
                    b=ara[p];
                    while(b!=0)
                    {
                        c=b;
                        b=t%b;
                        t=c;
                    }
                    if(gcd<t) gcd=t;
                }
            }
            printf("%lli\n",gcd);
        }
    }

    return 0;
}

