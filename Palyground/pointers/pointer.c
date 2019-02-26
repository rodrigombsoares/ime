#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int *ptr, i, j;
	ptr = malloc(2*sizeof(int));
	
	for(j=0;j<2;++j){
		*(ptr+j) = 8;
	}
	
	for(i=0;i<10000;++i){
		printf("%d ", *(ptr+i));
	}
	
	return 0;
}
