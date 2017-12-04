#include<stdio.h>
int main()

{
    int a,b;
    while(2==scanf("%d %d",&a,&b)){
            if(a==1 && b==1) printf("0\n");
            else printf("%d\n",(a*b)-1);
    }


    return 0;
}
