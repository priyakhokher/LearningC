// word count
#include <stdio.h>
#define IN 1 /* inside a word */
#define OUT 0 /* outside a word*/

/* count lines, words, characters in input*/

int main(){

	
	int c,nc, nl, nw,state;
	state = OUT;
	nc = nl = nw = 0;

	while((c=getchar())!=EOF){

		++nc;

		if (c=='\n'){
			++nl;
		}
		if (c==' ' || c=='\n' || c=='\t'){
			state = OUT;
			
		}
		
		else if(state==OUT){
			state = IN;
			++nw;
	}
}

	printf("chars%i\n",nc);
	printf("lines%i\n",nl);
	printf("words%i\n",nw);
}