
#include<bits/stdc++.h>
using namespace std;

int temp[500010],num[500010];
long long c;


void call(int lo,int hi)
{
    if(lo==hi) return;

    int mid=(lo+hi)/2;

    call(lo,mid);

    call(mid+1,hi);

    int i,j,k;

    for(i=lo,j=mid+1,k=lo; k<=hi; k++)
    {
        if(i==mid+1) temp[k]=num[j++];


        else if(j==hi+1) temp[k]=num[i++];

        else if(num[i]<num[j]) temp[k]=num[i++];

        else
        {
            if((k>lo && temp[k-1]<=num[j]) && ( i<(mid+1) && (num[i]<=num[j])))
            {
                temp[k]=num[j++];
                continue;
            }
            c=c+(j-k);

            temp[k]=num[j++];
        }

    }


    for(k=lo; k<=hi; k++)
    {
        num[k]=temp[k];
    }
}

int main()
{
    int n;


    while(1==scanf("%d",&n))
    {
        if(n==0) break;
        for(int i=1; i<=n; i++)
        {
            scanf("%d",&num[i]);
        }
        c=0;
        call(1,n);

        printf("%lld\n",c);

    }



    return 0;
}
