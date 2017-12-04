#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,i,j,arr[13];
    while(scanf("%d",&k)==1)
    {
        for(i=0;i<12;i++)
        {
            scanf("%d",&arr[i]);
        }
        if(k==0)
            printf("%d\n",0);
        else
        {
        sort(arr,arr+12);
        int s=0,t=0;
        for(i=11;i>=0;i--)
        {
            s+=arr[i];
            t++;
            if(s>=k)
                break;
        }
        if(s<k)
            printf("%d\n",-1);
        else
            printf("%d\n",t);
        }
    }
    return 0;
}
