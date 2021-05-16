// int형 큐 IntQueue(소스)
#include <stdio.h>
#include <stdlib.h>
#include "IntQueue.h"

//큐 초기화
int Initialize(Int Queue *q, int max){
	q-> num = q->front = q->rear = 0;
	if((q->que = calloc(max, sizeof(int))) == NULL) {
		q->max = 0; // 배열 생성에 실패 
		return -1;
	}
	q->max = max;
	return 0;
} 
