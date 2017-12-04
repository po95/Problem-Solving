#include<bits/stdc++.h>
using namespace std;

int main()

{
    int t;

    scanf("%d",&t);

    int k=0;

    while(t--)
    {
        int date1,date2,y1,y2;

        char s1[20],s2[20],c11,c12,c13,c21,c22,c23;

        getchar();

        scanf("%s%c%d%c%c%d",s1,&c11,&date1,&c12,&c13,&y1);

        getchar();

        scanf("%s%c%d%c%c%d",s2,&c21,&date2,&c22,&c23,&y2);

        int c1,c2;

        c1=y1/4-y1/100+y1/400;

        c2=y2/4-y2/100+y2/400;

        int c=c2-c1;

        if(strcmp(s1,"January")==0 || strcmp(s1,"February")==0)
        {
            if(y1%4==0)
            {
                if(y1%400==0 || y1%100!=0)
                {
                    if(date1<=29)
                    {
                        c++;
                    }

                }

            }
        }

        if(y2%4==0)
        {
            if(y2%400==0 || y2%100!=0)
            {
                if(strcmp(s2,"January")!=0)
                {
                    if(((strcmp(s2,"February")==0)&&(date2==29)) ||(strcmp(s2,"February")!=0))
                    {
                        c=c;
                    }
                    else c--;

                }
                else c--;
            }
        }

        printf("Case %d: %d\n",++k,c);

    }


    return 0;
}
