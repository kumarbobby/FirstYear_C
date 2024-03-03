#include<stdio.h>
#include<conio.h>
main()
{
	int n,i,t;
	clrscr();
	printf("Enter any number\n");
	scanf("%d",&n);
	for(i=1;i<=10;i++)
	{
		t=n*i;
		printf("%d*%d=%d\n",n,i,t );
	}
	getch();
}