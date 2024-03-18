/*Check Number Is Duck Number or Not.
	
	Example :
	A Duck number is a positive number which has zeroes present in it,
	For example 3210, 8050896, 70709 are all Duck numbers. 
	Please note that a numbers with only leading 0s is not considered as Duck Number. 
	For example, numbers like 035 or 0012 are not considered as Duck Numbers.
	*/

#include<stdio.h>
void main() {

	int no, flag=0, rem;
	printf("Enter the no to check perfect no or not");
	scanf("%d", &no);
	 
	while (no!=0)
	{
		rem = no % 10; // 100%10 =0   //111%10 =1    // 2004%10 = 4
		no = no / 10;  // 100/10 =10  // 111/10 =11  //2004/10 = 200
		if (rem == 0)
		{
			flag = 1;
			break;
		  }
	}
	if (flag == 1)
	{
		printf("Duck Number");
	}
	else
	{
		printf("Not Duck Number");
	}	
	}




