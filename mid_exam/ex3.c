#include <stdio.h>

int main() {
	int n = 0;

	while (n >= 10 || n <= 0) {
		printf("정수 입력(1~9) : ");
		scanf_s("%d", &n);
	}

	for (int i = n; i > 0; i--) {
		for (int j = i; j > 0; j--) {
			printf("%d", j);
		}printf("\n");
	}

}