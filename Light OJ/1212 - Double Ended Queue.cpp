#include<bits/stdc++.h>
using namespace std;

int main()

{
    unsigned int t;
    scanf("%u",&t);

    int k=0;
    while(t--)
    {
        printf("Case %d:\n",++k);
        deque<int>q;
        char s[20];
        int v=0,x,m,n;
        scanf("%d%d",&m,&n);
        for(int i=0; i<n; i++)
        {
            scanf("%s",&s);

            if(strcmp(s,"pushLeft")==0)
            {
                scanf("%d",&x);
                if(v<m)
                {
                    q.push_front(x);
                    v++;
                    printf("Pushed in left: %d\n",x);
                }
                else printf("The queue is full\n");
            }
            else if(strcmp(s,"pushRight")==0)
            {
                scanf("%d",&x);
                if(v<m)
                {
                    q.push_back(x);
                    v++;
                    printf("Pushed in right: %d\n",x);
                }
                else printf("The queue is full\n");
            }
            else if(strcmp(s,"popLeft")==0)
            {
                if(v>0)
                {
                    x=q.front();
                    q.pop_front();
                    v--;
                    printf("Popped from left: %d\n",x);
                }
                else printf("The queue is empty\n");
            }
            else if(strcmp(s,"popRight")==0)
            {
                if(v>0)
                {
                    x=q.back();
                    q.pop_back();
                    v--;
                    printf("Popped from right: %d\n",x);
                }
                else printf("The queue is empty\n");
            }

        }

    }


    return 0;
}
