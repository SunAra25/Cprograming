#include <stdio.h>

int main() {
	int n, i;

	printf("369 369 369 start~\n");

	for (i = 1; i < 101; i++) {
		printf("입력 > ");
		scanf_s("%d", &n);

		if (i % 3 == 0 || (i % 10) % 3 == 0 || (i % 20) % 3 == 0 || (i % 40) % 3 == 0 || (i % 50) % 3 == 0 || (i % 70) % 3 == 0 || (i % 80) % 3 == 0) {
			if (n != 0) {
				printf("실패입니다!");
				break;
			}
		}
		else if (n > 10) {
			if (i / 10 == 3 || i / 10 == 6 || i / 10 == 9) {
				if (n != 0) {
					printf("실패입니다!");
					break;
				}
			}
		}
		if (i != n) {
			printf("실패입니다!");
			break;
		}
	}

	if (i == 100) {
		printf("성공입니다!");
	}
}