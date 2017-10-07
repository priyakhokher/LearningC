#include <stdio.h>
#define IN 1
#define OUT 0


int main(){

	int c;
	int state = OUT;

	while ((c = getchar())!= EOF){
		

		if (c == '\n'){
			state = OUT;
		}

		else if (c == ' ' || c == '\t'){
			state = IN;
		}

		if (c!= ' ' && c!= '\t' && state == OUT){
			putchar(c);
		}

	}
	printf("\n");
	return 0;
}