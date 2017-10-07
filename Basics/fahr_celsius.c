#include <stdio.h>

int f_c_conversion(float fahr){
	int celsius;
	celsius = 5 * (fahr-32)/9;
	return celsius;

}


/* printing fahrenheit and celsius temperature for F = (0,20,...,300)*/
int main(){

	float fahr, celsius;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	fahr = lower;

	while(upper>=fahr){

		celsius = f_c_conversion(fahr);
		printf("%3.0f\t%6.2f\n", fahr, celsius );
		fahr = fahr + step;
	}

	return 0;



}