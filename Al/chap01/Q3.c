#include <stdio.h>

int min4(int a, int b, int c, int d){
	int min = a;
	
	if(b<min) min = b;
	if(c<min) min = c;
	if(d<min) min = d;
	
	return min;
	}
	
int main(void){
	printf("네 정수의 최솟값을 구합니다.\n");
	printf("a: "); scanf("%d", &a);
	printf("b: "); scanf("%d", &b);
	printf("c: "); scanf("%d", &c);
	printf("d: "); scanf("%d", &d);
	
	printf("최솟값 %d\n", min4(a, b, c, d));
	return 0;
	}
