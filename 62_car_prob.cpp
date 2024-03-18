/*
Chef has to travel to another place. For this, he can avail any one of two cab services.
  The first cab service charges XX rupees.
  The second cab service charges YY rupees.
 Chef wants to spend the minimum amount of money. Which cab service should Chef take?
 Input Format
  The first line will contain TT - the number of test cases. Then the test cases follow.
  The first and only line of each test case contains two integers XX and YY - the prices of first and
second cab services respectively.
 Output Format
 For each test case, output FIRST if the first cab service is cheaper, output SECOND if the second cab
service is cheaper, output ANY if both cab services have the same price.
 You may print each character of FIRST, SECOND and ANY in uppercase or lowercase (for
example, any, aNy, Any will be considered identical).
 Constraints
 1<=T<=100
 1<X<Y<=100
 Sample 1:
 Input Output:
 3
 30 65        First
 42 42        Any
 90  50       Second
 Explanation:
 Test case 11: The first cab service is cheaper than the second cab service.
 Test case 22: Both the cab services have the same price.
 Test case 33: The second cab service is cheaper than the first cab service.

*/

#include<stdio.h>

void main() {


	int cab1, cab2;


	printf("Enter the car prices:");
	scanf("%d%d",&cab1,&cab2);
	
	if (cab1 < cab2 ) {
		printf("first");
	}
	else if (cab1 > cab2) {
		printf("second");
	}
	else if (cab1==cab2) {
		printf("Any");
	}
	else {

	}


}