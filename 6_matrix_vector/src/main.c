#include <iostream>
#include <vector>
int main(void){
	int n, m;
	std::cout << "행렬의 크기 n, m 입력: ";
	std::cin >> n >> m;
	
	std::vector<std::vector<int>> matrixA(n, std::vector<int>(m, 0));
	std::vector<std::vector<int>> matrixB(n, std::vector<int>(m, 0));
	
	int i, j;

	std::cout << "행렬 a의 값 입력 : " << std::endl;

	for(i = 0; i < n; i++){
		for(j = 0; j < m; j++){
			std::cin >> matrixA[i][j];
		}
	}

	std::cout << std::endl;
	std::cout <<"행렬 b의 값 입력 : " << std::endl;
	for(i = 0; i < n; i++){
		for(j = 0; j < m; j++){
			std::cin >> matrixB[i][j];
		}
	}

	std::cout << std::endl;
	std::cout <<"두 행렬의 합 : " << std::endl;
	for(i = 0; i < n; i++){
		for(j = 0; j < m; j++){
			std::cout << matrixA[i][j] + matrixB[i][j] << " ";
		}
		std::cout << std::endl;
	}

	return 0;
}
