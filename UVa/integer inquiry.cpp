
//integer inquiry
#include<bits/stdc++.h>
#include<cstring>
using namespace std;

int main()

{
    int i=0,j,k,l;

    char str1[110],str2[110],out[200];

    while(gets(str2))
    {

        int l1,l2;
        int c=0;
        int x;
        if(strcmp(str2,"0")==0) break;


        if(i==0)
        {
            strcpy(str1,str2);
            i++;
            continue;

        }

        l1=strlen(str1);
        l2=strlen(str2);
        if(l1>l2)
        {
            for(l1=l1-1,l2=l2-1,j=0; l1>=0; l1--,l2--,j++)
            {
                if(l2>=0)
                {
                    x=str1[l1]+str2[l2]-96+c;
                    out[j]=(x%10)+48;
                    c=x/10;
                }
                else
                {
                    x=str1[l1]-48+c;
                    out[j]=(x%10)+48;
                    c=x/10;
                }
            }
            if(c==0) out[j]='\0';
            else
            {
                out[j]=c+48;
                out[j+1]='\0';
                j++;
            }
        }
        else if(l2>l1)
        {
            for(l2=l2-1,l1=l1-1,j=0; l2>=0; l1--,l2--,j++)
            {
                int x;
                if(l1>=0)
                {
                    x=str1[l1]-96+str2[l2]+c;
                    out[j]=x%10+48;
                    c=x/10;
                }
                else
                {
                    x=str2[l2]-48+c;
                    out[j]=x%10+48;
                    c=x/10;
                }
            }
            if(c==0) out[j]='\0';
            else
            {
                out[j]=c+48;
                out[j+1]='\0';
                j++;
            }
        }
       else
        {
            for(l1=l1-1,j=0; l1>=0; j++,l1--)
            {
                x=str1[l1]+str2[l1]-96+c;
                out[j]=(x%10)+48;
                c=x/10;
            }
            if(c==0) out[j]='\0';
            else
            {
                out[j]=c+48;
                out[j+1]='\0';
                j++;
            }
        }
        int m;
        m=j;
        for(k=0,j=j-1; k<m; k++,j--)
        {
            str1[k]=out[j];
        }
        str1[k]='\0';

    }
    printf("%s\n",str1);

    return 0;

}
