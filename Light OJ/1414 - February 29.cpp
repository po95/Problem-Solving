#include<bits/stdc++.h>
using namespace std;

int main()

{
    unsigned int t;
    scanf("%u",&t);
    int k=0;
    map<string,int>mymap;
    int assign=1;
    mymap["January"]=assign++;
    mymap["February"]=assign++;
    mymap["March"]=assign++;
    mymap["April"]=assign++;
    mymap["May"]=assign++;
    mymap["June"]=assign++;
    mymap["July"]=assign++;
    mymap["August"]=assign++;
    mymap["September"]=assign++;
    mymap["October"]=assign++;
    mymap["November"]=assign++;
    mymap["December"]=assign++;
    while(t--)
    {
        int d1,y1,d2,y2;
        int c=0;
        char str1[15],str2[15],o1,o2;
        scanf("%s %d%c %d",str1,&d1,&o1,&y1);
        scanf("%s %d%c %d",str2,&d2,&o2,&y2);

        for(int i=y1+(y1%4); i<=y2; i+=4)
        {
                if(i%100==0 && i%400!=0)
                {
                    continue;
                }
                else
                {
                    if(i==y1)
                    {
                        if(mymap[str1]<=2) c++;
                    }
                    else if(i==y2)
                    {
                        if(mymap[str2]>2) c++;
                        else if(mymap[str2]==2)
                        {
                            if(d2==29) c++;
                        }
                    }
                    else c++;
                }
        }
        printf("Case %d: %d\n",++k,c);



    }


    return 0;
}
