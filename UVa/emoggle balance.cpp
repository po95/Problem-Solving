#include<stdio.h>
using namespace std;

int main()

{
    int n,j=1;
    while(1==scanf("%d",&n))
    {
        if(n==0) break;
        int c=0,x;

        for(int i=0; i<n; i++)
        {
            scanf("%d",&x);
            if(x!=0) c++;
            else if(x==0) c--;
        }
        printf("Case %d: %d\n",j,c);
        j++;
    }


    return 0;
}
