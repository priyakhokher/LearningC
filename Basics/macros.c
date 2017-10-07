#include <stdio.h>
#define max(A,B) ((A) > (B) ? (A) : (B))

int main(){
	int a,i,j;
	i = 0;
	j = 1;
	a = max(++i,++j);
	printf("%i\n", a);
}