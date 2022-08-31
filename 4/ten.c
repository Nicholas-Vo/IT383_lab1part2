// Nick Voss
// IT383
// 8/30/22

#include <stdio.h>

int main() {
	int numbers[10];
	int i;

	FILE *file;
	char *filename = "results.txt";

	file = fopen(filename, "w"); // will create file if none exists	

	printf("Enter ten numbers...\n");
	for (i = 0; i < 10; i++) {
		printf("> ");
		scanf("%d", &numbers[i]);
	}

	int j;

	printf("You entered:\n");
	for (j = 9; j >= 0; j--) {
		printf("%d\n", numbers[j]);
		fprintf(file, "%d\n", numbers[j]);
	}
	fclose(file);
	return 0;
}
