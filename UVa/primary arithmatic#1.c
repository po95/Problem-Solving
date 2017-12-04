#include<stdio.h>
#include<stdlib.h>
int main()

{
    long long int i,j,k,a,b,n1[15],n2[15],r,c,m;


    while(2==scanf("%lli %lli",&a,&b))
    {
        if(a==0 && b==0) break;
        c=0;
        r=0;
        k=0;
        m=0;
        a=abs(a);
        b=abs(b);

        for(i=1000000000; i>=1; i/=10)
        {
            if(a>=i || b>=i)
            {
                n1[c]=a/i;
                a=a%i;
                n2[c]=b/i;
                b=b%i;
                c++;
            }
        }
        for(j=c-1; j>=0; j--)
        {

            m=(n1[j]+n2[j]+r);
            if(m>=10){
                k++;
                r=1;
            }
            else if(m<10) r=0;
        }



        if(k==1) printf("%lli carry operation.\n",k);


        else if(k>0) printf("%lli carry operations.\n",k);

        else printf("No carry operation.\n");


    }

    return 0;

}
