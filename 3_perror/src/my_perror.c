#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

void my_perror(char *str){
	if (str!=NULL)
		fprintf(stderr,"%s : ", str);
	switch (errno){
	case EBADF:
		fprintf(stderr,"잘못된 파일 기술자\n");
		break;
	case EINPROGRESS:
		fprintf(stderr,"진행중인 오퍼레이션\n");
		break;
	case EINVAL:
		fprintf(stderr,"잘못된 프로그램 인자\n");
		break;
	case ENOENT:
		fprintf(stderr,"없는 파일 또는 디렉토리\n");
		break;
	case ERANGE:
		fprintf(stderr,"결과값이 너무 큼\n");
		break;
	case ETIMEDOUT:
		fprintf(stderr,"시간초과된 오퍼레이션\n");
		break;
	default:
		fprintf(stderr,"알 수 없는 오류\n");
		break;
	}
	
}
