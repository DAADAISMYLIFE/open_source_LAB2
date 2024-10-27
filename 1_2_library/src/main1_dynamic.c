#include <stdio.h>
#include <dlfcn.h>
#include "operations.h"

int main(void){

	void *handle;
	int (*add)(int, int), (*sub)(int, int), (*mul)(int, int), (*div)(int, int);
	char *error;

	handle = dlopen("../lib/libshared.so", RTLD_LAZY);

	if(!handle){
		fputs(dlerror(), stderr);
		exit(1);
	}
	
	add = dlsym(handle, "add");
	if((error = dlerror())!=NULL){
		fprintf(stderr, "%s", error);
		exit(1);
	}
	sub = dlsym(handle, "sub");
	if((error = dlerror())!=NULL){
		fprintf(stderr, "%s", error);
		exit(1);
	}
	mul = dlsym(handle, "mul");
	if((error = dlerror())!=NULL){
		fprintf(stderr, "%s", error);
		exit(1);
	}
	div = dlsym(handle, "div");
	if((error = dlerror())!=NULL){
		fprintf(stderr, "%s", error);
		exit(1);
	}

	int a, b;
	printf("두 수를 입력해 주세요 : ");
	scanf("%d %d", &a, &b);
	
	printf("add : %d\n", (*add)(a, b));
	printf("sub : %d\n", (*sub)(a, b));
	printf("mul : %d\n", (*mul)(a, b));
	printf("div : %d\n", (*div)(a, b));

	dlclose(handle);

	return 0;
}
