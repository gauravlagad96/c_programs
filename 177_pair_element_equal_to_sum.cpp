// Wap to find the pair of elements which having given sum .

#include<stdio.h>
void main() {
	int i, j, a[8], sum;
	printf("Enter the 5 elements in array:");
	for (i = 0; i <8; i++) {   // input array element
		scanf("%d", &a[i]);
	}

	printf("Enter the sum to match pair of element:");
	scanf("%d", &sum);

	printf("\nThe pairs are:");
	for (i = 0; i < 8; i++) {
		for(j=i+1;j<8;j++){
			if (a[j] + a[i] == sum) {
				printf("\n%d %d", a[i], a[j]);
			}
		}

	}

}

/*Output:->

*/