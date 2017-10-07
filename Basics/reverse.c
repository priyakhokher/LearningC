#include <stdio.h>
#include <string.h>

void print_reverse(char *s){
	size_t len = strlen(s);
	printf("%zu\n",len );
	char *t = s + len - 1;
	while(t >= s){
		printf("%c\n",*t );
		t = t-1;

	}

}

int main(){

	char your_string[10]; //= "p";
	fgets(your_string,10,stdin);
	print_reverse(your_string);
	
}