 #include<stdio.h>
 #include<conio.h>

 void main()
  {
   int a[20],top=0,j,k=0,ch,i;
   clrscr();
   do
    {
     printf("\n Enter 1 for PUSH, 2 for POP & 3 for Exit>>");
     printf("\n\n You choose: ");
      scanf("%d",&k);

     if(k==1)
      {
       printf("\n Enter pushing item : ");
	scanf("%d",&i);
       top++;
       a[top]=i;
       printf("\n After operation elements are: ");
       for(j=1;j<=top;j++)
	printf(" %d ",a[j]);
       printf("\n");
      }

     else if(k==2)
      {
       if(top==0)
	printf("\n No element in the stack");
       else
	{
	 top=top--;
	 if(top==0)
	  printf("\n After poping no element on stack ");
	 else
	  {
	   printf("\n After operation elements are: ");
	   for(j=1;j<=top;j++)
	    printf(" %d ",a[j]);
	   printf("\n");
	  }
	}
      }

     else if(k==3)
     // goto last;
     break;
     else
      printf("\n You enter wrong key");
     printf("\n\n For reoperation on same data press `ANY KEY' otherwise `N': ");
     ch=getch();
    // clrscr();

    /* if(top==0)
      {
       printf("\n Stack is empty");
       printf("\n");
      }
     else
      {
       printf("\n After operation elements are: ");
       for(j=1;j<=top;j++)
	printf(" %d ",a[j]);
       printf("\n");
      }*/

     //last:
    }while(((ch!='N')&&(ch!='n'))&&(k!=3));
  getch();
  }
