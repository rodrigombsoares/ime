#include<stdio.h>

int zeroArr(int arr[]) {
	int j;
	for(j=0; j<10; ++j){
		arr[j] = 0;
	}
	return 0;
}

int main() {
	int N, M, aux, ansAux = 0, i;
	int arr[10] = {0};
	
	while(scanf("%d %d", &N, &M) != EOF){
		for(i=N; i<=M; ++i){
			aux = i;
			zeroArr(arr);
			while(aux>0){
				++arr[aux%10];
				if(arr[aux%10]>1){
					++ansAux;
					break;
				} else {
					aux = aux/10;
				}
			}
			
		}
		printf("%d\n", M+1-N-ansAux);
		ansAux = 0;
	}

	return 0;
}
