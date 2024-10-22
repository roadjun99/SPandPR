#include <stdio.h>
int main() {
	int N;
	scanf("%d", &N);
	int c = N / 4;
	for (int i = 0; i < c; ++i) {
		printf("long ");
	}
	printf("int");
	return 0;
}