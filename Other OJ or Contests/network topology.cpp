#include<bits/stdc++.h>
using namespace std;

vector<int>v[100010];

void init(int n)
{
    for(int i=1; i<=n; i++)
    {
        v[i].clear();
    }
}


int main()

{
    int node,edge;


    scanf("%d%d",&node,&edge);



        for(int i=1; i<=edge; i++)
        {
            int x,y;

            scanf("%d%d",&x,&y);

            v[x].push_back(y);
            v[y].push_back(x);
        }

        int ones=0,twos=0,others=0;

        if(node==edge)
        {
            for(int i=1; i<=node; i++)
            {
                if(v[i].size()==2)
                {
                    twos++;
                }
            }
            if(twos==node) printf("ring topology\n");

            else printf("unknown topology\n");
        }
        else if((node-1)==edge)
        {
            for(int i=1; i<=node; i++)
            {
                if(v[i].size()==1) ones++;

                else if(v[i].size()==2) twos++;

                else others++;

            }

            if((node-1)==ones) printf("star topology\n");

            else if(2==ones && twos==(node-2)) printf("bus topology\n");

            else printf("unknown topology\n");
        }

        else printf("unknown topology\n");

        //init(node);






    return 0;
}
