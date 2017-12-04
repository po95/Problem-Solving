#include<bits/stdc++.h>
using namespace std;

int main()
{
    int p,h,o;

    while(3==scanf("%d%d%d",&p,&h,&o))
    {
        if(o-p < h) printf("Hunters win!\n");
        else printf("Props win!\n");
    }


    return 0;
}
