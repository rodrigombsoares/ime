#include <stdio.h>
#include <stdlib.h>

int *copyArr(int *arr) {
	int *arrcp;
	size_t size = sizeof(arr)/sizeof(int), i;
	
	arrcp = (int*)malloc(2*sizeof(int));
	
	for(i=0; i<size; ++i){
		*(arrcp+i) = *(arr+i) ;
	}
	return arrcp;
}

int printArr(int *arr) {
	size_t size = sizeof(arr)/sizeof(int), j;

	for(j=0; j<size; ++j){
		printf("%d ", *(arr+j));
	}
	return 0;
}

int main() {
	int arr[4] = {10, 2, 3, 4};
	int *arrH1;
	
	arrH1 = copyArr(arr);
	printArr(arrH1);
	
	return 0;
}
