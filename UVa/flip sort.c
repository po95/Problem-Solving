#include<stdio.h>
int main()

{
    int i,j,k,l;
    int ara[1010];
    int t,n;
    while(1==scanf("%d",&n))
    {

    int c=0;
    for(i=0; i<n; i++)
    {
        scanf("%d",&ara[i]);
    }
    for(i=1; i<n; i++)
    {
        if(ara[i]<ara[i-1])
        {
            for(j=i; j>0; j--)
            {
                if(ara[j]>ara[j-1] || ara[j]==ara[j-1]){ break;}

                t=ara[j];
                ara[j]=ara[j-1];
                ara[j-1]=t;
                c++;
            }
        }
    }
    printf("Minimum exchange operations : %d\n",c);

    }
    return 0;
}

