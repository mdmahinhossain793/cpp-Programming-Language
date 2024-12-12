#include<stdio.h>
#include<conio.h>

void main()
 {
  int n,i,m,a[10],min,loc,j,te;
  clrscr();
  printf("\n Range of array: ");
   scanf("%d",&n);
  for(i=1;i<=n;i++)
   {
    printf("\n Enter a[%d]: ",i);
     scanf("%d",&a[i]);
   }
  for(i=1;i<n;i++)
   {
    min=a[i],loc=i;
    for(j=i+1;j<=n;j++)
     {
      if(min>a[j])
       min=a[j],loc=j;
     }
    te=a[i],a[i]=a[loc],a[loc]=te;
   }
  printf("\n After selactionsort sorting: ");
  for(i=1;i<=n;i++)
   printf(" %d ",a[i]);
  getch();
 }