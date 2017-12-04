//Accepted
#include<bits/stdc++.h>
using namespace std;
int given;

int karpekar(int n)
{
    int i=10;
    int n1,n2;
    int r=0;
    while(n>i && i<=1000000000)
    {
        n1=n%i;
        n2=n/i;

        if(n1!=0 && n2!=0)
        {
            if(given==(n1+n2))
            {
                r=1;
            }
        }
        i=i*10;

    }
    return r;

}

int main()
{
    //freopen("kaprekar.txt","r",stdin);

    int n;

    scanf("%d",&n);

    int k=0;

    while(n--)
    {
        int inf,sup;
        scanf("%d%d",&inf,&sup);


        int sum=0;
        int found=0;

        printf("case #%d\n",++k);

        for(int i=inf; i<=sup; i++)
        {
            if(i<=3) continue;

            sum=i*i;
            given=i;

            int r;

            r=karpekar(sum);

            if(r==1)
            {
                found = 1;

                printf("%d\n",i);
            }

        }
        if(found==0) printf("no kaprekar numbers\n");

        if(n!=0) printf("\n");


    }

    return 0;
}
