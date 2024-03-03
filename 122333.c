#include <stdio.h>
#include <conio.h>

main(){
	//var
	int row_num,i,j;
	clrscr();
	printf("Enter number of rows\n");
	scanf("%d",&row_num);
	//loop1
	for (int i = 0; i <  row_num; i++)	
	{
	//loop2
		for (int j = 0; j <= i; j++)
		{
			printf(" %d ",i );
		}
		printf("\n");
	}
	getch();
}