//큐에서 데이터를 디큐
int Deque(IntQueue *q, int *x){
  if(q->num <= 0) // 큐는 비어 있음 
    return -1;
  else{
    q->num--;
    *x = q->que[q->front++];
    if(q->front == q->max)
      q->front = 0;
    return 0;
  }
}
