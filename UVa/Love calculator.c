
#include<stdio.h>
#include<string.h>

int main()

{
    int i,j,k,l;
    char s1[30],s2[30];


    while(2==scanf(" %[^\n] %[^\n]",s1,s2))
    {
        int l1,l2;

        l1=strlen(s1);
        l2=strlen(s2);
        int n1=0,n2=0;

        for(i=0; i<l1; i++)
        {
               if(s1[i]>='a'&&s1[i]<='z')
               {
                   n1+=s1[i]-96;
               }
               else if(s1[i]>='A'&&s1[i]<='Z')
               {
                   n1+=s1[i]-64;
               }
        }
           // printf("%d\n",n1);

        for(i=0; i<l2; i++)
        {
                if(s2[i]>='a'&&s2[i]<='z')
               {
                   n2+=s2[i]-96;
               }
               else if(s2[i]>='A'&&s2[i]<='Z')
               {
                   n2+=s2[i]-64;
               }
        }
       // printf("%d\n",n2);
        double sum1=0,sum2=0;



while(n1>=10 || n2>=10)
{

        for(i=1000; i>=1; i/=10)
        {
            if(n1>=i)
            {
                sum1+=(n1/i);
                n1=n1%i;
            }
            if(n2>=i)
            {
                sum2+=(n2/i);
                n2=n2%i;
            }
            if(i==1 && (sum1>=10 ||sum2>=10))
            {
                i=100;
                if(sum1>=10)
                {
                    n1=sum1;
                    sum1=0;
                }
                if(sum2>=10)
                {
                    n2=sum2;
                    sum2=0;
                }

            }
        }

}

      //  printf("%lf %lf\n",sum1,sum2);
        if((sum1/sum2)<1)
        {
            printf("%0.2lf %c\n",(sum1/sum2)*100,'%');
        }
        else
        {
            printf("%0.2lf %c\n",(sum2/sum1)*100,'%');
        }


    }

    return 0;
}
