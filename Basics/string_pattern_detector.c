#include <stdio.h>
#define MAXLINE 1000

int getline1(char line[], int lim);
int strindex(char source[], char dest[]);


char pattern[] = "ould";

int main (){

	char line[MAXLINE];
	int found = 0;

	while(getline1(line, MAXLINE) > 0 ){
		if (strindex(line,pattern)>=0){
			printf("%s\n", line);
			found++;
		}}
	return found;
	}


int getline1(char s[], int lim){

	int c,i;
	i = 0;

	while(--lim>0 && (c=getchar())!=EOF && c!='\n')
		s[i++] = c;

	if(c=='\n'){
		s[i++] = c;
	}
	s[i] = '\0';
	return i;

}

int strindex(char s[], char t[]){

	int rightmost = -1;
	int i,j,k;
	
	for(i =0; s[i] !='\0'; i++){
		//printf("%c\n",s[i] );
		
		for(j=i, k=0; t[k]!='\0' && s[j]==t[k]; j++,k++){
			//printf("%i\n",j );
		
		}
		
		if(t[k]=='\0'){
			rightmost = i;
			//return i;
		}
	


	}
	printf("%d\n", rightmost);
	return rightmost;


}