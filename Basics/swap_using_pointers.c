#include <stdio.h>

void swap(int * px, int * py){
	int temp;
	temp = *px;
	*px = *py;
	*py = temp;
}

int main(){

	int x,y;
	x = 3;
	y = 4;
	printf("%i %i\n",x,y );
	swap(&x, &y);
	printf("%i %i\n",x,y );

}