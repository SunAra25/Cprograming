#include <stdio.h>

int main() {
	int n, i;

	printf("369 369 369 start~\n");

	for (i = 1; i < 101; i++) {
		printf("�Է� > ");
		scanf_s("%d", &n);

		if (i % 3 == 0 || (i % 10) % 3 == 0 || (i % 20) % 3 == 0 || (i % 40) % 3 == 0 || (i % 50) % 3 == 0 || (i % 70) % 3 == 0 || (i % 80) % 3 == 0) {
			if (n != 0) {
				printf("�����Դϴ�!");
				break;
			}
		}
		else if (n > 10) {
			if (i / 10 == 3 || i / 10 == 6 || i / 10 == 9) {
				if (n != 0) {
					printf("�����Դϴ�!");
					break;
				}
			}
		}
		if (i != n) {
			printf("�����Դϴ�!");
			break;
		}
	}

	if (i == 100) {
		printf("�����Դϴ�!");
	}
}