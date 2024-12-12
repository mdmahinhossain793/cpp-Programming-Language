#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],n,k,j,i,item;
clrscr();
printf("number of array element");
scanf("%d",&n);
for(i=1;i<=n;i++)
scanf("%d",&a[i]);
printf("enter position");
scanf("%d",&k);
printf("ITEM:");
scanf("%d",&item);
item=a[k];
for(j=k;j<=n-1;j++)
a[j]=a[j+1];
n=n-1;
printf("data element:=\n");
for(i=1;i<=n;i++)
printf("%d",a[i]);
getch();
}

