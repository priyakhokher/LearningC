#include <stdio.h>

typedef struct {
	const char* place1;
	const char* place2;
	const char* place3;
} cities;

void change_city(cities *c){
	const char* temp;
	temp = c ->place1;
	c -> place1 = c ->place2;
	c ->place2 = temp;
}

int main(){

	cities my_cites = {"Mumbai", "New York", "Seattle"};
	printf("%s my love\n", my_cites.place1 );
	change_city(&my_cites);
	printf("%s my love\n", my_cites.place1);

}