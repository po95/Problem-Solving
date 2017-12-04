#include<bits/stdc++.h>
#define mem(x,y) memset(x,y,sizeof(x))
using namespace std;


int main()
{
    int nb,l,x,tra[30],y[30];
    while(1==scanf("%d",&nb))
    {
        if(nb==0) break;
        char s[50];
        scanf("%s",s);
        l=strlen(s);

        mem(tra,-1);
        mem(y,-1);
        int locate=0,sum=0;

        for(int i=0; i<l; i++)
        {
            x=s[i]-65;

            if(tra[x]==-1)
            {
                tra[x]=0;
                if(locate<nb)
                {
                    y[x]=1;
                    locate++;
                }
                else if(locate==nb)
                {
                    y[x]=0;
                }
            }
            else if(tra[x]==0)
            {
                 if(y[x]==1)
                {

                    locate--;
                    y[x]=2;
                }
                else if(y[x]==0 && locate<nb)
                {
                    continue;
                }
                else if(y[x]==0&& locate==nb)
                {
                    sum++;
                }
            }
        }
        if(sum==0) printf("All customers tanned successfully.\n");
        else if(sum>0) printf("%d customer(s) walked away.\n",sum);

    }


    return 0;
}
