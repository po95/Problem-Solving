#include<bits/stdc++.h>
using namespace std;

int main()

{
    int n;

    while(1==scanf("%d",&n))
    {

        char coun[75],other[75];
        char result[2000][75];
        int res[2000];
        memset(res,0,sizeof(res));
        map<string,int>mapp;
        int assign=0;
        for(int i=0; i<n; i++)
        {
            scanf("%s%[^\n]",coun,other);
            if(mapp.find(coun)==mapp.end())
            {
                mapp[coun]=assign++;
                strcpy(result[mapp[coun]],coun);
            }
            res[mapp[coun]]++;

        }
        char temp[75];
        for(int i=1; i<assign; i++)
        {
            for(int j=i; j>0; j--)
            {
                if(strcmp(result[j-1],result[j])>0)
                {
                    strcpy(temp,result[j-1]);
                    strcpy(result[j-1],result[j]);
                    strcpy(result[j],temp);
                    swap(res[j-1],res[j]);
                }
                else break;
            }
        }
        for(int i=0; i<assign; i++)
        {
            printf("%s %d\n",result[i],res[i]);
        }
    }


    return 0;
}
