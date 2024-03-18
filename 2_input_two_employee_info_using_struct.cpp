#include<stdio.h>

struct emp
{
	int id, sal;
	char name[19];
};

void main() {
	printf("The size of struct is %d ", sizeof(struct emp));
	struct emp e1,e2;

	printf("\nEnter the name of emp1: ");
	gets(e1.name);
	fflush(0);

	printf("\nEnter the id and sal of employee 1: ");
	scanf("%d%d", &e1.id, &e1.sal);
	fflush(0);

	printf("\nEnter the name of emp2: ");
	gets(e2.name);
	fflush(0);

	printf("\nEnter the id and sal of employee2: ");
	scanf("%d%d", &e2.id, &e2.sal);
	fflush(0);
	if (e1.sal > e2.sal)
		printf("\nThe id name and salary of employee 1 is \n%d   %s   %d", e1.id, e1.name, e1.sal);
	else if (e1.sal < e2.sal)
		printf("\nThe id name and salary of employee 2 is \n%d   %s   %d", e2.id, e2.name, e2.sal);
	else
		printf("\nThe salary of employees are same");

}