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
j=n;
while(j>=k)
{
a[j+1]=a[j];
j=j-1;
}
a[k]=item;
n=n+1;
printf("data element:=\n");
for(i=1;i<=n;i++)
printf("%d",a[i]);
getch();
}

