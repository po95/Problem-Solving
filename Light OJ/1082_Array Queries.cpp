//segment tree buildup and query


#include<bits/stdc++.h>
#define M 100000
using namespace std;
int ara[M];
int tree[3*M];

void call(int node,int b,int e)
{
    if(b==e)
    {
        tree[node]=ara[b];
        return ;
    }

    int left,right,mid;
    left=2*node;
    right=2*node+1;
    mid=(b+e)/2;

    call(left,b,mid);
    call(right,mid+1,e);

    tree[node]=min(tree[left],tree[right]);


}

int query(int node,int b,int e,int i,int j)
{
    if(i>e || j<b) return 1000000000;

    if(b>=i && e<=j) return tree[node];

    int left,right,mid;

    left=2*node;
    right=2*node+1;

    mid=(b+e)/2;

    int p1=query(left,b,mid,i,j);
    int p2=query(right,mid+1,e,i,j);

    return min(p1,p2);
}





int main()

{

    int n;

    unsigned int t;
    scanf("%u",&t);
    int k=0;
    while(t--)
    {
        int n,q;
        //printf("\n");
        printf("Case %d:\n",++k);
        scanf("%d%d",&n,&q);

        for(int i=1; i<=n; i++)
        {
            scanf("%d",&ara[i]);
        }

        call(1,1,n);
        int r;


        for(int i=1; i<=q; i++)
        {
            int a,b;
            scanf("%d%d",&a,&b);

            r=query(1,1,n,a,b);

            printf("%d\n",r);

        }
    }

    return 0;
}

