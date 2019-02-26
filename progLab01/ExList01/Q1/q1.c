# include <stdio.h>

int main() {
	int n;
	printf("Enter number n ");
	scanf("%d", &n);
	
	int i;
	
	for(i=2; i<n; ++i) {
		if(i%2 == 0){
			printf("%d", i);
		}
	}
	return 0;
}
