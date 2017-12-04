#include<stdio.h>
#include<math.h>


int main()

{
    int l,w,h,t;
    double r,d,v;
    double pi=acos(-1);

    while(4==scanf("%d %d %d %d",&l,&w,&h,&t)){
        d=l*tan(t*pi/180);

        if(d>h){
            v=(h*h*w*0.5)/tan(t*pi/180);
        }
        else {
            r=(d*l*w)/2;
            v=(h*l*w)-r;
        }
        printf("%0.3lf mL\n",v);
    }

    return 0;
}
