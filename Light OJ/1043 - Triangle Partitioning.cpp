#include<bits/stdc++.h>
#define pi acos(-1.0)
using namespace std;

int main()
{
    double ab,ac,bc,r;

    int t;

    scanf("%d",&t);

    int k=0;

    while(t--)
    {
        scanf("%lf%lf%lf%lf",&ab,&ac,&bc,&r);
        double a_trap,a_tri,s;

        s=(ab+bc+ac)/2.0;

        a_tri=sqrt(s*(s-ab)*(s-ac)*(s-bc));

        a_tri=(a_tri*r)/(1.0+r);

        double A,B,C;

        A=acos(((ab*ab)+(ac*ac)-(bc*bc))/(2.0*ab*ac));
        B=acos(((ab*ab)+(bc*bc)-(ac*ac))/(2.0*ab*bc));
        C=acos(((bc*bc)+(ac*ac)-(ab*ab))/(2.0*bc*ac));

        //printf("%lf %lf %lf\n",A,B,C);

        double c;

        c=sqrt((2.0*a_tri*sin(C))/(sin(A)*sin(B)));

        printf("Case %d: %0.10lf\n",++k,c);











    }


    return 0;
}
