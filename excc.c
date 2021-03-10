#include "excc.h"

int main (int argc, char** argv) {

	FILE* fp;
	char buffer[BUFLEN];

	if ((fp = fopen("main.exc", "r")) == NULL) {
		printf("error opening file!\n");
		exit(1);
	}

	while(fgets(buffer, BUFLEN, fp)) {
	    evaluate(buffer);
	}
}
