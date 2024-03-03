#include<stdio.h>
#include<conio.h>

//defining the structure
struct employee{
	int empNo;
	char empName[30];
	char empDept[20];
	float empSalary;
} empOne;

// driver code
main(){
	clrscr();
	printf("Employee serial no.\n");
	scanf("%d",empOne.empNo);
	printf("EMployee Name\n");
	scanf("%s",empOne.empName);
	printf("Department\n");
	scanf("%s",empOne.empDept);
	printf("Salary\n");
	scanf("%f",empOne.empSalary);
	getch();
}