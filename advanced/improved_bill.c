#include<stdio.h>
#include<string.h>

char taxino[30],name[30];
float d,amt=0,tax;
int i,veh,rate;
void input()
{
    //hello
    //printf("Enter the passenger\'s name:           _");
    //gets(name);
    printf("+-------------+---------------+------------+------------+-------------+------------------+\n");
    printf("|  VEHICLE    |  UPTO 1KM[RS] | 1-5 KM[RS] | 5-10 KM[RS]|10-20 KM[RS] | ABOVE 20KM[RS]   |\n");
    printf("+-------------+---------------+------------+------------+-------------+------------------+\n");
    printf("| 6 seater car|     40        |     45     |    50      |     55      |        60        |\n");
    printf("| 4 Seater car|     25        |     30     |    35      |     40      |        45        |\n");
    printf("|   Auto      |     20        |     25     |    30      |     35      |        40        |\n");
    printf("|    Bus      |     10        |     15     |    20      |     25      |        30        |\n");
    printf("| Two Wheeler |     15        |     20     |    25      |     30      |        35        |\n");
    printf("+-------------+---------------+------------+------------+-------------+------------------+\n");
    
    printf("Enter vehicle: \n1. Car(4 seater)  \n2. Car(6 seater) \n3. Auto  \n4. Bus \n5. Two-wheeler\n_");
    scanf("%d",&veh);
    printf("Enter the Taxi No.:(eg XX00XX0000)        _");
    scan:
   scanf("%s",taxino);

    for(i=0;i<(strlen(taxino));i++)
    {
        switch(i)
        {
            case 0:
            case 1:
            case 4:
            case 5:if(!(taxino[i]>=65&&taxino[i]<=90))
                    {
                        printf("Please enter the valid format\n");
                        goto scan;
                    }
                    break;
         
            case 2:
            case 3:
            case 6:
            case 7:
            case 8:
            case 9:if(!(taxino[i]>='0'&&taxino[i]<='9'))
                    {
                        printf("Please enter the valid format\n");
                        goto scan;
                    }
                    break;
            
        }
    }
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
    printf("------------------------------------------------------------\n");
    printf("\n\n****************** # YOUR BILL # ******************\n");
    printf("TAXI NO.       = %s\n",taxino);
    //printf("NAME           = %s\n",name);
    printf("VEHICLE        = %d\n",veh);
    printf("DISTANCE (km)  =%f\n",d);
    printf("AOUMNT         =Rs.%.2f\n",amt);
    printf("TAX            =Rs.%.2f\n",tax);
    printf("BILL AMOUNT    =Rs.%.2f\n\n",amt+tax);
    printf("RATE US: 1: Bad\t2: Okay\t3: Good\t4: Excellent \n_");
    scanf("%d",&rate);
    printf("****************** # THANK YOU # ******************\n\n");
    printf("------------------------------------------------------------\n");
}
void main()
{
    printf("____________________________ WELCOME TO _________________________________\n");
    printf("                         \"  BOOK   IT  \"\n\n");
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
