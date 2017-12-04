#include<bits/stdc++.h>
using namespace std;

int main()
{
    char ch[1000];
    int n;

    while(1==scanf("%s",ch))
    {
            if(ch[0]>='A' && ch[0]<='Z') printf("%s\n",ch);
                else
            {
                ch[0]=ch[0]-32;
                printf("%s\n",ch);
            }

    }


    return 0;
}

