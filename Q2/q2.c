# include <stdio.h>

/*
 * Recursive function to print even numbers
 * Rodrigo Soares - IME-21 
 */
int even(int a, int n) {
	if(a != n){
		if(a%2 == 0){
			printf("%d", a);	
		}
		++a;
		even(a, n);
	}
	return 0;  
}

int main() {
	int n;
	printf("Enter number n ");
	scanf("%d", &n);
	
	even(0, n);
	return 0;
}

