#include<stdio.h>
#include<conio.h>
main()
{
	int n,rev=0,r,temp;
	clrscr();
	printf("Enter any number\n");
	scanf("%d",&n);
	temp=n;
	while(n!=0){
		r=n%10;
		rev=rev*10+r;
		n=n/10;
	}
	printf("The reverse of %d is %d\n",temp,rev
	 );
	getch();
}