#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int euclid(int m,int n)
{
    if(n==0)
        return m;
    return euclid(n,m%n);
}

int middleSchool(int m,int n)
{
    int p[10],q[10],c=2,a=0,b=0,pro=1,i,j,min,max;
    int *z,*y;
    while (m>1)
    {
        if(m%c==0)
        {
            p[a++]=c;
            m=m/c;
        }
        else
            c++;
    }

    c=2;
    while (n>1)
    {
        if(n%c==0)
        {
            q[b++]=c;
            n=n/c;
        }
        else
            c++;
    }

    max=(a>b)?a:b;
    if(a>b)
    {
        y=p;
        z=q;
    }
    else
    {
        y=q;
        z=p;
    }

    j=0;
    for(i=0;i<=max;i++)
        if( y[i]==z[j])
        {
            pro*=y[i];
            j++;
        }
    return pro;
}

int repetativeSub(int m,int n)
{
    if(m==0) return n;
    if(n==0) return m;
    
    while(m!=n)
    {
        if(m>n)
            m=m-n;
        else
            n=n-m;
    }

    return m;
}

int consecIntCheck(int m,int n)
{
    int r=(m>n)?m:n;

    while((m%r!=0) || (n%r!=0))
        r--;

    return r;
}

void main()
{
    int m,n;
    clock_t t;
    printf("Enter two numbers to find their gcd: ");
    scanf("%d %d",&m,&n);

    t=clock();
    printf("Euclid gcd= %d\n",euclid(m,n));
    t=clock()-t;
    printf("Time= %.2f ms\n",((float)t/ CLOCKS_PER_SEC)*1000);

    t=clock();
    printf("Middle School gcd= %d\n",middleSchool(m,n));
    t=clock()-t;
    printf("Time= %.2f ms\n",((float)t/ CLOCKS_PER_SEC)*1000);

    t=clock();
    printf("Repetative Subtration gcd= %d\n",repetativeSub(m,n));
    t=clock()-t;
    printf("Time= %.2f ms\n",((float)t/ CLOCKS_PER_SEC)*1000);

    t=clock();
    printf("Consecutive Integer Checking gcd= %d\n",consecIntCheck(m,n));
    t=clock()-t;
    printf("Time= %.2f ms",((float)t/ CLOCKS_PER_SEC)*1000);


}