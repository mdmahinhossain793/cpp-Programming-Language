#include<stdio.h>
#include<conio.h>
void main()
{


int a[10],i,j,ab,ab2,m;
clrscr();
printf("Enter numbers\n");
for(i=0;i<10;i++)
scanf("%d",&a[i]);
printf("enter the element to search:");
scanf("%d",&ab);
printf("enter the 2nd element:");
scanf("%d",&ab2);
for(i=0;i<10;i++)
{
m=a[i];

if(m==ab)

{
 printf("Found\n");
 a[i]=ab2;
}
else
{
 printf("Not Found\n");
}
}
for(i=0;i<10;i++)
printf(" %d ",a[i]);

getch();
}






