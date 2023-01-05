#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d",&a);
    float d;
    if(a<=10000)
    {
        b=(a*80)/100;
        c=(a*20)/100;
        d=a+b+c+d;
        printf("%0.2f",d);
    }
     else if(a<=20000)
    {
        b=(a*90)/100;
        c=(a*25)/100;
        d=a+b+c+d;
        printf("%0.2f",d);
    }
     else
    {
        b=(a*95)/100;
        c=(a*30)/100;
        d=a+b+c+d;
        printf("%0.2f",d);
    }
}