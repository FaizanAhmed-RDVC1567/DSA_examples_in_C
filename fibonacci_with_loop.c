#include <stdio.h>

int main() {
	int prevNum2 = 0;
	int prevNum1 = 1;
	int newFibo;

	printf("%d\n", prevNum2);
	printf("%d\n", prevNum1);

	for(int fibo = 0; fibo < 18; fibo++) {
		newFibo = prevNum2 + prevNum1;
		printf("%d\n", newFibo);
		prevNum2 = prevNum1;
		prevNum1 = newFibo;
	}

	return 0;
}
