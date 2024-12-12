#include<stdio.h>
#include<conio.h>
long int fact(int p);
void main()
{
int n;
long int a;
clrscr();
printf("\nEnter number");
scanf("%d",&n);
a=fact(n);
printf("\nFactorial of%dis%ld",n,a);
getch();
}
long int fact(int p)
{
long int i;
if(p==0)
return 1;
else
i=p*fact(p-1);
return(i);
}