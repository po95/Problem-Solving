#include<bits/stdc++.h>
using namespace std;

int main()

{
   //freopen("happynumber.txt","r",stdin);

    int n,t,temp,r;

    scanf("%d",&t);

    int k=0;

    while(t--)
    {
        scanf("%d",&n);
        temp=n;
        int sum;

       if(n==1)
        {
            printf("Case #%d: %d is a Happy number.\n",++k,n);
            continue;
        }

        map<int,int>mymap;

        int assign=1;

        mymap[temp]=assign++;


        while(temp!=1)
        {
            sum=0;

           while(temp>0)
           {
               r=temp%10;
               sum=sum+(r*r);
               temp=temp/10;
           }
           temp=sum;

           if(temp==1)
           {
               printf("Case #%d: %d is a Happy number.\n",++k,n);
           }
           else if(mymap[temp]==0)
           {
               mymap[temp]=assign++;
           }
           else if(mymap[temp]!=0)
           {
               printf("Case #%d: %d is an Unhappy number.\n",++k,n);
               break;
           }

        }
    }



    return 0;
}

