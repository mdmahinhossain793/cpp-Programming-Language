#include<stdio.h>
#include<conio.h>
void main()
{
 int k=1,loc=0,i,j,n;
 int data[20];
 clrscr();
 printf("How many value you want:");
 scanf("%d",&n);
 for(j=1;j<=n;j++)
 {
  printf("Enter array [%d]",j);
  scanf("%d",&data[j]);
  }
 printf("Enter Search Value");
 scanf("%d",&i);
 while(loc==0 && k<=n)
 {
  if(i--data[k])
   {
    loc=k;
    k++;
    }
  if(loc==0)
  {
   printf("Data Not Found");
   }
  else
  {
   printf("Number of index is:%d",loc);
   }
 getch();
 }
}
