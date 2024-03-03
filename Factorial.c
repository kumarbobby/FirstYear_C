#include<stdio.h>
#include<conio.h>
main()
{
	int n,i,f=1;
	clrscr();
	printf("Enter any number\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		f=f*i;
	}
	printf("the fact of %d is =%d\n",n,f );
	getch();
}