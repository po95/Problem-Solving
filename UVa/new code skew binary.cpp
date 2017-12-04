#include<bits/stdc++.h>
using namespace std;

int main()

{
    int i,j,k,l;
    char s[110];

    int n;

    while(1==scanf("%d",&n))
    {
        k=0;
        while(k<n)
        {
            int t;

            scanf("%d",&t);
            scanf("%s",s);

            int sum=0;

            for(i=0; i<t; i++)
            {
                if(s[i]=='.')
                {
                    sum+=1;
                    i+=2;
                    //if(s[i+1]=='.' || s[i+2]=='.')

                }
            }
            printf("Case %d : %d\n",k+1,sum);

            k++;
        }
    }

}
