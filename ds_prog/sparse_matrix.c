#include<stdio.h>
#include<stdlib.h>
struct sparse
{
    int row,column,val;
}M[100];
int matrix[50][50],i,j,k,m,n,tmatrix[50][50];
void main()
{
    k=-1;
    printf("Enter the order of the matrix: ");
    scanf("%d %d",&m,&n);
    printf("Enter the elements: ");
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
        {
            scanf("%d",&matrix[i][j]);
            if(matrix[i][j]!=0)
            {
                M[++k].row=i;
                M[k].column=j;
                M[k].val=matrix[i][j];
            }
        }
    printf("Given Matrix:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
            printf("%-3d ",matrix[i][j]);
        printf("\n");
    }
    if (k<(m*n)/2)
    {
        printf("\nTriangular Representation of the Sparse Matrix:\n");
        printf("%-10s%-10s%-10s\n","ROW","COLUMN","VALUE");
        for(i=0;i<=k;i++)
            printf("%-10d%-10d%-10d\n",M[i].row,M[i].column,M[i].val);
    }
    else
    {
        printf("NOT A SPARSE MATRIX");
        exit(0);
    }
    printf("\nThe tranpose of the given sparse matrix: \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            tmatrix[i][j]=matrix[j][i];
            printf("%-3d ",tmatrix[i][j]);
        }
        printf("\n");
    }
}