// // writing first c program

// #include <stdio.h>

// int main(){

// 	printf("Hello worl\\d\n");
// 	return 0;
// }

#include <stdio.h>

int main(){

	int decks;
	puts("Enter number of decks");
	scanf("%i", &decks);
	if(decks<=0){
		printf("Not a valid number of decks");
		return 1;
	}

	printf("The total number of cards are %i\n", (decks*52) );
	return 0;
}