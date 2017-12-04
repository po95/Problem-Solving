#include<bits/stdc++.h>
using namespace std;

int main()


{
    unsigned int t;
    scanf("%u",&t);
    int k=0;
    while(t--)
    {
        char s[20];
        string current="http://www.lightoj.com/";
        stack<string>f;
        stack<string>b;
        string x;
        printf("Case %d:\n",++k);
        while(scanf("%s",&s))
        {
            if(strcmp(s,"VISIT")==0)
            {
                cin>>x;
                while(!f.empty())
                {
                    f.pop();
                }
                b.push(current);
                current=x;
                printf("%s\n",current.c_str());
            }
            else if(strcmp(s,"FORWARD")==0)
            {
                if(!f.empty())
                {
                    b.push(current);
                    current=f.top();
                    f.pop();
                    printf("%s\n",current.c_str());
                }
                else printf("Ignored\n");
            }
            else if(strcmp(s,"BACK")==0)
            {
                if(!b.empty())
                {
                    f.push(current);
                    current=b.top();
                    b.pop();
                    printf("%s\n",current.c_str());
                }
                else printf("Ignored\n");
            }
            else if(strcmp(s,"QUIT")==0) break;
        }


    }

    return 0;
}
