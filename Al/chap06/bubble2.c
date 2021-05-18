// 버블 정렬 (버전 2: 교환 횟수에 따라 정렬 작업을 멈춥니다.
void bubble(int a[], int n){
	int i, j;
	for(i=0;i<n-1;i++){
		int exchg = 0; // 패스에서 시도한 교환 횟수 
		for(j=n-1;j>i;j--)
			if(a[j-1] > a[j] ){
				swap(int, a[j-1], a[j]);
				exchg++;
			}
		if(exchg == 0) break; // 교환이 수행되지 않았다면 정렬을 멈춥니다. 
	}
}
