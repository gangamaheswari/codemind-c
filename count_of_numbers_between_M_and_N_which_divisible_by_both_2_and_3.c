#include<stdio.h>
int main()
{
    int a,b,i,c=0;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        if(i%6==0)
        c+=1;
    }
    printf("%d",c);
}