//WAP to input basic salary of an employee and calculate it's gross salary according to foll:
// basic salary<=10000 hra=20% da-80%
// bs=20000 hra<=25% da=90%
//bs>20000 hr30% da=95%

#include<stdio.h>
#include<conio.h>

void main() {
	 int salary;
	printf("Enter the salary of Employee :");
	scanf("%d", &salary);

	(salary > 0 && salary <= 10000) ? printf("GrossSalary=%d", salary + (salary * 20/100) + (salary * 80/100)) :
	(salary > 10000 && salary <= 20000) ? printf("GrossSalary=%d", salary + (25/100 * salary) + (90/100 * salary)) :
		printf("GrossSalary=%d", salary + (30 / 100 * salary) + (95 / 100 * salary));


}