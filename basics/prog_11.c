#include <stdio.h>
void main()
{
    int a=10,b=20;
    float p=1.5, q=-2.5;
    char c='A', d='a';
    printf("a+b/5= %d \n",a+b/5);
    printf("p-q/a+b %f \n",p-q/a+b);
    printf("a+b(mod)13= %d \n",a+b%13);
    printf("a+c-d= %d \n",a+c-d);
    printf("c/a+q= %f \n",c/a+q);
    printf("a(mod)6/b(mod)3= %d \n",a%6/b%3);
    printf("++c+b= %d \n",++c+b);
    printf("c= %d \n",c);
    printf("b(mod)a++= %d \n",b%a++);
    printf("a= %d \n",a);
    printf("-(a*p)--(b*q)= %f \n",-(a*p)- -(b*q));
    printf("++a+b--/2.5= %f \n",++a+b--/2.5);
    printf("a= %d , b= %d\n",a,b);
}