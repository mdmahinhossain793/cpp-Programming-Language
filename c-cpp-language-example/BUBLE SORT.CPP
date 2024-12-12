/*Program to find the sorting data of n number*/
#include<stdio.h>
#include<conio.h>
void main()
{
int data[25],n,ptr,k,c;
clrscr();
printf("enter the range of the array element");
scanf("%d",&n);
printf("enter value\n");
for(k=1;k<=n;k++)
scanf("%d",&data[k]);
for(k=1;k<=n-1;k++)
for(ptr=1;ptr<=n-k;ptr++)
{
if(data[ptr]>data[ptr+1])
{
c=data[ptr];
data[ptr]=data[ptr+1];
data[ptr+1]=c;
}
}
printf("the sorted result:");
for(k=1;k<=n;k++)
printf("%d\n",data[k]);
getch();
}