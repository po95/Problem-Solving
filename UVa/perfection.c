#include<stdio.h>
#include<math.h>

int main()

{
    int i,j,root;
    char s1[]="PERFECT",s2[]="DEFICIENT",s3[]="ABUNDANT";
    int d[30000],n,s,c,k=0;
    int num[110];
    int sum[110];

    while(1==scanf("%d",&n))
    {
        if(n==0)break;

        else if(n>0)
        {
            d[0]=1;
            j=1;
            s=1;
            root=sqrt(n);

            for(i=2; i<=root; i++)
            {
                if((n%i)==0)
                {
                    d[j]=i;
                    d[j+1]=(n/i);
                    s=s+d[i]+d[i+1];
                    j=j+2;
                }
            }
            sum[k]=s;

        }
        num[k]=n;
        k++;
    }
    printf("PERFECTION OUTPUT\n");
    for(i=0; i<k; i++)
    {
        if(num[i]<sum[i])
        {
            printf("%5d  %s\n",num[i],s3);
        }
        else if(num[i]>sum[i])
        {
            printf("%5d  %s\n",num[i],s2);
        }
        else if(num[i]==sum[i])
        {
            printf("%5d  %s\n",num[i],s1);
        }
    }
    printf("END OF OUTPUT\n");


    return 0;
}
