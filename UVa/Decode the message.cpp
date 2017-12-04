#include<bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("decoding","r",stdin);
    int t;

    char s[1000];


    scanf("%d",&t);

    getchar();
    getchar();

    for(int i=1; i<=t; i++)
    {
       // if(i==1) getchar();

        printf("Case #%d:\n",i);

        while(gets(s))
        {
            int l=strlen(s);
            if(l==0) break;

            int trace=1;

            for(int j=0; j<l; j++)
            {
                if((s[j]>='a'&&s[j]<='z')||(s[j]>='A'&&s[j]<='Z'))
                {
                    int c=1,m=0;
                    while(((s[j]>='a'&&s[j]<='z') || (s[j]>='A'&&s[j]<='Z'))&& j<l && m==0)
                    {
                        if(c==trace)
                        {
                            trace++;
                            printf("%c",s[j++]);
                            while(s[j]!=32 && j<l)
                            {
                                m=1;
                                j++;
                                if(j>=l) break;
                            }
                        }
                        else
                        {
                            c++;
                            j++;
                            if(j>=l) break;
                        }
                    }
                }
            }
           /* char *str;

            str=strtok(s," ");

            while(str!=NULL)
            {
                string s1=str;

                if(trace<=s1.size())
                {
                    printf("%c",s1[trace-1]);
                    trace++;
                }

                str=strtok(NULL," ");

            }*/
            printf("\n");
        }

        if(i!=t) printf("\n");
    }

   return 0;
}

