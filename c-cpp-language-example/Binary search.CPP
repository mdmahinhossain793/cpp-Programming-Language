 #include<stdio.h>
 #include<CONIO.h>
 void main()
     {
      int DATA[100],ITEM,Loc,Mid,BEG,END,N;
      clrscr();
      printf("How Many Element : ");
      scanf("%d",&N);
      for(Loc=1;Loc<=N;Loc++)
	 scanf("%d",&DATA[Loc]);
      printf("Enter Searchiing :");
      scanf("%d",&ITEM);
      BEG=1;
      END=N;
      Mid=(BEG+END)/2;
      while(BEG<=END && DATA[Mid]!=ITEM)
	   {
	    if(ITEM<DATA[Mid])
	       END=Mid-1;
	    else
	       BEG=Mid+1;
	    Mid=(BEG+END)/2;
	   }
      if(DATA[Mid]==ITEM)
	{
	  Loc=Mid;
	  printf("  Data is found  ");
	  printf("\n\n The Location is : %d ",Loc);
	 }

      else
	  {
	   Loc=0;
	   printf("Data is not found : ");
	  }
      getch();
      }