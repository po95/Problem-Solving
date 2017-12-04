#include<bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("howold.txt","r",stdin);
    int n;

    scanf("%d",&n);
    int k=0;

    while(n--)
    {
        getchar();

        int cd,bd,cm,bm,cy,by,ch,ch1;

        scanf("%d%c%d%c%d",&cd,&ch,&cm,&ch1,&cy);
        scanf("%d%c%d%c%d",&bd,&ch,&bm,&ch1,&by);

        int age=cy-by;

        if(cm<bm) age--;

        else if(cm==bm)
        {
            if(cd<bd) age--;

        }

        if(age<0)  printf("Case #%d: Invalid birth date\n",++k);
        else if(age>130) printf("Case #%d: Check birth date\n",++k);
        else printf("Case #%d: %d\n",++k,age);
    }


    return 0;
}
