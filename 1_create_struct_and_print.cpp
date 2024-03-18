//

#include<stdio.h>
#include<string.h>
struct emp
{
	int id, sal;
	char name[19];
};

void main() {
	struct emp e1;

	printf("Enter the name: ");
	gets(e1.name);
	fflush(0);

	printf("Enter the id and sal of employee: ");
	scanf("%d%d", &e1.id, &e1.sal);
	
	printf("\nThe id name and salary of employee is \n%d   %s   %d", e1.id, e1.name, e1.sal);
}
