                /* QUEUE INSERT & DELETE*/

#include<stdio.h>
#include<conio.h>
int n,m=1,fo=0,re=0,j=0,ch,k,item,l,a[10];

void InitializeQueue()
{
	int i;
	for( i=1;i<=n;i++)
	  a[i]=0; //'0' means blank
}

void InsertQueue()
{
	printf("\n\n Enter inserting element: ");
	scanf("%d",&item);
	if( ((fo==1)&&(re==n))||(fo==re+1) )
		printf("\n\n Queue is overflowed");
	else
	{
		if(fo==0)
		{
			re=1;fo=1;
		}
		else if(re==n)
			re=1;
		else
			re++;

		a[re]=item;
		printf("\nInserted\n");
	}
}

void DeleteQueue()
{
	if(fo==0)
		printf("\nQueue is Empty\n");
	else
	{
		if(fo==re)
		{
			a[fo]=0;
			fo=0;
			re=0;
		}
		else if(fo==n)
		{
			a[fo]=0;
			fo=1;
		}
		else
		{
			a[fo]=0;
			fo++;
		}
		printf("\nDeleted\n");
	}
}

void DisplayQueue()
{
	int i;
	printf("\nQUEUE elements are");
	for(i=1;i<=n;i++)
		printf("%4d",a[i]);
	printf("\n\nFront=%d\nRear=%d",fo,re);
}

int  main()
{
	clrscr();
	printf("\nEnter the range of the QUEUE:=");
	scanf("%d",&n);
	InitializeQueue();
	do
	{
		printf("\n\n<<Enter 1 for INSERT, 2 for DELETE, 3 for DISPLAY, 4 for EXIT >>");
		printf("\n You choose: ");
		scanf("%d",&k);
		clrscr();
		switch(k)
		{
			case 1: InsertQueue();
					break;
			case 2:	DeleteQueue();
					break;
			case 3: DisplayQueue();
					break;
			case 4:	break;

			default: printf("\n\nWrong Key ! Try again");
					break;
		}

	}while(k!=4);


	return 0;
}
