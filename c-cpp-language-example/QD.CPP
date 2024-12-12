#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
clrscr();
float a,b,c;
float root1,root2,root,D;
printf("enter coefficient of x square:");
scanf("%f",&a);
printf("\n enter coefficient of y:");
scanf("%f",&b);
printf("\n enter value of constant c:");
scanf("%f",&c);
D=((b*b)-(4*a*c));
if(D>0)
{
root1=((-b+sqrt(D))/(2.0*a));
root2=((-b-sqrt(D))/(2.0*a));
printf("\n result:this quadratic equation has two root\n root1=%.4f\n root2=%.4f",root1,root2);
}
else if(D==0)
{
root=(-b/(2*a));
printf("\n %f", root);
}
else

printf("no real solution");

getch();
}
