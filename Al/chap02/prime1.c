#include <stdio.h>
int main(void) {
	int i, n;
	unsigned long counter=0; //나눗셈 횟수 
	for(n=2;n<=1000;n++){
		for(i=2;i<n;i++){
			counter++;
			if(n%1==0)
				break;
		}
		if(n==i)
			printf("%d\n", n);
	}
	printf(" 나눗셈을 실행한 횟수 : %lu\n", counter);
	
	return 0;
	
}
