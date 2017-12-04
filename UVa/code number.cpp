#include<bits/stdc++.h>
using namespace std;

int main()

{
    int n;
    char s[100];
    int l,i,j,k;

    while(1==scanf("%d",&n))
    {
        getchar();
        for(int i=1; i<=n; i++)
        {
            while(gets(s)!='\0')
            {

            l=strlen(s);
            if(l==0) break;
            for(j=0; j<l; j++)
            {
                        if(s[j]=='0') s[j]='O';
                        else if(s[j]=='1') s[j]='I';
                        else if(s[j]=='2') s[j]='Z';
                        else if(s[j]=='3') s[j]='E';
                        else if(s[j]=='4') s[j]='A';
                        else if(s[j]=='5') s[j]='S';
                        else if(s[j]=='6') s[j]='G';
                        else if(s[j]=='7') s[j]='T';
                        else if(s[j]=='8') s[j]='B';
                        else if(s[j]=='9') s[j]='P';
            }
            s[l]='\0';
            printf("%s\n",s);

            }


            if(i==n) continue;
            else printf("\n");

        }
    }


    return 0;
}
