// wap to find ceiling and floor of no 
int i, j, temp, a[5], ceiling,floor;
#include<stdio.h>
void main() {
	int i, a[5], no;
	// input array elements
	printf("Enter the 5 element in array:  ");
	for (i = 0; i < 5; i++)
		scanf("%d", &a[i]);
	// print array elements
	printf("\nArray elements are:");
	for (i = 0; i < 5; i++)
		printf("%d  ", a[i]);
	// sort array in ascending order
	for (i = 0; i < 5; i++) {
		for (j = i + 1; j < 5; j++) {
			if (a[i] > a[j]) {
				temp = a[j];
				a[j] = a[i];
				a[i] = temp;
			}

		}
	}
	printf("\nSorted array is: ");
	for (i = 0; i < 5; i++)
		printf("%d   ", a[i]);

	printf("\nEnter the no to check ceiling and floor:");
	scanf("%d", &no);
	//checking floor and ceiling logics.
	for (i = 0; i < 5; i++) {
		if (a[0] > no) {
			ceiling = a[0];
			floor = -1;
			break;
		}
		else if(a[4]<no) {
			ceiling = -1;
			floor = a[4];
			break;
		}
		else if (a[i] == no) {
			ceiling = a[i];
			floor = no;
			break;
		}
		else if(a[i]>no && a[i+1]>no) {
			ceiling = a[i + 1];
			floor = a[i];
			break;
		}
	}
	printf("\nNO= %d    floor= %d   ceiling= %d", no, floor, ceiling);


}