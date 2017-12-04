#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    int r;
    int number[14]={4,7,44,47,74,77,444,447,474,477,744,747,774,777};
    while(1==scanf("%d",&n))
    {
        int c=0;
        for(int i=0; i<14; i++)
        {
            if(number[i]>n) break;

            if((n%number[i])==0)
            {
                c=1;
                break;
            }
        }

        if(c==1) printf("YES\n");
        else printf("NO\n");

    }


    return 0;
}

