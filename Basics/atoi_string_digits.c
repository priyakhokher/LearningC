#include <stdio.h>

int atoi(char s[]){

	int i,n;
	n = 0;


	for (i = 0; s[i]>='0' && s[i]<='9'; ++i){
		n = 10*n + (s[i] - '0');
		printf("%i\n",n );

	}
	return n;
}

int main(){

	printf("\n%i\n", atoi("37") );
	return 0;
}