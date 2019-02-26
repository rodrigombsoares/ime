#include<stdio.h>
#include<math.h>

#define PI 3.14159265

int main(){
	double n, r, R, alpha;
	
	scanf("%lf %lf", &n, &r);
	alpha = PI/n;
	R = r*sin(alpha)/(1-sin(alpha));
	
	printf("%lf", R);
	
	return 0;
}
