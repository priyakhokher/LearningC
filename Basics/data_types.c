#include <stdio.h>

int main(){

	unsigned int a,b,c;
	a = 1;
	b = 3;
	c = a - b;
	printf("%i\n",c );
	c = 2147483649;
	printf("%i\n",c );
	int big;
	signed short small;
	big  = 32769;
	small = big;
	printf("%hd\n",small );
	small = -1;
	big = small;
	printf("%i\n",big );
	int i;
	float f;
	i = 37;
	f = *(float*)&i;
	printf("%f\n",f );
	short s;
	f = 45.0;
	s = *(short*)&f;
	printf("%hd\n",s );
	int l;
	l = 9.0;
	printf("%d\n",l );

	// Learning addition in C

}