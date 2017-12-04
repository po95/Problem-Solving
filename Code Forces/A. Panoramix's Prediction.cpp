#include<bits/stdc++.h>
using namespace std;


int main()
{
    int a,b;

    scanf("%d%d",&a,&b);
    int trace=0;
    for(int i=a+1; i<=b; i++){
            int trace=0;
        for(int j=2; j<=ceil(sqrt(i)); j++)
        {
            if(i%j==0){
                trace=1;
                break;
            }
        }
        if(trace==0 && i==b) {
                printf("YES\n");
                break;
        }
        else if(trace==0 && i!=b) {
                printf("NO\n");
                break;
        }
    }
    if(trace==1){
        printf("")
    }




    return 0;
}
