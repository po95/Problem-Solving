//accepted
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    scanf("%d",&n);


    getchar();

    while(n--)
    {
        char s[100];

        gets(s);

        int l=strlen(s);

        int sum=0;

        for(int i=0; i<l; i++)
        {
            if(s[i]=='O')
            {
                int j=0;
                int ch=i;
                while(s[ch]=='O'&& ch>=0)
                {
                    //sum+=j;
                    j++;
                    ch--;
                }
                sum+=j;
                //printf("%d\n",sum);
            }
        }

        printf("%d\n",sum);

    }


    return 0;
}
