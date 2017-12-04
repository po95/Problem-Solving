#include<bits/stdc++.h>
using namespace std;

int main()

{

    unsigned int t;
    char s[5];

    while(1==scanf("%u",&t))
    {
        int c=0;
        while(t--)
        {

            scanf("%s",s);
            if(strcmp(s,"X++")==0 || strcmp(s,"++X")==0) c++;
            else if(strcmp(s,"X--")==0 || strcmp(s,"--X")==0) c--;
        }
        printf("%d\n",c);
    }

    return 0;
}

