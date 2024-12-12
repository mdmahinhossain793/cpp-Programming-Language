#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a[10],i,j,*p,sum=0;
for(i=0; i<10; i++)
{
a[i]=i+1;
printf("X[%d]= %d\n\n",i,a[i]);
}
for(j=0; j<10; j++)
{
p=&a[j];
sum=sum+(*p);
printf(" %p \n\n",p);
}
printf("\n\nResult Is: %d",sum);
getch();
}
