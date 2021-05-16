//int형 스택 IntStack(소스)
#include <stdio.h>
#include <stdlib.h>
#include "IntStack.h"

//스택 초기화
int Initialize(IntStack *s, int max){
	s->ptr = 0;
	if((s->stk = calloc(max, sizeof(int))) == NULL) {
		s -> max = 0; //배열의 생성에 실패
		return -1;
	} 
	s->max = max;
	return 0;
} 
