                        /*quick sort*/


#include<stdio.h>
#include<conio.h>
int partition(int a[],int m,int p)
{
	int v,i,j;
	int temp;
	v=a[m];
	i=m;j=p;
	do
	{
		do
		{
			i += 1;  //i++;
		}while(a[i]< v);
		do
		{
		      j -= 1;  //j--;
		}while(a[j]>v);
		if(i< j)
		{
			temp = a[i];
			a[i] = a[j];
			a[j] = temp;
		}
	}
	while(i< j);
		a[m] =a[j];
	a[j] = v;
	return j;
}

void quicksort(int a[],int p,int q)
{
	int j;
	if(p< q)
	{
		j=partition(a,p,q+1);
		quicksort(a,p,j-1);
		quicksort(a,j+1,q);
	}
}


void main()
{
	int a[20],p,q,i,n;
	clrscr();
	printf("Enter The Amount Of Elements : ");
	scanf("%d",&n);
	printf("\nEnter elements : \n");
	for(i=0;i< n;i++)
	{
		printf("\tSlot %d = ",i+1);
		scanf("%d",&a[i]);
	}
	p=0;
	q=n-1;
	quicksort(a,p,q);
	printf("\nArray After Sorting : ");
	for(i=0;i< n;i++)
		printf("%d  ",a[i]);
	getch();
}



