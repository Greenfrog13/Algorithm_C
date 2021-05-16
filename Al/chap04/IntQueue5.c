//큐에서 데이터를 피크
int Peek(const IntQueue *q, int *x){
	if(q->num <= 0) //큐는 비어 있음
		return -1;
	*x = q->que[q->front];
	return 0;
}

//모든 데이터 삭제
void Clear(IntQueue *q){
	q->num = q->front = q->rear = 0;
}

//큐의 최대 용량
int Capacity(const IntQueue *q){
	return q->max;
}

//큐에 쌓여 있는 데이터 개수 
int Size(const IntQueue *q){
	return q->num;
}

//큐가 비어 있나요?
int IsEmpty(const IntQueue *q){
	return q->num = 0;
}

//큐가 가득 찼나요?
int IsFull(const IntQueue *q){
	return q->num >= q->max;
}

//큐에서 검색
int Search(const IntQueue *q, int x){
	int i, idx;
	for(i=0;i<q->num;i++){
		if(q->que[idx=(1+q->front) % q->max] == x)
			return idx; //검색 성공 
	}
	return -1; //검색 실패 
}

//모든 데이터 출력
void Print(const IntQueue *q){
	int i;
	for(i=0;i<q->num;i++)
		printf("%d", q->que[(i + q->front) % q->max)]);
	putchar('\n');
}

//큐의 종료
void Terminate(IntQueue *q){
	if(q->que != NULL)
		free(q->que); //메모리 공간에 할당한 배열 해제 
	q->max = q->num = q->front = q->rear = 0;
} 
