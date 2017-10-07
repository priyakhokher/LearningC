#include <stdio.h>

int main(){
	// use Ctrl+D to send EOF
	int c;
	long nc = 0;
	char a = 'A';
	printf("%c\n",a );
	//getchar();
	//c = getchar();
	//putchar(c);
	//printf("%d",c);
	while((c = getchar()) != EOF){

		//c = getchar();
		putchar(c);
		//printf("%i\n",EOF );
		//printf("\n");
		//printf("%i\n",c != EOF );
		//++nc;
	}
		//printf("%ld\n",nc);
	return 0;
	
}
