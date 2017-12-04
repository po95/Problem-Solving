#include<bits/stdc++.h>
using namespace std;


int trace[3050][3050];
//char s1[3010],s2[3010];


int main()

{
    unsigned int t;

    scanf("%u",&t);

    while(t--)
    {

        int f;
        //scanf("%d",&f);

        int i,j=0;


       char  s1[]="aaabb";
       char  s2[]="bbb";
       int l1=strlen(s1);
       int l2=strlen(s2);

       printf("%d %d",l1,l2);
        /*for(int i=1; i<=f; i++)
        {
            char ch;
            int x;
            scanf("%c%d", &ch, &x);

            for(int m=1; m<=x; m++)
            {
                s1[j++]=ch;
            }
        }
        getchar();
        int l1,l2;
        l1=j;
        s1[j]='\0';
       // getchar();

        scanf("%d",&f);
        j=0;

        for(int i=1; i<=f; i++)
        {
            char ch;
            int x;
            scanf("%c%d",&ch,&x);

            for(int m=1; m<=x; m++)
            {
                s2[j++]=ch;
            }
        }
        l2=j;
        s2[j]='\0';
        getchar();*/

        memset(trace,0,sizeof(trace));
        //printf("hoise\n");


       // printf("%s\n",s1);
        //printf("%s\n",s2);

        //int i,j;


       for(i=1; i<=l2; i++)
        {
            for(j=1; j<=l1; j++)
            {
                if(s1[i-1]==s2[j-1])
                {
                    trace[i][j]=trace[i-1][j-1]+1;
                }
                else
                {
                    if(trace[i][j-1]>=trace[i-1][j])
                    {
                        trace[i][j]=trace[i][j-1];
                    }
                    else trace[i][j]=trace[i-1][j];
                }
            }
        }

       // printf("hoise \n");
        int lcs=trace[i][j];

        int result=(l1-lcs)*2;
        result+=(l2-lcs);


        printf("%d\n",result);
        getchar();


    }



    return 0;
}
