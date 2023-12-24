#include <stdio.h>

int main() {
	int n = 100;
	int i, t1 = 0, t2 = 1, nextTerm;

	printf("Fibonacci Series: ");

	for (i = 1; i <= n; ++i) {
		printf("%d, ", t1);
		nextTerm = t1 + t2;
		t1 = t2;
		t2 = nextTerm;
	}

	return 0;
}
