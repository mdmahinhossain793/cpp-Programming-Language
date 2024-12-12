/*A recursive solusion to the towers of hanoi problem for n disks*/
#include<stdio.h>
#include<conio.h>
void tow(int n,char*be,char*au,char*en)
{
if(n==1)
printf("\nMove%d no disk from%s-->%s",n,be,en);
else
{
tow((n-1),be,en,au);
printf("\nMove%dno disk from%s-->%s",n,be,en);
tow((n-1),au,be,en);
}
getch();
}
int main()
{
int di;
char *a="A",*b="B",*c="C";
clrscr();
printf("\nEnter no of disk");
scanf("%d",&di);
tow(di,a,b,c);
}
