#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NOT_FOUND -1
#define min(a,b) a>b?b:a
#define BUFLEN 255

int findf (char what, char* where, int start) {
	int index = NOT_FOUND;
	int len   = strlen(where);
	for (int i = min(len,start); i < len; i++) {
		if (where[i] == what) {
			index = i;
			break;
		}
	}
	return index;
}

int replace (char oldchar, char newchar, char* where) {
	
}

int evaluate (char* expression) {
	// check if starts with >
	int temp = 0;
	if ((temp = findf(';',expression,0)) != NOT_FOUND) { // TODO make recursive call if ';' or '(' found

	}
	if ((temp = findf('>',expression,0)) != NOT_FOUND) {
		printf("%s", expression+temp);
		break;
	}
}
