#include <stdio.h>

int main(){
	float x = 4.0;
	puts("Please enter the number: \n");
	scanf("%f", &x);
	printf("%.2f\n",x*2 );
	if (x*2> 5){puts("bello"); printf("In one line - wohooo\n");}

}