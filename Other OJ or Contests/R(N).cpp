#include<bits/stdc++.h>
using namespace std;

int main()

{
    int n;

    while(1==scanf("%d",&n))
    {
        int c=0;
        double r=sqrt(n);
        int x;
        map<int,int>mymap;
        int assign=1,m;

        if(n==0) c=1;

        if(r==ceil(r))
        {
            c+=4;
        }

        for(int i=1; i*i<n; i++)
        {
            if(mymap[i]!=0) continue;
            x=i*i;
            r=sqrt(n-x);
            if(r==ceil(r) && i!=(int)r)
            {
                c+=8;
                m=(int)r;
                mymap[m]=assign++;
            }
            else if(r==ceil(r)&& i==(int)r)
            {
                c+=4;

            }
        }
        printf("%d\n",c);
    }





    return 0;
}
