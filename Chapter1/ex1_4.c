#include <stdio.h>

/* 
print Celsius-Fahrenheit table for fahr = 0,20,..,300; floating-point verion
*/

int main(){

	float fahr, celsius;
	int lower, upper, step;
	lower = 0;
	upper = 300;
	step = 20;
	celsius = lower;
	printf("%3s%8s", "C","F\n" );
	for(celsius=0; celsius<=upper; celsius+=step ){

		fahr = celsius*(9.0/5.0) + 32;
		
		printf("%3.0f %8.2f\n", celsius,fahr );
	}
}