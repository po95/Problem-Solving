#include<bits/stdc++.h>
using namespace std;
int length;

int trace[20];
vector<int>tempo;
char ch[]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
int c,p,n;

void func()
{
    if(tempo.size()==n)
    {
        for(int i=0; i<n; i++)
        {
            printf("%c",tempo[i]);
        }
        printf("\n");
        c++;
        return;
    }
    if(c==p) return;


    for(int i=0; i<n; i++)
    {
        if(trace[i]==0)
        {
            trace[i]=1;
            tempo.push_back(ch[i]);
            func();
            trace[i]=0;
            tempo.pop_back();

        }
    }

}

int main()
{

    unsigned int t;
    scanf("%u",&t);

    int k=0;
    while(t--)
    {
        scanf("%d%d",&n,&p);
        printf("Case %d:\n",++k);
        c=0;

        func();


    }
}
