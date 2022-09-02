// Nick voss
// 9/1/2022

// C library function strtok
// breaks string into a series of tokens using a delimiter
//
// token = sequences of contiguous characters separated by
// any delimiter character.
//
// char *strtok (char *string, const char *delimiter)
//
// returns a pointer to the first token found in the string.
// null pointer returned if no tokens are left to retrieve

#include <stdio.h>
#include <string.h>

int main() {
	char sentence[100] = "Better-call.Saul! A great TV show.";
	char delims[20] = {'.', '-'};
	char *token;

	token = strtok(sentence, delims);

	while(token != NULL) {
		printf("Token found: %s\n", token);
		token = strtok(NULL, delims); // Token found,
	}
	return 0;
}
