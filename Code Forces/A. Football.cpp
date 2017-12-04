#include<bits/stdc++.h>
using namespace std;

int main()

{
    char s[110];



    while(1==scanf("%s",s))
    {
        int l=strlen(s);

        int c,y=0;
        for(int i=0; i<l; i++)
        {
            if(s[i]=='0')
            {
                c=1;
                while(s[i+1]=='0')
                {
                    c++;
                    i++;
                    if(c==7)
                    {
                        y=1;
                        break;
                    }


                }
            }
            else if(s[i]=='1')
            {
                c=1;
                while(s[i+1]=='1')
                {
                    c++;
                    i++;
                    if(c==7)
                    {
                        y=1;
                        break;
                    }

                }
            }
        }
        if(y==1)printf("YES\n");
        else printf("NO\n");
    }



    return 0;
}
