#include <stdio.h>
#include <stdlib.h>

int main() {
	int i, n, *arr;
	printf("Enter the number of elements ");
	scanf("%d", &n);
	arr = (int*) malloc(n*sizeof(int));
	
	if(arr == NULL)
	{
		printf("Error! Couldn't allocate memory");
		return(1);
	} else {
		for(i=0; i<n; ++i){
			printf("Enter %d number: ", i+1);
			scanf("%d", arr + i);
		}
		for(i=0; i<n; ++i){
			printf("%d", *(arr + i));
		}
	}
	
	free(arr);
	return 0;
}
