#include <stdio.h>

void string_passing(char msg[]){
	//char *a = msg;
	puts(msg);
	printf("%p\n", msg);

}

int main(){

	char quote[][80] = {"Cookies make me happy",
		"baking gives me joy"};
	char quote1[] = "yolo";
	//string_passing(quote);
	//printf("%lu\n", sizeof(quote));
	//printf("%i\n",sizeof(quote[0]) );
	//printf("%s\n",quote );
}