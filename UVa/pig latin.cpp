//accepted
#include<bits/stdc++.h>
using namespace std;

int main()

{

    char ch;
    while((ch=getchar())!=EOF)
    {
        if((ch<'A' || ch>'Z')&&(ch<'a' || ch>'z'))
        {
            printf("%c",ch);
        }

        else if(ch=='a'||ch=='A'||ch=='E'||ch=='e'||ch=='I'||ch=='i'||ch=='O'||ch=='o'||ch=='U'||ch=='u')
        {
            printf("%c",ch);
            while((ch=getchar()) && ((ch>='A' && ch<='Z')||(ch>='a' && ch<='z')))
            {
                printf("%c",ch);
            }
            printf("ay");
            printf("%c",ch);
        }
        else if((ch>='a'&&ch<='z') || (ch>='A' && ch<='Z'))
        {
            char ch1=ch;
            while((ch=getchar()) && ((ch>='A' && ch<='Z')||(ch>='a' && ch<='z')))
            {
                printf("%c",ch);
            }
            printf("%cay",ch1);
            printf("%c",ch);
        }

    }
    //printf("\n");

    return 0;
}
