#include <stdio.h>

int main(){

	int x = 4;
	printf("%p\n",&x );
	int *loc = &x;
	*loc = 5;
	printf("%i\n",x );
	printf("%p\n",loc );

}