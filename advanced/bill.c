#include<stdio.h>
char taxino[30],name[30];
float d,amt=0,tax;
int veh,rate;
void input()
{
    printf("Enter the Taxi No.:                   _");
    gets(taxino);
    printf("Enter the passenger\'s name:           _");
    gets(name);
    printf("Enter vehicle: \n1. Car(4 seater)  \n2. Car(6 seater) \n3. Auto  \n4. Bus \n5. Two-wheeler\n_");
    scanf("%d",&veh);
    printf("Enter the distance travelled (in km): _");
    scanf("%f",&d);
}
void calculate(int n)
{
    if(d!=0)
    {
       if(d<=1.0)
            amt=n;
        else if(d>1 && d<=5)
            amt=n+(d-1)*(n+5);
        else if(d>5 && d<=10)
            amt=n+4*(n+5)+(d-5)*(n+10);
        else if(d>10 && d<=20)
            amt=n+4*(n+5)+5*(n+10)+(d-10)*(n+15);
        else
            amt=n+4*(n+5)+5*(n+10)+10*(n+15)+(d-20)*(n+20);
    }
    tax =0.05*amt;
}
void display()
{
    printf("\n\n****************** # YOUR BILL # ******************\n");
    printf("TAXI NO.       = %s\n",taxino);
    printf("NAME           = %s\n",name);
    printf("VEHICLE        = %d\n",veh);
    printf("DISTANCE (km)  =%f\n",d);
    printf("AOUMNT         =Rs.%.2f\n",amt);
    printf("TAX            =Rs.%.2f\n",tax);
    printf("BILL AMOUNT    =Rs.%.2f\n\n",amt+tax);
    printf("RATE US: 1: Bad\t2: Okay\t3: Good\t4: Excellent \n_");
    scanf("%d",&rate);
    printf("****************** # THANK YOU # ******************\n\n");
}
void main()
{
    printf("_______________ WELCOME TO _______________\n");
    printf("            \"  BOOK   IT  \"\n\n");
    input();
    switch(veh)
    {
        case 1: calculate(35);
                break;
        case 2: calculate(40);
                break;
        case 3: calculate(25);
                break;
        case 4: calculate(10);
                break;
        case 5: calculate(15);
                break;
    }
    display();
    printf("___________ PLEASE VISIT AGAIN ___________\n");
}