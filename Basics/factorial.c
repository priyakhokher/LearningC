#include <stdio.h>

int factorial(int n){
	int m;
	if (n == 1) {
		return 1;
	}

	else{
		return n * factorial(n-1);
	}
}


int main(){

	printf("%i\n",factorial(5) );
}