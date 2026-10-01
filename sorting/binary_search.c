#include <stdio.h>

int binarySearch(int[] arr, int size, int targetVal);

int main() {
	int my_array[] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
	int my_target = 8;
	int size = sizeof(my_array) / sizeof(my_array[0]);
	
	int result = binarySearch(my_array, size, my_target);
	
	if (result != -1) {
		printf("Value %d found at index %d\n", my_target, result);
	} else {
		printf("Target not found in array.\n");
	}
	
	return 0;
}

int binarySearch(int[] arr, int size, int target_value) {
	int left = 0;
	int right = size - 1; // Size - 1 is because array indexing starts from 0.
	
	while (left <= right) {
		int mid = (left + right) / 2;
		
		if (arr[mid] == target_value) {
			return mid;
		}
		
		if (arr[mid] < target_value) {
			left = mid + 1;
		} else {
			right = mid - 1;
		}
	}
	
	return -1;
}

