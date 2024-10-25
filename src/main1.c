#include <stdio.h>
#include "operations.h"

int main(void){
	int a, b;
	printf("두 수를 입력해 주세요 : ");
	scanf("%d %d", &a, &b);
	
	printf("add : %d\n", add(a, b));
	printf("sub : %d\n", sub(a, b));
	printf("mul : %d\n", mul(a, b));
	printf("div : %d\n", div(a, b));

	return 0;
}
