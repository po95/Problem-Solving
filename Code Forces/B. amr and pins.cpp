#include<bits/stdc++.h>
using namespace std;
int main()
{
    double x1,y1,x2,y2,r,p,q;
    while(scanf("%lf %lf %lf %lf %lf",&r,&x1,&y1,&x2,&y2)==5)
    {
        p=pow((x1-x2),2)+pow((y1-y2),2);
        q=sqrt(p);
        int s=ceil(q/(2*r));
        printf("%d\n",s);
    }
    return 0;
}
