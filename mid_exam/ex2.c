#include <stdio.h>

int main() {
	int n, r=-1;
	int result = 1;

	printf("���� �Է� : ");
	scanf_s("%d", &n);

	while (r < 0) {
		printf("����Ƚ�� �Է� : ");
		scanf_s("%d", &r);
	}

	for (int i = 0; i < r; i++) {
		result *= n;
	}

	printf("result = %d", result);
}