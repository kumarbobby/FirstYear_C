#include<stdio.h>
#include<conio.h>
main()
{
	int n,sum=0,r,temp;
	clrscr();
	printf("Enter any number\n");
	scanf("%d",&n);
	temp=n;
	while(n!=0){
		r=n%10;
		sum=sum+r;
		n=n/10;
	}
	printf("The sum of digits of %d is %d\n",temp,sum);
	getch();
}