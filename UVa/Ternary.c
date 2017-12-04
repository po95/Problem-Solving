#include<stdio.h>
int main()

{
    int i,j,k,n;

    int a;
    int r[50];
    int d;


    while(1==scanf("%d",&n))
    {
        for(i=0; i<n; i++)
        {
            scanf("%d",&a);
            if(a<0)break;
            else if(a>0)
            {

                    j=0;
                    while(a!=0)
                    {
                        d=a/3;
                        r[j]=a%3;
                        a=d;
                        j++;
                    }



            for(k=j-1; k>=0; k--)
            {
                printf("%d",r[k]);
            }
                }
            else if(a==0){printf("0\n");}
            printf("\n");
        }
    }


    return 0;
}
