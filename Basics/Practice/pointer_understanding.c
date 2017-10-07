#include <stdio.h>

void pointers(int *address){

	// printf("%p\n",&*address ); prints the integer -decodes it as - give me the addressinteger at the address
	//int *a = &address;
	//*address *= 3;
	printf("%lu\n",sizeof(address));
	//printf("%i\n", *address);
}

int main(){

	int x = 4;
	printf("%p\n",&x);
	//*&x = 5;
	printf("%lu\n",sizeof(int) );
	printf("%i\n",x );
	pointers(&x);
	puts("end");
}