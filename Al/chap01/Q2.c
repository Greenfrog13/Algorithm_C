#include<stdio.h>

int min3(int a, int b, int c){
	int min = a;
	
	if(b<min) min = b;
	if(c<min) min = c;
	
	return min;
}

int main(void){
	int a, b, c;
	printf("세 정수의 최솟값을 구합니다.\n");
	printf("a: "); scanf("%d", &a);
	printf("b: "); scanf("%d", &b);
	printf("c: "); scanf("%d", &c);
	
	printf("최솟값은 %d입니다.\n", min3(a, b, c));
	
	return 0;
}
