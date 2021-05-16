//큐에 데이터를 인큐
int Enque(IntQueue *q, int x){
	if(q->num >= q->max)
    return -1; //큐가 가득 참
  else{
    q -> num++;
    q->que[q->rear++] = x;
    if(q->rear == q->max)
      q->rear = 0;
    return 0;
  }
} 
