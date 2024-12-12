#include<stdio.h>
#include<conio.h>

int main()
{
clrscr();
     int data[50],n,item,i, k=1,loc=0;
     printf("How many data do you need:");
     scanf("%d",&n);


     printf("Enter data values:");
     for(i=1;i<=n;i++)
     {
     scanf("%d",&data[i]);
     }

     printf("Enter the item value:");
     scanf("%d",&item);

     while(loc==0 && k<=n)
     {
	  if(item==data[k])
	  {
	     loc=k;

	   }
	   k=k+1;
     }
     if(loc==0)
     {
       printf("The item is not in the array data");
     }
     else
     {
       printf("The item is the %d loc of item",loc);
     }
      getch();
     return 0;

 }
