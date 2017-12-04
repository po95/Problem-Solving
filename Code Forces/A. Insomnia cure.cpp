#include<bits/stdc++.h>
using namespace std;
bool marked[10000];

int main()

{
    bool marked[10000];


    int ara[5];
    int d;
    scanf("%d%d%d%d%d",&ara[0],&ara[1],&ara[2],&ara[3],&d);

        int c=0;
        //memset(marked,false,sizeof(marked));
        for(int i=0; i<4; i++)
        {
            for(int j=ara[i]; j<=d; j+=ara[i])
            {
                if(marked[j]==false)
                {
                    marked[j]=true;
                    c++;
                }
            }
        }
        printf("%d\n",c);



    return 0;
}
