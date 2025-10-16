#include <stdio.h>

int main() {
	int my_arr[] = {26, 32, 19, 89, 7};
	int size = sizeof(my_arr) / sizeof(my_arr[0]);
	int min_val = my_arr[0];

	for(int i = 0; i < size; i++) {
		if(my_arr[i] < min_val) {
			min_val = my_arr[i];
		}
	}

	printf("Lowest value: %d\n", min_val);
	return 0;
}
