#include <stdio.h>

int main() {
	int n=0;

	while (1) {
		printf("���� �Է�(1~100) : ");
		scanf_s("%d", &n);
		
		if (n > 0 && n < 101) {
			break;
		}
	}
	for (int i = 1; i <= n/2; i++) {
		if (n % i == 0) {
			printf("%d ", i);
		}
	}
}



