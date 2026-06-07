#include <stdio.h>

int main() {
	int my_array[] = {85, 55, 27, 13, 49, 1, 63, 38};
	int size_array = sizeof(my_array) / sizeof(my_array[0]);

	for (int i=0; i < size_array-1; i++) {
		int min_index = i;
		for (int j = i+1, j < size_array; j++) {
			if (my_array[j] < my_array[min_index]) {
				min_index = j;
			}
		}

		int min_value = my_array[min_index];
		for (int k = min_index; k > i; k--) {
			my_array[k] = my_array[k-1];
		}
		my_array[i] = min_value;

		printf("Sorted array: ");
		for (int i=0, i < size_array; i++) {
			printf("%d", my_array[i]);
		}
		printf("\n");

		return 0;
	}
}
