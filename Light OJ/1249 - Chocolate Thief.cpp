#include<bits/stdc++.h>
using namespace std;

int main()

{
    unsigned int t;
    scanf("%u",&t);
    int k=0;
    while(t--)
    {
        int n;
        scanf("%d",&n);
        char s[22];
        int h,b,l,vol;

        char thief[22],bechara[22];
        int tvol,bvol;
        for(int i=0; i<n; i++)
        {
            scanf("%s%d%d%d",s,&h,&b,&l);
            vol=h*b*l;
            if(i==0)
            {
                strcpy(thief,s);
                tvol=vol;
                bvol=vol;
                strcpy(bechara,s);
                continue;
            }
            if(vol>tvol)
            {
                strcpy(thief,s);
                tvol=vol;
            }
            if(vol<bvol)
            {
                strcpy(bechara,s);
                bvol=vol;
            }
        }
        if(bvol!=tvol) printf("Case %d: %s took chocolate from %s\n",++k,thief,bechara);
        else printf("Case %d: no thief\n",++k);

    }

    return 0;
}
