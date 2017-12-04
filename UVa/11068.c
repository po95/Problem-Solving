#include<stdio.h>
int main()

{
    double x,y,r1,r2;
    int a1,b2,c1,a2,b1,c2;

    while(6==scanf("%d %d %d %d %d %d",&a1,&b1,&c1,&a2,&b2,&c2)){
        if(a1==0 && b1==0 && c1==0 && a2==0 && b2==0 && c2==0) break;

        else if((a1*b2 - a2*b1)!=0) {
        r1=( b1*c2 - c1*b2);
        r2=( a1*b2 - a2*b1);
        x=-1*(r1/r2);
        r1=( a2*c1 - a1*c2);
        y=-1*(r1/r2);


        printf("The fixed point is at %0.2lf %0.2lf.\n",x,y);


        }
        else printf("No fixed point exists.\n");

    }

    return 0;
}
