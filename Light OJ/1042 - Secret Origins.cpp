#include<bits/stdc++.h>
using namespace std;

int numberOfOneBitsInInteger(long long input) {
  int numOneBits = 0;

  long long currNum = input;
  while (currNum != 0) {
    if ((currNum & 1) == 1) {
      numOneBits++;
    }
    currNum = currNum >> 1;
  }
  return numOneBits;
}



int main()

{
    int t;

    scanf("%d",&t);

    int k=0;

    while(t--)
    {
        long long n;
        scanf("%lld",&n);
        int r;
        r=numberOfOneBitsInInteger(n);

        int c=0;
        n=n+1;

        int f;

        while(c!=1)
        {

            if(numberOfOneBitsInInteger(n)==r)
            {
                c=1;
            }
            else n++;
        }

        printf("Case %d: %lld\n",++k,n);



    }


    return 0;
}
