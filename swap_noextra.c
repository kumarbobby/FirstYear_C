#include<stdio.h>
#include <conio.h>
main()
{
int a,b;
clrscr();
printf("Get a,b\n");
scanf("%d",&a,&b);
printf("Original values a = %d b= %d\n",a,b );
a=a+b;
b=a-b;
a=a-b;
printf("Swapped values a = %d b= %d\n",a,b);
getch();
}