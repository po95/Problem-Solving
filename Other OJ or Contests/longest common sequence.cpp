#include<bits/stdc++.h>
using namespace std;

int trace[1005][1005];
char plate[1005][1005];
char s1[1010],s2[1010];

void call(int l1,int l2)
{

    if(l1==0 || l2==0)
    {
        return;
    }

    if(plate[l1][l2]=='d')
    {
        call(l1-1,l2-1);
        printf("%c %d %d\n",s1[l1-1],l1,l2);
    }

    if(plate[l1][l2]=='u')
    {
        call(l1-1,l2);
    }
    if(plate[l1][l2]=='l')
    {
        call(l1,l2-1);
    }
}


int main()


{
    int t;

    int p,q;

    scanf("%d",&t);
    int k=0;

    while(t--)
    {
        scanf("%d",&p);
        getchar();
        scanf("%s",s1);

        scanf("%d",&q);
        getchar();
        scanf("%s",s2);




        memset(trace,0,sizeof(trace));
        int l1,l2;

        l1=strlen(s1);
        l2=strlen(s2);

        int c=0;


        for(int i=0; i<l1; i++)
        {
            for(int j=0; j<l2; j++)
            {
                if(s1[i]==s2[j])
                {
                    trace[i+1][j+1]=trace[i][j]+1;
                    plate[i+1][j+1]='d';
                }
                else
                {
                    if(trace[i][j+1]>=trace[i+1][j])
                    {
                        plate[i+1][j+1]='u';
                        trace[i+1][j+1]=trace[i][j+1];
                    }
                    else
                    {
                        plate[i+1][j+1]='l';
                        trace[i+1][j+1]=trace[i+1][j];
                    }
                }
            }
        }

        if(trace[l1][l2]<=1) printf("case %d N\n",++k);
        else
        {
            printf("case %d Y\n",++k);
            printf("%d\n",trace[l1][l2]);
            call(l1,l2);
        }


    }

    return 0;
}
