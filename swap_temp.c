#include<stdio.h>
#include <conio.h>
main()
{
int a,b,c;
clrscr();
printf("Get a,b\n");
scanf("%d",&a,&b);
printf("Original values a = %d b= %d\n",a,b );
c=a;
a=b;
b=c;
printf("Swapped values a = %d b= %d\n",a,b);
getch();
}