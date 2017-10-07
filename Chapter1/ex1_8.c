//To count blanks, tabs and newlines

#include <stdio.h>

int main(){

	int c;
	int blanks=0;
	int newlines = 0;
	int tabs = 0;

	while ((c=getchar())!=EOF){

		if(c==' ')
			blanks+=1;
		if(c=='\t')
			tabs+=1;
		if(c=='\n')
			newlines+=1;
	}

	printf("Blanks%i\n", blanks);
	printf("Tabs%i\n", tabs );
	printf("NewLines%i\n", newlines);
}