#include <stdio.h>

int main(){
	int c;
	printf("%i\n",EOF );
	while((c=getchar())!=EOF) // what happens if you remove !=EOF ? :P
		// printf("%c\n",c );
		putchar(c);

}