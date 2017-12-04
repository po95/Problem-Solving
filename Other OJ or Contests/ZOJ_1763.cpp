#include<bits/stdc++.h>
using namespace std;

int main()

{
    double a,b;

    int i=0;
    while(1==scanf("%lf",&a)&&i==0)
    {
        if(a==999)
        {
            printf("End of Output\n");
            break;
        }
        i++;
        while(i>0)
        {
            scanf("%lf",&b);
            if(b==999)
            {
                printf("End of Output\n");
                break;
            }
            printf("%0.2lf\n",b-a);
            a=b;
        }
    }


    return 0;
}
