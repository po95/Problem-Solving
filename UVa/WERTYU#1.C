
#include<stdio.h>
#include<string.h>

int main()


{
    int i,k,l,m,n;
    char s[500];
    char o[500];

    gets(s);

    l=strlen(s);

    for(i=0; i<l; i++){
        if(s[i]=='S') s[i]=='A';
        if(s[i]=='D') s[i]=='S';
        if(s[i]=='F') s[i]=='D';
        if(s[i]=='G') s[i]=='F';
        if(s[i]=='H') s[i]=='G';
        if(s[i]=='J') s[i]=='H';
        if(s[i]=='K') s[i]=='J';
        if(s[i]=='L') s[i]=='K';
        if(s[i]==';') s[i]=='L';
        if(s[i]==39) s[i]==';';
        if(s[i]==10) s[i]==39;
        if(s[i]=='W') s[i]=='Q';
        if(s[i]=='E') s[i]=='W';
        if(s[i]=='R') s[i]=='E';
        if(s[i]=='T') s[i]=='R';
        if(s[i]=='Y') s[i]=='T';
        if(s[i]=='U') s[i]=='Y';
        if(s[i]=='I') s[i]=='U';
        if(s[i]=='O') s[i]=='I';
        if(s[i]=='P') s[i]=='O';
        if(s[i]==91) s[i]=='P';
        if(s[i]==93) s[i]==91;
        if(s[i]==92) s[i]==93;
        if(s[i]=='1') s[i]=='`';
        if(s[i]=='2') s[i]=='1';
        if(s[i]=='3') s[i]=='2';
        if(s[i]=='4') s[i]=='3';
        if(s[i]=='5') s[i]=='4';
        if(s[i]=='6') s[i]=='5';
        if(s[i]=='7') s[i]=='6';
        if(s[i]=='8') s[i]=='7';
        if(s[i]=='9') s[i]=='8';
        if(s[i]=='0') s[i]=='9';
        if(s[i]=='-') s[i]=='0';
        if(s[i]=='=') s[i]=='-';
        if(s[i]==8) s[i]=='=';
        if(s[i]=='X') s[i]=='Z';
        if(s[i]=='C') s[i]=='X';
        if(s[i]=='V') s[i]=='C';
        if(s[i]=='B') s[i]=='V';
        if(s[i]=='N') s[i]=='B';
        if(s[i]=='M') s[i]=='N';
        if(s[i]==',') s[i]=='M';
        if(s[i]=='.') s[i]==',';
        if(s[i]=='/') s[i]=='.';

    }
    printf("%s\n",s);

    return 0;
}
