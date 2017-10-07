// word count
#include <stdio.h>

/* count lines, words, characters in input*/

int main(){

	int word_count_per_line = 0;
	int new_line = 0;
	int first_word_occured = 0;
	int c;

	while((c=getchar())!=EOF){


		if (c=='\n'){
			new_line = 1;
			word_count_per_line = 0;
		}
		else if (c==' ' || c=='\t'){
			
			if(word_count_per_line==1)
			{
				new_line = 0;
				first_word_occured = 1;
			}
			else{
				new_line = 1;
				first_word_occured = 0;
			}
		}
		
		else if(new_line==1 && first_word_occured == 0){
			putchar(c);
			word_count_per_line = 1;
	}

}

}