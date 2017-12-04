#include<bits/stdc++.h>
using namespace std;

int main()

{

    int ara[8],result;

    while(6==scanf("%d %d %d %d %d %d",&ara[1],&ara[2],&ara[3],&ara[4],&ara[5],&ara[6]))
    {
        result=(ara[1]+ara[2]+ara[3])*(ara[1]+ara[2]+ara[3]);
        result=result-(ara[1]*ara[1] + ara[3]*ara[3]+ ara[5]*ara[5]);

        printf("%d\n",result);
    }

    return 0;
}
