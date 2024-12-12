#include<stdio.h>
#include<conio.h>
int power(int x,int y)
{
int result=1;
for(int i=1; i<=y; i++)
{
  result=result*x;

}
return result;
}



void main()
{
clrscr();
double value;
int x,y,z;
printf("Enter The Base Value: ");
scanf("%d",&x);
printf("Enter the Power Value: ");
scanf("%d",&y);
if(y<0)
{
z=y*(-1);
}
else
{
z=y;
}
value=power(x,z);
if(y>=0)
printf("The Result Is: %.3f",value);
else
printf("The Result Is: %.3f",1/value);
getch();
}
