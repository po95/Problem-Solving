#include<stdio.h>
int main()

{
    int i,j,k;
    int n;
    int r[20];
    int n1,n2;
    int a,b;

    while(1==scanf("%d",&n))
    {
        for(i=0; i<n; i++)
        {
            scanf("%d %d",&a,&b);
            if(a>b)
            {
                if((a-b)%2!=0)
                {
                    printf("Impossible\n");

                }
                else if((a-b)%2==0)
                {
                    n1=(a+b)/2;
                    //n3=a-b/2;
                    n2=a-n1;
                    printf("%d %d\n",n1,n2);

                }
            }
            else printf("Impossible\n");
        }
    }
    return 0;
}
