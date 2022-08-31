// Nick Voss
// IT383
// 8/30/22

// This time with open/write/sprintf/close

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <fcntl.h>

#define BUFFER_SIZE 8192

const char* int_to_string(int input) {
	char str[BUFFER_SIZE];
	return sprintf();
}

int main() {
	int numbers[10];
	int i, output_fd;
	char *filename = "results.txt";

	file = open(filename, O_RDWR | O_CREAT);

	printf("Enter ten numbers...\n");
	for (i = 0; i < 10; i++) {
		printf("> ");
		scanf("%d", &numbers[i]);
	}

	int j;

	printf("You entered:\n");
	for (j = 9; j >= 0; j--) {
		printf("%d\n", numbers[j]);
		write(file, numbers[j], strlen(numbers[j]));
		//sprintf(file, "%d\n", numbers[j]);
	}
	
	close(output_fd);
	return 0;
}
