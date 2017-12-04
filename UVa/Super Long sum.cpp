//Accepted
#include<bits/stdc++.h>
using namespace std;
int r[1000010],s1[1000010],s2[1000010];
int l;

void add()
{
    int n1,n2,carry=0;
    int k=0,sum=0;
    for(int i=l-1; i>=0; i--)
    {
        n1=s1[i]-'0';
        n2=s2[i]-'0';

        sum=n1+n2+carry;

        r[k++]=(sum%10)+'0';
        carry=sum/10;
    }
    if(carry!=0)
    {
        r[k++]=carry;
        r[k]='\0';
        l=k;

    }
    else if(carry==0)
    {
        r[k]='\0';
    }

}

int main()
{
    int t;

    scanf("%d",&t);

    while(t--)
    {
        int n;
        getchar();
        scanf("%d",&n);
        int j1=0,j2=0;
       // char s1[1000010],s2[1000010];
        int l1,l2;
        char d1,ch,d2;

        for(int i=1; i<=n; i++)
        {
            getchar();
            scanf("%c%c%c",&d1,&ch,&d2);

            s1[j1++]=d1;
            s2[j2++]=d2;
        }
        s1[j1]='\0';
        s2[j2]='\0';
        l=j1;

        add();

        for(int i=l-1; i>=0; i--)
        {
            printf("%c",r[i]);
        }
        printf("\n");
        if(t!=0) printf("\n");

    }


    return 0;
}
