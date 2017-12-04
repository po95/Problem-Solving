#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    while(2==scanf("%d%d",&a,&b))
    {
        if(a<0 && b<0) break;

        unsigned int n1;
        int n2;
        if(b>a)
        {
            swap(a,b);

        }
        n1=a-b;

        n2=(100+b)-a;

        if(n1>=n2) printf("%d\n",n2);
        else printf("%u\n",n1);



    }

    return 0;
}

