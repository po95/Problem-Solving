//accepted
#include<bits/stdc++.h>
#define mem(x,y) memset(x,y,sizeof(x))
using namespace std;

int main()

{
    unsigned int t;

    int k=0;

    scanf("%u",&t);
    getchar();

    while(t--)
    {
        char str[110],str1[110];
        int trace[30],trace1[30];

       // getchar();
        gets(str);
        gets(str1);

        int l1,l2;

        l1=strlen(str);
        l2=strlen(str1);

        mem(trace,0);
        mem(trace1,0);

        int r=max(l1,l2);
        int x;
        for(int i=0; i<r; i++)
        {
            if(i<l1 && ((str[i]>='a'&& str[i]<='z') || (str[i]>='A'&& str[i]<='Z')))
            {
                if(str[i]>='a'&& str[i]<='z')
                {
                    x=str[i]-97;
                    trace[x]++;
                }
                else if(str[i]>='A'&& str[i]<='Z')
                {
                    x=str[i]-65;
                    trace[x]++;
                }
            }
            if(i<l2 && ((str1[i]>='a'&& str1[i]<='z') || (str1[i]>='A'&& str1[i]<='Z')))
            {
                if(str1[i]>='a'&& str1[i]<='z')
                {
                    x=str1[i]-97;
                    trace1[x]++;
                }
                else if(str1[i]>='A'&& str1[i]<='Z')
                {
                    x=str1[i]-65;
                    trace1[x]++;
                }
            }
        }
        /*for(int i=0; i<26; i++)
        {
            printf("%d: %d %d\n",i+1,trace[i],trace1[i]);
        }*/

        int c=0;


        for(int i=0; i<26; i++)
        {
            if(trace[i]!=trace1[i])
            {
                c=1;
                break;
            }
        }

        if(c==1) printf("Case %d: No\n",++k);
        else printf("Case %d: Yes\n",++k);
    }



    return 0;
}
