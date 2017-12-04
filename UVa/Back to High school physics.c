#include<stdio.h>
int main()

{
    int v,t;
    double s,a,t2;

    while(2==scanf("%d %d",&v,&t))
    {
        double v1,t1;
        v1=v;
        t1=t;
        int s1;

        if(t>0){
            a=(v1/t1);
            s=(a*(2*t1)*(2*t1))/2;
            s1=s;
        }
        else if(t==0)s1=0;

        printf("%d\n",s1);

    }
    return 0;
}
