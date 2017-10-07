#include <stdio.h>
#define MAXLEN 100

void swap(int * px, int * py){
	int temp;
	temp = *px;
	*px = *py;
	*py = temp;
}

void strcpy1(char *s, char *t){

	while((*s++ = *t++) != '\0' )
		;
}
int strlen1(char *str){
	int i;
	

	for(i = 1; *str++!='\0';i++)
		;
	
	return i;
}




void substring1(char *str,int a, int b){
	char new_string[strlen1(str)];
	int i;
	i = 0;
	int set = 0;

	while(set!=a){
		//printf("%c\n",*str++ );
		*str++;
		set++;
	}

	

	a > b ? printf("incorrect indices") : (new_string[i++] = *str++);
	

	for (i=1; a < b && *str!='\0'; a++,i++){
		new_string[i] = *str++;
	}
	new_string[i] = '\0';
	//return &new_string;
	printf("%s\n", new_string);
	
}


int strcat1(char *s, char *t){
	
	for(;*s!='\0';s++){
		
   }
		
	

	while((*s++ = *t++)!='\0')
		;
	
	return 0;
}

int strend(char *s, char *t) {


	int i, j, k;

	for (i = 0; *s!='\0'; i++){

		for(j = i; (*s++ == *t++); j++)
			;

	k = j-i;

	if(*t == '\0' && *s == '\0'){
		return 1;
	}

	else{

		while(k-- > 0){
			*s--;
		}

		while(j-- > 0){
			*t--;
		}


	}
	}

	return 0;
}




int main(){

	

	char s[100] = "I love Mumbai";
	char t[] = "I love New York";
	
	//printf("%i\n", strlen1(t));
	
	//substring1(s,2,2);

	strcat1(s,t);
	printf("%s\n",s );
	printf("%i\n",strend(s,t));
	printf("%i\n", strlen1(s));
	strcpy1(s,t);
	printf("%s\n",s );
	
	
}