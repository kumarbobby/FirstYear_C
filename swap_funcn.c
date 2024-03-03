#include<stdio.h>
#include <conio.h>
void swap(int *,int *);

void swap(*a,*b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
main()
{
	int a,b;
	clrscr();
	printf("Get a,b\n");
	scanf("%d%d",&a,&b);
	printf("Original values a = %d b= %d\n",a,b );
	swap(&a,&b);
	printf("Swapped values a = %d b= %d\n",a,b);
	getch();
}