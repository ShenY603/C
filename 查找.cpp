#include <stdio.h>

int main() {
	int n, k, i, j;
	int m = 0;
	int a[100] = {0};
	scanf("%d %d", &n, &k);
	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	for (j = 0; j < n; j++) {
		if (a[j] == k) {
			printf("%d ", j);
			m++;
		}
	}
	if (m == 0)
		printf("-1");

	return 0;
}