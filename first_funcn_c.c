#include<stdio.h>
#include <conio.h>
// funcn_proto
int sum();
//sum function
sum()
{
	int a,b,s;
	printf("Enter any two numbers\n");
	scanf("%d%d",&a,&b);
	s=a+b;
	return s;
}

//driver
main()
{	
	clrscr();
	printf("The sum is %d\n",sum() );
	getch();
}