
#include<stdio.h>
#include<string.h>

int main()

{
    int i,j,k,l,n;
    char s[1000000];
    int m=1;


    while(gets(s))
    {

        int a,b,r,c;


        scanf("%d",&n);
        printf("Case %d:\n",m);
        for(i=0; i<n; i++)
        {
            scanf("%d %d",&a,&b);
            if(a>b)
            {
                a=a+b;
                b=a-b;
                a=a-b;
            }
            r=0;
            for(k=a; k<=b; k++)
            {
                if(s[k]=='0')
                {
                    r=0;
                    c=0;
                    while(c==0 && k<=b)
                    {
                        if(s[k]!='0')
                        {
                            c=1;
                            r=1;
                        }
                        k++;
                    }
                }
                else if(s[k]=='1')
                {
                    r=0;
                    c=1;
                    while(c==1 && k<=b)
                    {
                        if(s[k]!='1')
                        {
                            c=0;
                            r=1;
                        }
                        k++;
                    }
                }

                if(r!=0) break;
            }

            if(r==0) printf("Yes\n");
            else if(r==1) printf("No\n");
        }
        m++;
        getchar();

    }

    return 0;
}
