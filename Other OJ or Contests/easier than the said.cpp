#include<bits/stdc++.h>
#include<cctype>
using namespace std;
int vowel(char a)
{
    if(a>=97&&a<=122)
    {
    if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u') return 1;
    else return 0;
    }
}

int main()

{
    int i,l;
    char s[30];

    while(1==scanf("%s",s))
    {
        if(strcmp("end",s)==0) break;
       l=strlen(s);

       int y=0;
        for(i=0; i<l; i++)
        {
                if(vowel(s[i])==1)
                {
                    y=1;
                    if(vowel(s[i])==1&&s[i+1]!='\0'&&vowel(s[i+1])==1&&s[i+2]!='\0'&&vowel(s[i+2])==1)
                    {
                        y=0;
                        break;
                    }

                }

                if(vowel(s[i])==0&&s[i+1]!='\0'&&vowel(s[i+1])==0&&s[i+2]!='\0'&&vowel(s[i+2])==0)
                {
                    y=0;
                    break;
                }

                if( s[i+1]!='\0' && s[i]==s[i+1] )
                {
                    if(s[i]=='e'&&s[i+1]=='e' || s[i]=='o'&&s[i+1]=='o')
                    {
                    y=1;
                    }
                    else
                    {
                        y=0;
                        break;
                    }
                }
        }
        if(y==1) printf("<%s> is acceptable.\n",s);
        else if(y==0) printf("<%s> is not acceptable.\n",s);
    }


    return 0;
}
