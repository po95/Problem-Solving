#include<bits/stdc++.h>
using namespace std;

int main()

{
    int n;
    while(1==scanf("%d",&n))
    {
        int k=0;
        while(n--)
        {
            int me,lift;
            scanf("%d%d",&me,&lift);
            if(me<=lift) printf("Case %d: %d\n",++k,(lift*4)+19);
            else
            {
                int r;
                r=me-lift+me;
                printf("Case %d: %d\n",++k,(r*4)+19);
            }
        }
    }
    return 0;
}
