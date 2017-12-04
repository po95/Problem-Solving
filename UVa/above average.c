
#include<stdio.h>
#include<math.h>

int main()

{
    int i,j,k,l,n,t;
    double a;
    int num[1010];

    while(1==scanf("%d",&n))
    {

        for(i=0; i<n; i++)
        {
            int c=0;
            int sum=0;
            scanf("%d",&t);
            for(j=0; j<t; j++)
            {
                scanf("%d",&num[j]);
                sum+=num[j];
            }
            a=(double)sum/(double)j;
            for(k=0; k<j; k++)
            {
                if(num[k]>a) c++;
            }
            printf("%0.3lf%c\n",((double)c/(double)j)*100,'%');
        }
    }
    return 0;
}
