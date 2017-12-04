#include<bits/stdc++.h>
using namespace std;

char s[150];
int top=-1;

void push(char ch)
{
    top++;
    s[top]=ch;
}

void pop()
{
    top--;
}

int main()
{
    char ch;
    unsigned int n;

    scanf("%u",&n);
    getchar();


        while(n--)
        {
            top=-1;
            int c=0;
            while(ch=getchar())
            {
                if(ch=='\n') break;

                else if(ch!=32)
                {
                    if(ch=='(' || ch=='[')
                    {
                        push(ch);
                    }
                    else if(ch==')' || ch==']')
                    {
                        if(ch==')' && s[top]=='(')
                        {
                            pop();
                        }
                        else if(ch==']' && s[top]=='[')
                        {
                            pop();
                        }
                        else c=1;
                    }
                }
            }
            if(top==(-1)&& c==0) printf("Yes\n");
            else printf("No\n");
        }

    return 0;
}
