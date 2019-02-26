# include <stdio.h>
/*
 * Fibonacci by recursion
 * Rodrigo Soares - IME-21
 */

int fib(int an, int am, int counter, int max) {
	if(counter < max){
		int aux;
		aux = am;
		am = an;
		an = an+aux;
		
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
	int max;
	printf("Enter number max ");
	scanf("%d", &max);
	
	fib(0, 1, 1, max);
	
	
	return 0;
}
