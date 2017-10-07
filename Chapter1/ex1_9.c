//Replace multiple blanks by one

#include <stdio.h>

int main(){
	int c;
	int space_count = 0;
	while((c=getchar())!=EOF){
		
		if((c==' ') || (c=='\t'))
			space_count+=1;
		else{
			putchar(c);
			space_count=0;
		}

		if (space_count==1)
			putchar(' ');
		
		
		
	}
}