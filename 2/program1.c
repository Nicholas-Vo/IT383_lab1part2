#include <stdio.h>
#include <stdlib.h>

// Nick Voss
// IT383
// 8/30/2022

int main() {
	FILE *file;
	char *filename = "nick/foo.txt";
	/* open the file for writing */
	file = fopen(filename, "w");
	if (file == NULL) {
		fprintf(stderr,	"File %s could not be opened\n", filename);
		exit(1);
	}
	/* write to the file */
	fprintf(file, "Linux is cool\n");
	fprintf(file, "Java is awesome\n");
	printf("Writing to %s...\n", filename);
	/* close the file */
	fclose(file);
}
