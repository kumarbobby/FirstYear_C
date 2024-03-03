#include<stdio.h>
#include<conio.h>
main()
{
	int i,n,flag;
	printf("Enter the integer to check for prime\n");
	scanf("%d",&n);
	for (i=2;i<=n/2;i++)
	{
     if(n%i==0){
     printf("The Number %d is Not Prime\n",n);
     break;
     }
     else{
     	printf("The number %d is prime\n",n );
     }
	}
	getch();
}