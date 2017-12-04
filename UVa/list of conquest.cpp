#include<bits/stdc++.h>
using namespace std;

int main()

{
    char s1[100],s2[100];
    while(2==scanf("%s%s",&s1,&s2))
    {
        if(strcmp(s1,s2)>0) printf("%s is bigger than %s.\n",s1,s2);
        else if(strcmp(s1,s2)<0) printf("%s is bigger than %s.\n",s2,s1);
        else if(strcmp(s1,s2)==0) printf("%s and %s are equal\n",s1,s2);
    }


    return 0;
}
