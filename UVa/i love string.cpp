
#include<bits/stdc++.h>
using namespace std;

char s[100020];
char str[1050];

int is_sub()
{
    int i,j,k;
    int l1,l2,sum;

    l1=strlen(s);
    l2=strlen(str);

    for(i=0; i<l1; i++)
    {
        j=0;
        sum=0;

        if(s[i]==str[j])
        {
            sum+=1;

            while((s[i+1]==str[j+1]) && (str[j+1]!='\0' || s[i+1]!='\0'))
            {
                j++;
                i++;
                sum+=1;
            }
            if(sum==l2) i=l1;
        }
    }
    if(sum==l2) return 1;
    else return 0;
}

int main()

{
    int m,n,t,l,k;

    while(1==scanf("%d",&n))
    {
        k=0;
        while(k<n)
        {
            scanf("%s",s);
            scanf("%d",&t);
            l=0;
            while(l<t)
            {
                scanf("%s",str);


                if(is_sub()==1) printf("y\n");
                else if(is_sub()==0) printf("n\n");

                l++;
            }
            k++;
        }

    }
    return 0;
}
