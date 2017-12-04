#include<bits/stdc++.h>
using namespace std;

int main()

{
    int n;
    while(1==scanf("%d",&n))
    {
        int i=1;
        int ab,tie,win,ban;
        while(i<=n)
        {
            ab=0;
            tie=0;
            win=0;
            ban=0;
            int match;
            scanf("%d",&match);
            int j=1;
            char ch;
            getchar();
            while(j<=match)
            {
                ch=getchar();
                if(ch=='W') win++;
                else if(ch=='B') ban++;
                else if(ch=='A') ab++;
                else if(ch='T') tie++;
                j++;
            }
            if(ab==match) printf("Case %d: ABANDONED\n",i);
            else if(ban==win) printf("Case %d: DRAW %d %d\n",i,ban,win);
            else if((ban+ab)==match) printf("Case %d: BANGLAWASH\n",i);
            else if((win+ab)==match) printf("Case %d: WHITEWASH\n",i);
            else if(ban>win) printf("Case %d: BANGLADESH %d - %d\n",i,ban,win);
            else if(win>ban) printf("Case %d: WWW %d - %d\n",i,win,ban);

            i++;
        }

    }

    return 0;
}
