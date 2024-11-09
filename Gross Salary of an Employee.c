#include<stdio.h>
int main()
{
    float b,h,d,p,s;
    scanf("%f%f%f",&b,&h,&d);
    p=b*0.12;
    s=b+h+d+p;
    printf("%.2f\n%.2f",p,s);
}
