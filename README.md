# 오픈소스 프로젝트 LAB2 실습

이 레포지토리는 오픈소스 프로젝트 교과목 과제를 위한 것입니다.

## 실행 방법
```bash
git clone https://github.com/DAADAISMYLIFE/open_source_study.git

cd <문제 번호>

make

cd exec

./<실행파일>
```

## 파일 구조
```
.
├── 1_2_library
│   ├── exec		<-- 실행 파일 디렉토리 
│   ├── include		<-- 헤더 파일 디렉토리
│   ├── lib		<-- 라이브러리 디렉토리 
│   ├── makefile	
│   └── src		<-- 소스코드 디렉토리 
├── 3_perror
│   ├── exec
│   ├── include
│   ├── lib
│   ├── makefile
│   └── src
├── 4_assert
│   ├── exec
│   ├── include
│   ├── lib
│   ├── makefile
│   └── src
├── 5_matrix
│   ├── exec
│   ├── include
│   ├── lib
│   ├── makefile
│   └── src
├── 6_matrix_vector
│   ├── exec
│   ├── include
│   ├── lib
│   ├── makefile
│   └── src
├── 7_student
│   ├── exec
│   ├── include
│   ├── lib
│   ├── makefile
│   └── src
├── 8_student_map
│   ├── exec
│   ├── include
│   ├── lib
│   ├── makefile
│   └── src
└── README.md
```

## 과제 내용

1. **사칙연산 함수 구현**
   - 덧셈 (add), 뺄셈 (subtract), 곱셈 (multiply), 나눗셈 (divide)에 대한 함수를 작성합니다.
   - 이 함수들을 이용하는 예제 프로그램을 각각 작성합니다.
   - 정적 라이브러리, 공유 라이브러리, 동적 라이브러리 방식을 이용하여 예제 프로그램을 실행시킨 결과를 보입니다.

2. **Makefile 작성**
   - C 소스 파일들을 목적 파일로 만들고, 라이브러리 또는 실행 파일로 만드는 Makefile을 작성합니다.
   - 라이브러리 관련 파일들은 서브디렉토리에 두도록 합니다.

3. **perror() 함수 구현**
   - 라이브러리 함수인 `perror()`와 동일하게 동작하는 `my_perror()` 함수를 구현합니다.
   - 이를 이용하여 예제 13에서 `perror()` 함수를 대체하여 프로그램을 실행합니다.

4. **assert() 함수 구현**
   - 라이브러리 함수인 `assert()`와 동일하게 동작하는 `my_assert()` 함수를 구현합니다.
   - 이를 이용하여 5장 예제 14에서 `assert()` 함수를 대체하여 프로그램을 실행합니다.

5. **행렬 더하기 프로그램**
   - 두 행렬의 크기를 입력받아 필요한 만큼의 메모리를 동적으로 할당하여 행렬의 내용을 저장하고 두 행렬을 더하는 프로그램을 작성합니다.

6. **C++ STL 활용**
   - 위 5번 문제를 C++ STL의 `vector` 컨테이너를 활용하여 구현합니다.

7. **학생 정보 구조체**
   - 학생 수를 입력받은 후, 학생의 이름, 중간, 기말 점수를 기록하는 구조체를 동적으로 할당받아 트리 구조체로 활용하여 트리 탐색을 할 수 있는 프로그램을 작성합니다.

8. **C++ STL의 map 활용**
   - 위의 문제를 C++ STL의 `map` 컨테이너 등을 활용하여 구현합니다.

