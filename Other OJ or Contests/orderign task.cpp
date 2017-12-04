#include<bits/stdc++.h>
using namespace std;

vector<int>v[110];



int main()

{
    freopen("s.txt","r",stdin);

    int m,n,i,j;


    while(2==scanf("%d%d",&m,&n))
    {
        if(m==0 && n==0) break;
        int counting[110];

        vector<int>queued;
        queue<int>q;

        memset(counting,0,sizeof(counting));

        for(i=1; i<=n; i++)
        {
            int x,y;

            scanf("%d%d",&x,&y);

            counting[y]+=1;

            v[x].push_back(y);
        }

        int c=0;

        while(c<m)
        {

            for(i=1; i<=m; i++)
            {
                if(counting[i]==0)
                {
                    q.push(i);
                    queued.push_back(i);

                    counting[i]=-1;

                    c++;
                    printf("%d",i);
                    if(c<m) printf("%c",32);

                }
            }
            int u;
            while(!q.empty())
            {
                u=q.front();
                q.pop();
                for(j=0; j<v[u].size(); j++)
                {
                    counting[v[u][j]]-=1;
                }
            }


        }
        /*for(i=0; i<m; i++)
        {
            printf("%d",queued[i]);
            if(i<m-1) printf("%c",32);
        }*/
        printf("\n");
    }


    return 0;
}
