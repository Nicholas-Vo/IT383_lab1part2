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

int main() {
	int numbers[10];
	int i, output_fd;
	char *filename = "results.txt";
	output_fd = open(filename, O_RDWR | O_CREAT); // output file's file descriptor 

	printf("Enter ten numbers...\n");
	for (i = 0; i < 10; i++) {
		printf("> ");
		scanf("%d", &numbers[i]);
	}

	printf("You entered:\n");
	int j;
	for (j = 9; j >= 0; j--) {
		printf("%d\n", numbers[j]);
		char buffer[25];
		sprintf(buffer, "%d\n", numbers[j]); // Load number into buffer. Turns int into char?
		write(output_fd, buffer, strlen(buffer)); // write to file. strlen() potentially dangerous
	}
	
	close(output_fd);
	return 0;
}
