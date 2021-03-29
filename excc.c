#include "interpreter.h"

int main (int argc, char** argv) {

	FILE* fp;
	char buffer[BUFLEN];

	if ((fp = fopen("main.exc", "r")) == NULL) {
		printf("error opening file!\n");
		exit(1);
	}

	while(fgets(buffer, BUFLEN, fp)) {
		int temp = 0;
		if ((temp = findf('\n',buffer,0)) != NOT_FOUND) {
			buffer[temp] = '\0';
		}
	    evaluate(buffer);
	}
}
