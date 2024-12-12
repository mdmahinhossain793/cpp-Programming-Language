#include<stdio.h>
#include<conio.h>
void main()
{
 int a[10],*p,i,j,sum=0;
 clrscr();
 for(i=0;i<=10;i++)
 {
  printf("Enter value[%d]",i+1);
  scanf("%d",&a[i]);
  a[j]=a[i];
  p=&a[j];
  sum=sum+(*p);
  }
 printf("Total :%d",sum);
 getch();
}