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

/*
int replace (char oldchar, char newchar, char* where) {

}
*/

int pow_ (int base, int exp) {
	if (exp == 0) {
		return 1;
	}
	return base * pow_(base,exp-1);
}

int eval_single (char* expression) {

}

int evaluate (char* expression) {
	if (findf(';',expression,0)) {
		int temp = 0;
		int prev = 0;
		char* expression2 = (char*)malloc(BUFLEN);
		while ((temp = findf(';',expression,temp+1)) != NOT_FOUND) {
			memset(expression2,0,BUFLEN);
			memcpy(expression2,expression,temp);
			eval_single(expression2+prev);
			prev = temp+1;
		}
		free(expression2);
	} else {
		eval_single(expression);
	}
	return 0;
}
