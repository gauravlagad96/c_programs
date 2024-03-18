// write a c program to create array of size 5 , store value in it and print its value.

#include<stdio.h>
void main() {

	int a[5],i;
	printf("Enter the 5 values");
	for (i = 0; i < 5; i++) {
		scanf("%d", &a[i]);

	}
	printf(" Input Values In Array are: ");
	for (i = 0; i < 5; i++) {
		printf("%d  ", a[i]);
	}

 }