#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define NOT_FOUND -1
#define min(a,b) (a>b?b:a)
#define BUFLEN 255

int findf (char what, char* where, int start);
int pow_ (int base, int exp);
int eval_single (char* expression);
int evaluate (char* expression);
