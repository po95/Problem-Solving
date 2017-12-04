#include<bits/stdc++.h>
using namespace std;

int main()

{
    unsigned int t;
    scanf("%u",&t);
    int k=0;
    char num[12];
    while(t--)
    {
        getchar();
        scanf("%[^\n]",num);
        int l=strlen(num);
        if(l==1) printf("Case %d: Yes\n",++k);
        else
        {
            int c=1;
            for(int i=0,j=l-1; i<l/2; i++,j--)
            {
                if(num[i]!=num[j])
                {
                    c=0;
                    break;
                }
            }
            if(c==1) printf("Case %d: Yes\n",++k);
            else printf("Case %d: No\n",++k);
        }

    }

    return 0;
}
