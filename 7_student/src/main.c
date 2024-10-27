#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <search.h>

#define MAX_LEN 20

struct node{
	char *name;
	int g_mid;
	int g_fin;
};

int compare(const void* cp1, const void* cp2){
	return strcmp(((struct node*)cp1)->name, ((struct node*)cp2)->name);
}

void print_node(const void *, VISIT, int);

int main(void){

	// 최대 학생 수 동적으로 할당
	char *name_table;
	struct node *stud_table;
	struct node *root = NULL;
	int n;
	printf("최대 학생 수 : ");
	scanf("%d", &n);
	name_table = (char *)malloc(n * sizeof(char) * MAX_LEN);
	stud_table = (struct node*)malloc(n * sizeof(struct node));

	// 초기화
	char *curr_name_ptr = name_table;
	struct node *curr_stud_ptr = stud_table;
	struct node **ret;
	int i = 0;

	while(scanf("%s %d %d", curr_name_ptr, &curr_stud_ptr->g_mid, &curr_stud_ptr->g_fin) != EOF && i++ < n){
		curr_stud_ptr->name = curr_name_ptr;
		ret = (struct node **)tsearch( (void *) curr_stud_ptr, (void **)&root, compare);
		printf("\"%s\"님이 ", (*ret)->name);

		if(*ret == curr_stud_ptr)
			printf("트리에 추가되었습니다.\n");
		else
			printf("트리에 이미 존재합니다.\n");

		curr_name_ptr += strlen(curr_name_ptr)+1;
		curr_stud_ptr++;
	}

	twalk((void *)root, print_node);
}

void print_node(const void *stud_ptr, VISIT order, int level){
	if(order == preorder || order == leaf)
		printf("이름 = %-20s, 중간고사 = %d, 기말고사 = %d\n", (*(struct node**)stud_ptr)->name, (*(struct node**)stud_ptr)->g_mid, (*(struct node**)stud_ptr)->g_fin);
}
