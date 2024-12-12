#include<stdio.h>
#include<conio.h>

void main()
{
int r1,c1,r2,c2,i,j,a[6][6],b[6][6],d[6][6],k,c;
clrscr();
printf("\n 1st Matrix ROW: ");
scanf("%d",&r1);
printf("\n 1st Matrix COLOUM: ");
scanf("%d",&c1);
printf("\n 2nd Matrix ROW: ");
scanf("%d",&r2);
printf("\n 2nd Matrix COLOUM: ");
scanf("%d",&c2);
if(c1!=r2)
{
clrscr();
printf("\n Matrix multiplication is not possible");
}
else
 {
  printf("Enter the element of the 1st matrix:\n");
 for(i=1;i<=r1;i++)
  for(j=1;j<=c1;j++)
   {
    printf("\n 1st Matrix A[%d]:[%d] > ",i,j);
    scanf("%d",&a[i][j]);
   }
     printf("Enter the element of the 2nd matrix:\n");
 for(i=1;i<=r2;i++)
  for(j=1;j<=c2;j++)
   {
    printf("\n 2nd Matrix B[%d]:[%d] > ",i,j);
    scanf("%d",&b[i][j]);
   }
clrscr();
printf("\n 1st Matrix >\n\n");
for(i=1;i<=r1;i++)
 {
  for(j=1;j<=c1;j++)
   {
    printf(" %3d ",a[i][j]);
   }
  printf("\n");
 }
printf("\n 2nd Matrix >>\n\n");
for(i=1;i<=r2;i++)
 {
  for(j=1;j<=c2;j++)
   {
    printf(" %3d ",b[i][j]);
   }
  printf("\n");
 }

 for(i=1;i<=r1;i++)
  {       	               /* Process part */
   for(j=1;j<=c2;j++)
    {
    d[i][j]=0;
    for(k=1;k<=c1;k++)
     d[i][j]=d[i][j]+(a[i][k]*b[k][j]);
    }
  }
printf("\n 3rd Matrix >>>\n\n");
for(i=1;i<=r1;i++)
 {
  for(j=1;j<=c2;j++)
   {
    printf(" %3d ",d[i][j]);
   }
  printf("\n");
 }
}
getch();
}




