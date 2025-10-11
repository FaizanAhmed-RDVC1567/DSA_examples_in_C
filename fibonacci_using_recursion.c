#include <stdio.h>

int count = 2;

void fibonacci(int prev1, int prev2) {
	// We are basically attempting to print upto 19 mumbers in the Fibonacci sequence.
	if(count <= 19) {
		int newFibo = prev1 + prev2;
		printf("%d\n", newFibo);

		prev2 = prev1;
        prev1 = newFibo;
		// update the count
		count += ;
		// And recursively call with new arguments
		fibonacci(prev1, prev2);
	} else {
		return;
	}
}

int main() {
	printf("0\n");
	printf("1\n");
	fibonacci(1, 0);
	return 0;
}
