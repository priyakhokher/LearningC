#include <stdio.h>
#define HEIGHT 7
#define WIDTH 6
// Write a C program to print a block F using hash (#), where the F has a height of six characters and width of five and four characters.

int ceil_1(int m){

	if(m%2 == 0){
		return m;
	}

	else{
		return (m + 1);
		
	}
}

int main(){

	int i = 0;
	int f = 0;
	int j;

	while(i!=HEIGHT){
		if(i ==0 || i == HEIGHT/2){

			for(j = 0; j!= WIDTH - f; j++){
				printf("%c",'#' );
			}
			f = 1;
			printf("\n");
		}

		else{
			printf("%c\n",'#' );
		}
		i += 1;
	}



	return(0);
		
}