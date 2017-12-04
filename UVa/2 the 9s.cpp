#include<bits/stdc++.h>
using namespace std;

int call_sum(string s)
{
    int sum=0;
    for(int i=0; i<s.size(); i++)
    {
        sum=sum+(s[i]-'0');
    }
    return sum;
}

int call_degree(int sum)
{
    int i=1;

    if(sum%9==0)
    {
        while(sum>9)
        {
            int d=0;
            while(sum>0)
            {
                d=d+(sum%10);
                sum=sum/10;
            }
            sum=d;

            i++;
        }
        return i;
    }
    else
    {
        return -1;
    }

}

int main()

{
    string s;

    while(cin>>s)
    {
        if(s[0]=='0') break;

        int sum=call_sum(s);
        int m=call_degree(sum);

        if(m==-1) printf("%s is not a multiple of 9.\n",s.c_str());

        else if(m>0) printf("%s is a multiple of 9 and has 9-degree %d.\n",s.c_str(),m);
    }


    return 0;
}
