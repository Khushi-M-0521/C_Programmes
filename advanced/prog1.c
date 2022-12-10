#include <stdio.h>
void main()
{
    int m,n,s=0,h=1;
    printf("enter the number of trials(m<=10) :  \n");
    scanf("%d", &m);
    //m=5;
    if(m<=10)
    {
        while(h<=m)
        {
            printf("Enter the number of levels(n<=10000): \n");
           scanf("%d",&n);
           //n=99999;
           if (n<=10000)
                printf("the number of pebbles required are : %d \n",(n*(n+1)/2));
            else
                printf("n >10000 ,hence invalid\n");
            h++;
        }
    }
    else
        printf("m>10,hence invalid\n");
   
}