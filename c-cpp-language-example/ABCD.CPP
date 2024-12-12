#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 int a[5],m,i,j,ab,ab2;
 printf("enter your five values(by pressing enter):\n");
 for(i=0;i<5;i++)
 {
  scanf("%d",&a[i]);
  }
 printf("Enter an element to search:");
 scanf("%d",&ab);
 printf("Enter 2nd element");
 scanf("%d",&ab2);
 for(i=0;i<5;i++)
 {
 if(a[i]==ab)
 {
 printf("Found\n");
 a[i]=ab2;
 }
 else
 {
 printf("\nNot Found");
 }
 }
 for(i=0;i<5;i++)
 {
 printf(" %d ",a[i]);
 }

 getch();
}
