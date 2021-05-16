//스택에 데이터를 푸시
int Push(IntStack *s, int x){
	if (s->ptr >= s->max) //스택이 가득 참
		return -1;
	s->stk[s->ptr++] = x;
  return 0;
  }
  
  //스택에서 데이터를 팝
  int Pop(IntStack *s, int *x){
    if(s->ptr <= 0) // 스택이 비어 있음 
      return -1;
    *x = s->stk[s->ptr--];
    return 0;
  }

//스택에서 데이터를 피크 
int Peek(const IntStack *s, int *x){
  if(s->ptr <= 0) //스택이 비어 있음 
    return -1;
  *x = s->stk[s->ptr - 1];
  return 0;
} 

//스택 비우기
void Clear(IntStack *s){
  s->ptr = 0;
} 
