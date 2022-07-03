#include <stdio.h>

int main() {
	char a, b;

	while (1) {
		printf("두 알파벳 입력 : ");
		scanf_s("%d %d", &a, &b);

		printf("%d %d", a, b);
		if (a < b)
			break;
	}

	for (int i = a; i < b + 1; i++) {
		printf("%c", i);
	}
}