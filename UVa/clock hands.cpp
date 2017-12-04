#include<bits/stdc++.h>
using namespace std;

int main()

{
    int hr,mi;
    char ch;

    while(3==scanf("%d%c%d",&hr,&ch,&mi))
    {
        if(hr==0 && mi==0) break;
        double result;

        result=(hr*30.0)+(mi*0.5)-(mi*6);
        if(result<0) result=360.0-fabs(result);

        double result1=360.0-result;

        if(result<=result1) printf("%0.3lf\n",result);
        else if(result>result1) printf("%0.3lf\n",result1);


    }

    return 0;
}
