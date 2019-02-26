#include <stdio.h>
#include <stdlib.h>

int main() {
	int arr[4] = {10, 2, 3, 4};
	int *arrcp;
	size_t size = sizeof(arr);
	
	printf("%lu", sizeof(arrcp));
	
	arrcp = malloc(10*sizeof(int));
	size_t sizecp = sizeof(arrcp);
	
	printf("%lu", size);
	printf("%lu", sizecp);
	
	free(arrcp);
	return 0;
}
