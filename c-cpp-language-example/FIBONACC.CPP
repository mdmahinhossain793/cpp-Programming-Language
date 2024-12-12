#include<stdio.h>
#include<conio.h>
int fibonacci(int n);
void main()
{
int n,i;
clrscr();
printf("Please enter the range of series:");
scanf("%d",&n);
printf("The series is:\n");
for(i=1;i<=n;i++)
printf("%4d",fibonacci(i));
getch();
}
int fibonacci (int n)
{
if(n<=2)
return(1);
else
return(fibonacci(n-1)+fibonacci(n-2));
}