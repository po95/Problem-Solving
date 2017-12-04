#include<bits/stdc++.h>
using namespace std;

int main()

{
    char s[55];

    unsigned int t;
    scanf("%u",&t);

    while(t--)
    {
        scanf("%s",s);

        int l=strlen(s);
        printf("%d\n",l);
        char ch_max,ch_min;
        int trace=0,p_max,p_min;
        int x;

        for(int i=0; i<l; i++)
        {
            x=s[i];
            if(x>s[i+1])
            {
                if(trace==0)
                {
                    ch_max=s[i];
                    p_max=i;

                    ch_min=s[i+1];
                    p_min=i+1;
                    trace=1;

                }
                if(s[i]>ch_max && trace==1)
                {
                    ch_max=s[i];
                    p_max=i;
                }
                if(s[i+1]<ch_min &&trace==1)
                {
                    ch_min=s[i+1];
                    p_min=i+1;
                }
            }
        }
        printf("asche TRACE%d\n",trace);
        if(trace==0) printf("%s\n",s);
        else
        {
            printf("er vitor dhukse :0");
            char temp1[55],temp2[55];
            int j;
            int c=0;
            for(int i=0,j=0; i<l; i++)
            {
                if(p_min==i) continue;
                else if(ch_min<s[i] && c==0)
                {
                    temp1[j++]=ch_min;
                    temp1[j++]=s[i];
                    c=1;
                }
                else if(c==1)
                {
                    temp1[j++]=s[i];
                }
            }
            temp1[j]='\0';
            c=0;
            for(int i=0,j=0; i<l; i++)
            {
                if(p_max==i) continue;
               if(s[i]<ch_max && c==0)
               {
                while(s[i]<ch_max&&s[i]!='\0')
                {
                    temp2[j++]=s[i];
                    i++;
                }
                temp2[j++]=ch_max;
                c=1;
               }
               else temp2[j++]=s[i];
            }
            temp2[j]='\0';

            if(strcmp(temp1,temp2)<0) printf("%s\n",temp1);
        else if(strcmp(temp2,temp1)<0) printf("%s\n",temp2);
        }


    }


    return 0;
}
