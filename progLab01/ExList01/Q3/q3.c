# include <stdio.h>
/*
 *	Read numbers in a file, sum odds and mulitply even 
 */
int main() {
	FILE *fptr;
	fptr = fopen("fileToRead.txt", "r");
	
	int sumOdds = 0;
	int prodEven = 1;
	int n;
	
	while((fscanf(fptr, "%d", &n) != EOF)){
		if(n%2 == 0){
			prodEven = prodEven*n;
		} else {
			sumOdds += n;
		}
	}
	
	printf("Sum odds: %d \nProd even: %d", sumOdds, prodEven);

	fclose(fptr);
	return 0;
}


