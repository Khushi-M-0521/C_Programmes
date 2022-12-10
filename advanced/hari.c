#include<stdio.h>
void main()
{
    char taxino[20],name[20];
    float d=0,amt=0,tax=0;
    int rate;
    
    printf("Enter the name of the passanger \n");
    gets(name);
    printf("Enter the taxi number \n");
    gets(taxino);
    printf("Enter the distance travelled in km \n");
    scanf("%f",&d);
    if(d!=0)
    {
        if(d<=1)
            amt=25;
        else if(d>1&&d<=5)
            amt=d*30;
        else if(d>5&&d<=10)
            amt=d*35;
        else if(d>10&&d<=20)
            amt=d*40;
        else
            amt=d*45;
        tax=(5/100)*(amt);
    }
    printf("WELCOME TO CHANDANA CAB SERVICE \n");
    printf("######### Your bill#######");
    printf("Name of the passanger= %s \n",name);
    printf("Taxi number= %s \n",taxino);
    printf("Distance travelled=%f \n",d);
    printf("Total amount=%f \n",(tax+amt));
    printf("Rate your experience \n");
    printf("Enter 1:bad 2:okay 3:good 4:excellent \n");
    scanf("%d",&rate);
    printf("**THANKYOU.......VISITAGAIN!!!***");
}