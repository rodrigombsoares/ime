#include <stdio.h>
#include <stdlib.h>

int sort(int *array, int start, int end) {
	int mid = (start + end)/2, j, k;
	printf("%d %d %d\n", start, end, mid );
	int *arrH1, *arrH2;
	arrH1 = (int*)malloc(mid*sizeof(int));
	arrH2 = (int*)malloc((end-mid+1)*sizeof(int));
	
	if ((end > start) && (mid>start)) {
		arrH1 = array;
		arrH2 = array + mid + 1;
		for(j=0; j<=(mid); ++j){
			printf("%d ", *(arrH1+j));
		}
		printf("\n\n");
		for(k=0; k<=(end-mid); ++k){
			printf("%d ", *(arrH2+k));
		}
		printf("\n\n\n\n");
		//printf("%d", *(arrH2+1));
		//sort(arrH1, start, mid);
		sort(arrH2, start, end-mid);
	}
	
	return 0;
}

int main() {
	int arr[10] = {10,19,100,20,37,9,1,8,3,11};
	sort(arr, 0, 9);
	return 0;
}
