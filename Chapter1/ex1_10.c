//To count blanks, tabs and newlines

#include <stdio.h>

int main(){

	int c;
	int blanks=0;
	int newlines = 0;
	int tabs = 0;
	
	while ((c=getchar())!=EOF){

		if(c==' ')
			putchar('\\');
			putchar('b');
		// if(c=='\t')
		// 	putchar('\\');
		// 	putchar('t');
		// if(c=='\\')
		// 	putchar('\\');
		// 	putchar('\\');
		
	}

	
}