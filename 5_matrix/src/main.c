#include <stdio.h>
#include <stdlib.h>
int main(void){
	int n, m;
	int **matrixA;
	int **matrixB;
	printf("행렬의 크기 n, m 입력: ");
	scanf("%d %d", &n, &m);
	
	matrixA= (int **)malloc(n*sizeof(int*));
	matrixB= (int **)malloc(n*sizeof(int*));
	
	int i, j;
	for(i = 0; i < n; i++){
		matrixA[i] = (int*)malloc(m*sizeof(int));
		matrixB[i] = (int*)malloc(m*sizeof(int));
	}

	printf("행렬 a의 값 입력 : \n");

	for(i = 0; i < n; i++){
		for(j = 0; j < m; j++){
			scanf("%d", &matrixA[i][j]);
		}
	}

	printf("\n");
	printf("행렬 b의 값 입력 : \n");
	for(i = 0; i < n; i++){
		for(j = 0; j < m; j++){
			scanf("%d", &matrixB[i][j]);
		}
	}

	printf("\n");
	printf("두 행렬의 합 : \n");
	for(i = 0; i < n; i++){
		for(j = 0; j < m; j++){
			printf("%2d ", matrixA[i][j] + matrixB[i][j]);
		}
		printf("\n");
	}

	for(i = 0; i < n; i++){
                free(matrixA[i]);
                free(matrixB[i]);
        }

	free(matrixA);
	free(matrixB);
	
	return 0;
}
