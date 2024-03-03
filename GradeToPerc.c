#include<stdio.h>
#include<conio.h>
main()
{
	float eng,hin,cpds,math;
	float per;
	clrscr();
	printf("Enter the marks of all subjects\n");
	scanf("%d%d%d%d",&eng,&hin,&cpds,&math);
	per=(eng+hin+cpds+math)/4;
	if(per>=90)
		printf("Grade A\n");
	else if(per>=80)
		printf("GradeB\n");
	else if(per>=70)
		printf("Grade C\n");
	else
		printf("Fail\n");
	getch();
}