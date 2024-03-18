/*. Check Number Is Spy Number or Not.
	
	A number is said to be a Spy number if the sum of all the digits is equal to the product of all digits. 
	Examples : 

    Input : 1412
    Output : Spy Number
    
	Explanation : 
    sum = (1 + 4 + 1 + 2) = 8
    product = (1 * 4 * 1 * 2) = 8
    since, sum == product == 8 
    */
  
#include<stdio.h>
void main() {

    int no, sum = 0, product = 1,rem;
    printf("Enter the No to check spy or not");
    scanf("%d", &no);
    int i = no;
    while (no > 0) {
        rem = no % 10;
        sum += rem;
        product *= rem;
        no /= 10;

    }
    if (sum == product){
        printf("%d is a spy number", i);
    }
    else {
        printf("%d is a spy number", i);
    }


}