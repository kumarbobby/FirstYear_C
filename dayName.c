#include <conio.h>
#include <stdio.h>
main()
{
	
	int d; 
	clrscr();
	printf("Enter the day number\n");
	scanf("%d",&d);
		if (d==0)
			printf("Day is sunday\n");
		else if (d==1)
			printf("Day is monday\n");	
		else if (d==2)
			printf("Day is tueday\n");
		else if (d==3)
			printf("Day is wednesday\n");
		else if (d==4)
			printf("Day is thursday\n");
		else if (d==5)
			printf("Day is friday\n");
		else if (d==6)
			printf("Day is saturday\n");
		else
			printf("Number greater than 6");
 		getch();
}