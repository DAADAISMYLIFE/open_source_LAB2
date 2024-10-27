#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

#define my_assert(expression) (#expression)

void my_assert(int expression){
	if(expression==0){
		fprintf(stdout, "")
		abort();
	}
	
}
