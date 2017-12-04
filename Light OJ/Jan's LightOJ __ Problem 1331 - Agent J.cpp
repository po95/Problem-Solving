#include<bits/stdc++.h>
#define pi acos(-1.0)
using namespace std;

int main()

{
    int t;

    scanf("%d",&t);

    int k=0;

    while(t--)
    {
        double r1,r2,r3,aret,s1,s2,s3,a1,a2,a3,result;

        scanf("%lf%lf%lf",&r1,&r2,&r3);

        aret=sqrt((r1+r2+r3)*r1*r2*r3);


        double A,B,C;

        A=((r1+r2)*(r1+r2)+(r1+r3)*(r1+r3)-(r2+r3)*(r2+r3))/(2*(r1+r2)*(r1+r3));

        a1=(acos(A)/2.0)*r1*r1;

        B=((r1+r2)*(r1+r2)+(r2+r3)*(r2+r3)-(r1+r3)*(r1+r3))/(2*(r1+r2)*(r2+r3));

        a2=(acos(B)/2.0)*r2*r2;

        C=((r1+r3)*(r1+r3)+(r2+r3)*(r2+r3)-(r2+r1)*(r2+r1))/(2*(r3+r2)*(r1+r3));

        a3=(acos(C)/2.0)*r3*r3;

        result=aret-(a1+a2+a3);


        printf("Case %d: %0.10lf\n",++k,result);




    }


    return 0;
}
