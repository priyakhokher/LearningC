#include <stdio.h>
#define IN 1
#define OUT 0


int main(){


	int c, nl, nw,nc, state;
	nl = nw = nc = 0;


	while ((c = getchar())!= EOF){
		++nc;
		//printf("%i\n",nc );

		if (c == '\n'){
			++nl;
		}

		if (c == ' ' || c == '\n' || c == '\t'){

			
			state = OUT;
		}

		else if(state == OUT){

			state = IN;
			++nw;
		}

	}
	printf("\n%d\n",nc );
	printf("%i\n ",nl );
	printf("%i\n ",nw );
	printf("\n");
	return 0;
}