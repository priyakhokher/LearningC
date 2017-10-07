#include <stdio.h>

int main(){

	int c;
	int nc =0;
	while((c=getchar())!=EOF){
		if(c == ' ' || c== '\n' || c=='\t'){
			c = ' ';
			nc++;
		}
		putchar(c);
	}
	printf("%i\n",nc );
}