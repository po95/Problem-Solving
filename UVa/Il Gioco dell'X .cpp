//TLE

#include<bits/stdc++.h>
using namespace std;

char s[210][210];

int n,trace_b,trace_w,p,q,count;

void for_black(int r,int c)
{
    if((r>0&&r<=n) && (c>=0 && c<n))
    {
        if(s[r][c]=='b')
        {
            s[r][c]='w';
            if(r==n)
            {
                p=1;
                return;
            }

            for_black(r-1,c-1);
            for_black(r-1,c);
            for_black(r,c-1);
            for_black(r,c+1);
            for_black(r+1,c);
            for_black(r+1,c+1);

            s[r][c]='b';
        }
        else return;


    }
    else return;


}

void for_white(int r,int c)
{
    if((r>0&&r<=n) && (c>=0 && c<n))
    {
        if(s[r][c]=='w')
        {
            s[r][c]='b';
            if(c==n-1)
            {
                q=1;
                return;
            }

            for_white(r-1,c-1);
            for_white(r-1,c);
            for_white(r,c-1);
            for_white(r,c+1);
            for_white(r+1,c);
            for_white(r+1,c+1);

            s[r][c]='w';
        }

        else return;


    }
    else return;

}

int main()

{
    int t;

    int k=0;

    while(1==scanf("%d",&n))
    {
        if(n==0) break;
        getchar();

        p=0,q=0;

        for(int i=1; i<=n; i++)
        {
            scanf("%s",s[i]);
        }

        for(int j=0; j<n; j++)
        {
            for_black(1,j);
            s[1][j]='w';
            if(p==1) break;
        }

        for(int i=1; i<=n; i++)
        {
            for_white(i,0);
            s[i][0]='b';
            if(q==1) break;
        }

        if(p==1) printf("%d B\n",++k);
        else if(q==1) printf("%d W\n",++k);

    }


    return 0;
}
