#include<bits/stdc++.h>
using namespace std;

char s[500][500];
int h,w,n,p,count;
char ch;

void ranking(int r,int c)
{
    if((r>=0&&r<h)&&(c>=0&&c<w))
    {
        if(s[r][c]==ch)
        {
            s[r][c]='0';

            ranking(r-1,c);
            ranking(r,c-1);
            ranking(r,c+1);
            ranking(r+1,c);
        }
        else return;

    }
    else return;

}

int main()
{
    int t;

    scanf("%d",&t);
    int k=0;

    while(t--)
    {
        int a_letter[30],a_number[30];
        scanf("%d%d",&h,&w);

        getchar();

        for(int i=0; i<h; i++)
        {
            scanf("%s",s[i]);
        }
        memset(a_number,0,sizeof(a_number));
        for(int i=0; i<26; i++)
        {
            a_letter[i]=i;
        }

        for(int i=0; i<h; i++)
        {
            for(int j=0; j<w; j++)
            {
                if(s[i][j]>='a'&&s[i][j]<='z')
                {
                    ch=s[i][j];
                    ranking(i,j);
                    a_number[ch-97]++;
                }
            }
        }

        for(int i=1; i<26; i++)
        {
            if(a_number[i]>a_number[i-1])
            {
                for(int j=i; j>0; j--)
                {
                    if(a_number[j]>a_number[j-1])
                    {
                        swap(a_number[j],a_number[j-1]);
                        swap(a_letter[j],a_letter[j-1]);
                    }
                    else break;
                }
            }
        }

       printf("World #%d\n",++k);
        for(int i=0; i<26; i++)
        {
            if(a_number[i]>0) printf("%c: %d\n",a_letter[i]+97,a_number[i]);
            else break;
        }


    }


    return 0;
}
