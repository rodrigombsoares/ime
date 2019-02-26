#include <stdio.h>
#include <stdlib.h>


int printArr(int *arr, int size) {
	
	printf("array ");
	for(int j=0; j<size; ++j){
		printf("%d ", arr[j]);
	}
	
	printf("\n");
	return 0;
}

int merge(int *arr, int l, int m, int r) {
	int s1 = m-l+1, s2 = r-m;
	int ah1[s1], ah2[s2];
	
	// CopyArray
	for (int i=0; i<s1; ++i){
		ah1[i] = arr[i+l];
	}
	for (int j=0; j<s1; ++j){
		ah2[j] = arr[m+j+1];
	}
	

	// Actual merge
	int i = 0, j = 0, k = l;
	while(i<s1 && j<s2){
		if(ah1[i]<=ah2[j]){
			arr[k] = ah1[i];
			++i;
		} else {
			arr[k] = ah2[j];
			++j;
		}
		++k;
	}
	
	while(i<s1){
		arr[k] = ah1[i];
		++k;
		++i;
	}
	while(j<s2){
		arr[k] = ah2[j];
		++k;
		++j;
	}
	
	return 0;
}

int sort(int *arr, int l, int r) {

	if(l < r) {
		int m = (r+l)/2;


		sort(arr, l, m);
		sort(arr, m+1, r);
		
		merge(arr, l, m, r);
	}
	
	return 0;
}

int main() {
	int *arr, s;
	
	printf("Enter size of your array\n");
	scanf("%d", &s);
	
	arr = malloc(s*sizeof(int));
	
	
	
	for(int m=0; m<s; ++m){
		printf("Enter #%d number ", m+1);
		scanf("%d", &arr[m]);
	}

	sort(arr, 0, s-1);
	
	printf("\nYour ordered array\n");
	printArr(arr, s);
	return 0;
}
