/*
To access CRED programs, one needs to have a credit score of 750 or more.
 Given that the present credit score is X, determine if one can access CRED programs or not.
 If it is possible to access CRED programs, output \text{YES}YES, otherwise output \text{NO}NO.
 Input Format
 The first and only line of input contains a single integer X, the credit score.
 Output Format
 Print text{YES}YES if it is possible to access CRED programs. Otherwise, print \text{NO}NO.
 You may print each character of the string in uppercase or lowercase (for example, the
strings text{YeS}YeS, \text{yEs}yEs, \text{yes}yes and \text{YES}YES will all be treated as identical).
 Constraints
 0<=X<=1000
 Subtasks
  Subtask 1 (100 points): Original constraints.
 Sample1
 Input
 823
 Explanation:
 Output
 YES
 Since 823 > 750 , it is possible to access CRED programs.
 Sample2
 Input
 251
 Output
 No
 Explanation
 Since 251 < 750  it is not possible to access CRED Programs

 */
#include<stdio.h>
void main() {

	int creditScore;
	printf("Enter the credit score:");
	scanf("%d", &creditScore);

	if (creditScore >= 750) {
		printf("\nYES");
		//printf("\n%d >750 ,it is possible to access CRED programs.", creditScore);
	}
	else
	{
		printf("\nNO");
		//printf("\n%d < 750 ,it is not possible to access CRED Programs ", creditScore);
	}

}

