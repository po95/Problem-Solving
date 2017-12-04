#include<bits/stdc++.h>
using namespace std;
char s[50];
int top=0;

void push(char ch)
{
    s[++top]=ch;
}
int pop()
{
    return s[top--];
}


int main()

{
    char str[50],q;
    int i,j,k,l;
    gets(str);
    l=strlen(str);
    char ch='(';
    push(ch);

    for(i=0;i<l;i++)
    {
        if(isdigit(str[i]))
        {
            printf("%d ",str[i]-'0');
        }
        else if(str[i]=='+' || str[i]=='-')
        {
            q=pop();
            while(q=='+' || q=='-' || q=='*' || q=='/')
            {
                printf("%c ",q);
                q=pop();

            }
            push(q);
            push(str[i]);
        }
        else if(str[i]=='*' || str[i]=='/')
        {
            q=pop();
            while(q=='*' || q=='/')
            {
                printf("%c ",q);
                q=pop();
            }
            push(q);
            push(str[i]);
        }
        else if(str[i]=='(')
        {
            push(str[i]);
        }
        else if(str[i]==')')
        {
            q=pop();
            while(q!='(')
            {
                printf("%c ",q);
                q=pop();
            }
        }
    }


    return 0;
}
