#include<stdio.h>
#define MAX 50
struct Poly
{
    int cf;
    int px;
}p1[MAX],p2[MAX],p3[MAX];
int i,j,m,n;
struct Poly inputPolynomial(int num, struct Poly p[])
{
    for(i=0;i<num;i++)
        scanf("%d %d",&p[i].cf,&p[i].px);
    return p[num];
}
void display(int num,struct Poly p[])
{
    for(i=0;i<num-1;i++)
        if(p[i].cf!=0)
            printf("%dx^%d+ ",p[i].cf,p[i].px);
    printf("%d\n",p[num-1].cf);
}
struct Poly sort(int num,struct Poly p[])
{
    int tcf,tpx;
    for(i=1;i<num-1;i++)
        for(j=0;j<num-i;j++)
            if(p[j].px<p[j+1].px)
            {
                tpx=p[j].px;
                p[j].px=p[j+1].px;
                p[j+1].px=tpx;
                tcf=p[j].cf;
                p[j].cf=p[j+1].cf;
                p[j+1].cf=tcf;
            }
    return p[num]; 
}
int add_poly()
{
    int k=0;
    i=0;j=0;
    while(i<m||j<n)
    {
        if(p1[i].px==p2[j].px)
        {
            p3[k].cf=p1[i].cf+p2[j].cf;
            p3[k].px=p1[i].px;
            k++;j++;
            i++;
        }
        else if(p1[i].px>p2[j].px)
        {
            p3[k].cf=p1[i].cf;
            p3[k].px=p1[i].px;
            k++;i++;
        }
        else
        {   printf("hi\n");
            p3[k].cf=p2[j].cf;
            p3[k].px=p2[j].px;
            k++;j++;
            printf("k=%d",k);
        }
    }
    return k;
}
void main()
{
    int k;
    printf("Enter the number of terms in Poly1: ");
    scanf("%d",&m);
    printf("Enter the coefficients and power :\n");
    p1[m]=inputPolynomial(m,p1);
    printf("Enter the number of terms in Poly2: ");
    scanf("%d",&n);
    printf("Enter the coefficients and power :\n");
    p2[n]=inputPolynomial(n,p2);
    p1[m]=sort(m,p1);
    p2[n]=sort(n,p2);
    printf("Polynomial 1: ");
    display(m,p1);
    printf("Polynomial 2: ");
    display(n,p2);
    k=add_poly();
    printf("\nRESULT: ");
    display(k,p3);
}