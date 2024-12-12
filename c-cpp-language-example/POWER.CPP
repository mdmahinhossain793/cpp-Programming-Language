#include<stdio.h>
#include<conio.h>

double power(double j,double ans){
double k;
double x=ans;

if(j==0.0){
return 1;
}


if(j<0)
{
k=j*(-1);
for(double i=1;i<k;i++)
ans*=x;

return 1/ans;

}

else{

for(double i=1;i<j;i++)
ans*=x;
return  ans ;

}}

int main(){
clrscr();
int x,y;
printf("x: ");
scanf("%d",&x);

printf("\ny: ");
scanf("%d",&y);
printf("\nx^y: %lf",power(y,x));


	getch();
	return 0;
}
