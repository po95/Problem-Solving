#include<stdio.h>
#include<string.h>

int main()

{
    int i,j,k,l,n,m,sum,c;
    char t,s[250],out[250];
    int num[4];

    while(1==scanf("%d",&n))
    {

    for(c=0; c<n; c++)
    {

        scanf("%s",s);
        l=strlen(s);
        int r=0;
        for(i=0; i<l; i++)
        {

            if(s[i]>='A'&&s[i]<='Z')
            {
                m=0;
                t=s[i];
                sum=0;
                j=1;
                while(s[i+1]>='0'&&s[i+1]<='9')
                {
                    num[m]=s[i+1]-48;
                    m++;
                    i++;
                }
                i--;
                for(m=m-1; m>=0; m--)
                {
                    sum=sum+(num[m]*j);
                    j=j*10;
                }
                for(k=r; k<(sum+r); k++)
                {
                    out[k]=t;
                }
                r=k;
            }
        }
        out[k]='\0';
        printf("Case %d: %s\n",c+1,out);
    }

    }

    return 0;

}
