#include<bits/stdc++.h>
using namespace std;

int main()

{
    unsigned int n;
    while(1==scanf("%u",&n))
    {
        int k=0;
        while(n--)
        {
            int m;
            int d[10000],pre[10000];
            map<string,int>mapp;
            int assign=0,c=1,j,l,i;
            scanf("%d",&m);
            char s1[12],s2[12];

            for(i=0; i<m; i++)
            {
                scanf("%s%s",&s1,&s2);
                if(mapp.find(s1)==mapp.end())
                {
                    mapp[s1]=assign++;
                }
                if(mapp.find(s2)==mapp.end())
                {
                    mapp[s2]=assign++;

                }
                pre[i]=mapp[s1];
                d[i]=mapp[s2];

            }
            for(int i=0; i<m; i++)
            {
                for(int j=0; j<m; j++)
                {
                    if(d[i]==pre[j])
                    {
                        if(d[j]==pre[i] || d[j]==d[i])
                        {
                            c=0;
                            break;
                        }
                    }
                }
            }
            if(c==0) printf("Case %d: No\n",++k);
            else printf("Case %d: Yes\n",++k);

        }
    }


    return 0;
}
