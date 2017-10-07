#include <stdio.h>

void to_lower(char u[]){
	int i;

	for(i = 0;u[i]!='\0'; i++){

		if(u[i] >= 'A' && u[i]<= 'Z'){
			u[i] = u[i] + 'a' - 'A';
		}
	}
	//u[i+1] = '\0';
	
}


int htoi(char s[]){

	int set,i,n;
	set = 0;
	n = 0;
	if (s[0] == '0' && (s[1] == 'x' || s[1] == 'X')){
		set = 2;
	}
	//s[] = to_lower(s);
	for(i=set; s[i]!='\0'; ++i){

		if (s[i] >= '0' && s[i] <= '9')
		n = 16*n + (s[i] - '0');
		

		else if(s[i] >= 'a' && s[i] <= 'f')
			n = 16*n + (s[i] - 'a') + 10;
		
		// else
		// 	n = 16*n + (s[i] - 'A') + 10;
		
		
	}

	//printf("%i\n",n );
	return n;
}


int main(){
	char s[] = "0x12FF";
	to_lower(s);
	printf("%s\n",s );
	printf("%i\n", htoi(s));
	return 0;
}