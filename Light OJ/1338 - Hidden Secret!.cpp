#include<bits/stdc++.h>
using namespace std;

int main()

{
    unsigned int t;
    scanf("%u",&t);
    int k=0;
    while(t--)
    {
        getchar();
        int trace1[30],trace2[30];
        memset(trace1,0,sizeof(trace1));
        memset(trace2,0,sizeof(trace2));
        char name1[150],name2[150];
        gets(name1);
        gets(name2);
        int len1,len2;
        len1=strlen(name1);
        len2=strlen(name2);

        int l=max(len1,len2);
        int x,c1=0,c2=0;
        for(int i=0; i<l; i++)
        {
            if(name1[i]>='a'&&name1[i]<='z')
            {
                x=name1[i]-'a';
                trace1[x]++;
                c1++;
            }
            else if(name1[i]>='A'&&name1[i]<='Z')
            {
                x=name1[i]-'A';
                trace1[x]++;
                c1++;
            }
            if(name2[i]>='a'&&name2[i]<='z')
            {
                x=name2[i]-'a';
                trace2[x]++;
                c2++;
            }
            else if(name2[i]>='A'&&name2[i]<='Z')
            {
                x=name2[i]-'A';
                trace2[x]++;
                c2++;
            }
        }
        int c=1;
        for(int i=0; i<26; i++)
        {
            if(trace1[i]!=trace2[i])
            {
                c=0;
                break;
            }
        }
        if(c==1 && c1==c2) printf("Case %d: Yes\n",++k);
        else if(c==0) printf("Case %d: No\n",++k);
    }


    return 0;
}
