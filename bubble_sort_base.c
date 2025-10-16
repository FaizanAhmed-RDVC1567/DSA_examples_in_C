#include <stdio.h>

int main() {
	int my_arr[] = {717, 880, 394, 297, 999, 614, 508, 102, 450};
	int arr_len = sizeof(my_arr) / sizeof(my_arr[0]);

	for(int i = 0; i < arr_len-1; i++) {
		for(int j = 0; j < arr_len-i-1; j++} {
			if(my_arr[j] > my_arr[j+1]) {
				int temp = my_arr[j];
				my_arr[j] = my_arr[j+1];
				my_arr[j+1] = temp;
			}
		}
	}

	printf("Sorted array: ");
	for(int i = 0; i < arr_len; i++) {
		printf("%d", my_arr[i]);
	}
	printf("\n");

	return 0;
}
