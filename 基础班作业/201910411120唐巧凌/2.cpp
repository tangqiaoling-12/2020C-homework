#include <stdlib.h>
#include <stdio.h>


int main() {

	int a;

	while (scanf("%d", &a) != EOF) {

		int m, n;

		int found = 0;

		for (m = 1; m <= a / 2; m++) {

			for (n =m + 1; n < a; n++) {

				int sum = (m + n) * (n - m + 1) / 2;

				if (sum == a) {

					found = 1;

					int i;

					for (i =m; i <= n; i++) {

						printf("%d ", i);

					}

					printf("\n");

				}

			}

		}

		if (found == 0) {

			printf("NONE\n");

		}

	}

	return 0;

}
