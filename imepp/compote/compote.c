#include<stdio.h>

int main() {
	int a, b, c, fruits=0;
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	
	while(a!=0 && b!=0 && c!=0){
		if(a - 1 >= 0){
			a = a - 1;
		} else {break;}
		if(b - 2 >= 0){
			b = b - 2;
		} else {break;}
		if(c - 4 >= 0){
			c = c - 4;
		} else {break;}
		fruits = fruits + 7;
	}
	
	printf("%d", fruits);
	
	return 0;
}
