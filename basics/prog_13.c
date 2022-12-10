#include<stdio.h>
void main()
{
    int i=2,j=5,x=10;
    float a=1.25,b=55,y=10;
    printf("x=(float)x-j/2 = %d \n",x=(float)x-j/2);
    printf("x=-5*i+j(mod)3 = %d \n",x=-5*i+j%3);
    printf("x/=(b/2.75)*(j-3)= %d \n",x/=(b/2.75)*(j-3));
    printf("x*=(i+j)/-3+3*j/4 = %d \n",x*=(i+j)/-3+3*j/4);
    printf("x-=3*(i+j)+j/2*i = %d \n",x-=3*(i+j)+j/2*i);
    printf("y=(y+b)/5 = %f \n",y=(y+b)/5);
    printf("y/=x-=(a-b)-j*a = %f x= %d\n",y/=x-=(a-b)-j*a,x);
    a=1;b=2;int c=3,d=4;
    printf("a<b>=c!=a==b<=a = %d \n",a<b>=c!=a==b<=a);
    printf("a+b<b+c>=c/a==d*a-b = %d \n",a+b<b+c>=c/a==d*a-b);
    printf("a+b<b+c&&c/a==d*a||b/a>c = %d \n",a+b<b+c&&c/a==d*a||b/a>c);
}