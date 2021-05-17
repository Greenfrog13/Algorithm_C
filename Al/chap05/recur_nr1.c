//함수 recur (꼬리 재귀를 제거)
void recur(int n){
	Top:
		if(n>0) {
			recur (n-1);
			printf("%d\n", n);
			n = n-2;
			goto Top;
		}
}
