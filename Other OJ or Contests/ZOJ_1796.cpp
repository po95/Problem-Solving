#include<bits/stdc++.h>
using namespace std;

int main()
{
    int w1,l1,w2,l2,w3,l3;
    int w,l;

    while(6==scanf("%d%d%d%d%d%d",&w1,&l1,&w2,&l2,&w3,&l3))
    {
        if(w1==0&&l1==0&&w2==0&&l2==0&&w3==0&&l3==0) break;

        w=(w1-(l2+l3));
        if(w<0) w=(-1)*w;
        l=(l1-(w2+w3));
        if(l<0) l=(-1)*l;
        printf("Anna's won-loss record is %d-%d.\n",w,l);
    }

    return 0;
}
