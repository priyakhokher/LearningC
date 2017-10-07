#include <stdio.h>

/* 
print Fahrenheit-Celsius table for fahr = 300,280,...,0; floating-point verion
*/

int main(){

	float fahr, celsius;
	int lower, upper, step;
	lower = 0;
	upper = 300;
	step = 20;
	fahr = upper;
	printf("%3s%8s", "F","C\n" );
	for(fahr=upper; fahr>=lower; fahr-=step ){

		celsius = (5.0/9.0) * (fahr - 32);
		
		printf("%3.0f %8.2f\n", fahr,celsius );
	}
}