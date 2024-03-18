/*
 Chef is watching TV. The current volume of the TV is X. Pressing the volume up button of the TV remote
 increases the volume by 1 while pressing the volume down button decreases the volume by 1.
 Chef wants to change the volume from X to Y. Find the minimum number of button presses required to do
so.
 Input Format
  The first line contains a single integer TT - the number of test cases. Then the test cases follow.
  The first and only line of each test case contains two integers XX and YY - the initial volume and
final volume of the TV.
 
Output Format
 For each test case, output the minimum number of times Chef has to press a button to change the
volume from XX to YY.
 Constraints
 1<=T <=100
 1<=X<=Y<=100
 Sample1
 Input Output
 2
 50 54 4
 12 10 2
*/

#include<stdio.h>
void main() {

	int current, final;
	int diff, presses;
	printf("Enter the initial volume and final volume:");
	scanf("%d%d", &current, &final);

	if (current < final) {
		diff = final - current;  
		printf("volume incresed: %d",diff);
		

	}
	else {
		printf("volume decresed:-%d", current - final);
	}



}

