#include<stdio.h>
int main()
{
    int i,n,c,a=0,b=1,cnt=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d ",a);
        c=a+b;
        a=b;
        b=c;
    }
}