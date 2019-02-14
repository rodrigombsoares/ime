# include <stdio.h>
/*
 * Fibonacci by loop
 * Rodrigo Soares - IME-21
 */

int fib(int an, int am, int counter, int max) {
	if(counter < max){
		
		
		++counter;

		fib(an, am, counter, max);
		return 0;
	} else {
		an = an+am;
		printf("%d", an);
		return an;
	}
}
int main() {
	int counter=0, max, aux, an=1, am=0;
	
	printf("Enter number max ");
	scanf("%d", &max);
	
	while(counter < max){
		if(counter == max-1){
			printf("%d", an);
		}
		aux = am;
		am = an;
		an = an+aux;
		++counter;
	}
	
	return 0;
}
