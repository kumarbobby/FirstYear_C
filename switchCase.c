#include<stdio.h>
#include<conio.h>
main()
{
	int ch;
	printf("Enter the day number(1-7)\n");
	scanf("%d",&ch);
	switch(ch)
	{
		printf("Days of week\n");
	case 1:
		printf("Monday\n");
		break;
	case 2:
		printf("Tuesday\n");
		break;
	case 3:
		printf("Wednesday\n");
		break;
	case 4:
		printf("Thursday\n");
		break;
	case 5:
		printf("Friday\n");
		break;
	case 6:
		printf("Saturday\n");
		break;
	case 7:
		printf("Sunday\n");
		break;
	default: printf("Invalid input\n");	
	}
	getch();
}