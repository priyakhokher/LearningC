/*
Program to eva,uate face cards
Blackjack team

*/

#include <stdio.h>
#include <stdlib.h>

int main(){

	char card_name[3];
	puts("Enter card name: ");
	// below - store only two characters as strings in C have an ending sentinel character
	scanf("%2s", card_name);
	// printf("Helloooo\n");
	// printf("%i\n",card_name[0]);
	// printf("%i\n",card_name[1]);
	// printf("%i\n",card_name[2]);
	// printf("%2s\n",card_name);
	int val = 0;

	if (card_name[0] == 'K'){

		val = 10;
	}

	else if (card_name[0] == 'Q'){

		val = 10;
	}
	else if (card_name[0] == 'J'){

		val = 10;
	}
	else if (card_name[0] == 'A'){

		val = 11;
	}

	else{
		val = atoi(card_name);
		puts("yolo");
	}

	if (val > 2 && val < 7){
		printf("%i\n", val);
		puts("Count has gone up by 1") ;
	}
	

	else if (val == 10)
		puts("Count has gone down by 1");
	
	printf("The card_name is : %i\n", val);

	return 0;
}