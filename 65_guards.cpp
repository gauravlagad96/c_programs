/* 

Ezio can manipulate at most X number of guards with the apple of Eden.
 Given that there are Y number of guards, predict if he can safely manipulate all of them.
 Input Format
 First line will contain T, number of test cases. Then the test cases follow.
 Each test case contains of a single line of input, two integers X and Y.
 Output Format
 For each test case, print text {YES} YES if it is possible for Ezio to manipulate all the guards. Otherwise, 
print  text {NO} NO.
 You may print each character of the string in uppercase or lowercase 
(For example, the strings text {Yes} YeS, text {yEs} yEs, \text {yes}yes and \text {YES}YES will all be 
treated as identical).
 Constraints
 1<=T<=100
 1<=X<=Y
 Sample1
 _______________

 Input
 3
 5    7
 6    6
 9    1
 Explanation:
 Output
 NO
 YES
 YES
 Test Case 1: Ezio can manipulate at most 5 guards. Since there are 7 guards, he cannot manipulate 
all of them.
 Test Case 2: Ezio can manipulate at most 6 guards. Since there are 6 guards, he can manipulate all of 
them.
Test Case 3: Ezio can manipulate at most 9 guards. Since there is only 1 guard, he can manipulate the
 guard.
 
 */

#include<stdio.h>
void main() {
	int mGuards, aGuards;

	printf("Enter the number manipulate Guards and Available Guards: ");
	scanf("%d%d", &mGuards, &aGuards);

	if (mGuards < aGuards)
		printf("NO");
	else
		printf("Yes");
	

	
 }
