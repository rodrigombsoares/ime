# include <stdio.h>

int main() {
	FILE *fptr;
	fptr = fopen("fileToRead.txt", "r");
	
	int number, numF = 0, numM = 0;
	float sumF = 0, avF, sumM = 0, avM;
	char sex;
	
	while((fscanf(fptr, "%c %d\n", &sex, &number) != EOF)){
		if(sex == 'F'){
			sumF += number;
			++numF;
		} else {
			sumM += number;
			++numM;
		}
	}
	
	avF = sumF/numF;
	avM = sumM/numM;
	
	if(avF>avM){
		printf("%f", avF);
	} else {
		printf("%f", avM);
	}
	
	fclose(fptr);
	return 0;
}


