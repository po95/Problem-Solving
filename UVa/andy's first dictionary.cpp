#include<bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("andy.txt","r",stdin);
    vector<string>v;

    string s;

    while(cin>>s)
    {
        int i=0;
        string temp;
        while(i<s.size())
        {
            string temp="";
            int j=0;
            while((s[i]>='A'&&s[i]<='Z')||(s[i]>='a'&&s[i]<='z'))
            {
                temp+=tolower(s[i]);
                i++;
            }
           // temp[j]='\0';
           if(temp.size()) v.push_back(temp);
            i++;
        }

    }
    sort(v.begin(),v.end());

        printf("%s\n",v[0].c_str());

        for(int i=1; i<v.size(); i++)
        {
            if(v[i]!=v[i-1]) printf("%s\n",v[i].c_str());
        }


    return 0;
}
