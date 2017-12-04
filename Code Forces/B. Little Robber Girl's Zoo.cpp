#include<bits/stdc++.h>
using namespace std;

int main()

{

    int num[110];


    int n;
    while(1==scanf("%d",&n))
    {
        for(int i=0; i<n; i++)
        {

            scanf("%d",&num[i]);
            if(i==0) m=num[1];
            if(num[i]<m) m=num[i];
        }




    }



    return 0;
}
