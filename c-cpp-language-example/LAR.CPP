#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int data[20],i,j,n,max,loc;
printf("enter the element of number");
scanf("%d",&n);
for(i=1;i<=n;i++)
scanf("%d",&data[i]);
max=data[1],loc=1;
if(i>n)
printf("%d%d",loc,max);
for(j=1;j<=n;j++)
{if(max<data[i])
{loc=j,max=data[j];
}
}
printf("the largest element is %d\n and the position is %d",max,loc);
getch();
}