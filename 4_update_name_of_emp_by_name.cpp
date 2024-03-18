// wap to store the records of 3 employee and update the name of particular employee by name
#include<stdio.h>
struct emp {
	int id, sal;
	char name[15];
};
void display();
void updateByName();
int i, id, sal;
struct emp e[3];

void main()
{
	char name[15];
	for (i = 0; i < 3; i++)
	{
		printf("\nEnter the id name and salary of employee: ");
		scanf("%d%s%d", &e[i].id, e[i].name, &e[i].sal);
	}
	display();
	updateByName();
}

void display() {
	printf("\nRecords are:");
	for (i = 0; i < 3; i++) {
		printf("\n%d   %s   %d", e[i].id, e[i].name, e[i].sal);
	}
}

void updateByName() {
	char sname[15],nName[15];
	printf("\nEnter the name of employee : ");
	scanf("%s",sname);
	printf("\nEnter the new name of employee : ");
	scanf("%s", nName);
	for (i = 0; i < 3; i++) {
		if (strcmp(e[i].name, sname) == 0) {
			strcpy(e[i].name, nName);
			printf("\nName updated succesfully");
		}

	}
	printf("\nDisplay after update: ");
	display();
}