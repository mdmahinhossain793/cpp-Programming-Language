#include<stdio.h>
#include<conio.h>
void main()
{
 int k=1,loc=0,i,n,j,data[20];
 clrscr();
 printf("Enter array size:");
 scanf("%d",&n);
 for(j=1;j<=n;j++)
 {
  printf("Enter array[%d]:",j);
  scanf("%d",&data[j]);
  }
  printf("Enter Item value:");
  scanf("%d",&i);
  while(loc==0&&k<=n)
  {
   if(i==data[k])
   {
    loc=k;
    }
    k++;
  }
  if(loc==0)
  {
  printf("Data not found");
  }
  else
  {
  printf("Number of value is:%d",loc);
  }
  getch();
}
