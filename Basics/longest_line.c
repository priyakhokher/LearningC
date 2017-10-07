#include <stdio.h>
#define MAXLINE 1000


int getline1(char s[MAXLINE], int lim){

	int c, i;

	for(i = 0; i<lim-1 && (c = getchar())!=EOF && (c !='\n'); i++ ){
		s[i] = c;
	}

	if(c == '\n'){
		s[i] = c;
		++i;
	}

	s[i] = '\0';
	return i;
}

void copy(char to[], char from[]){

	int i;
	i = 0;

	while((to[i] = from[i]) != '\0'){
		++i;
	}
}

int main(){

	int len, max;
	char line[MAXLINE];
	char longest[MAXLINE];

	max = 0;

	while((len = getline1(line, MAXLINE)) > 0)
		if(len > max){
			max = len;
			copy(longest, line);
		}
	

	if(max > 0){
		printf("\n%s\n",longest );
	}

	return 0;
}
