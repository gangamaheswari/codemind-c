#include<stdio.h>
int main()
{
    int a,i,r=0;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        r=r+i;
    }
    printf("%d",r);
}