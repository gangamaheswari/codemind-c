#include<stdio.h>
int main()
{
    float bs,hra,da;
    scanf("%f%f%f",&bs,&hra,&da);
    float gr,pf;
    pf=bs*12/100;
    gr=pf+bs+hra+da;
    printf("%0.2f
",pf);
    printf("%0.2f",gr);
}