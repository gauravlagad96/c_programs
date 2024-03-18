// pointes examples.


#include<stdio.h>
void main() {

	int a = 100;
	int b = 200;
	int* ptr = &b;
	
	// print memory address of a 
	printf("The memory address of a is: %u\n ", &a);   // 775617620 
	
	printf("The value of ptr is: %u ",*ptr);         // 200
  
}