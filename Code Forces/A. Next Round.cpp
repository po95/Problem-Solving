#include<bits/stdc++.h>
using namespace std;

int main()

{

    int n,k;
    int stu[55];
    while(2==scanf("%d%d",&n,&k))
    {
        for(int i=0; i<n; i++)
        {
            scanf("%d",&stu[i]);
        }
        int m=stu[k-1];
        int c=0;
        for(int i=0; i<n; i++)
        {
            if(stu[i]>=m && stu[i]>0)  c++;
            if(stu[i]<m || stu[i]<=0) break;
        }
        printf("%d\n",c);
    }

    return 0;
}
