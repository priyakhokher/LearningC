#include <stdio.h>

int main(){
	
	// struct more_info {char college[20]; char profession[20];};
	// typedef struct people { char name[20]; char place[20]; int priority; struct more_info info;} people;
	// people preshika = {"Preshika", "Mumbai", 1, {"HR", "Marketing"}};
	
	// struct people* t;
	// t = &preshika;
	// printf("%s\n",t->name );
	// printf("%s\n",preshika.name );
	// printf("%s\n",preshika.info.college );



	char name[] = "Priya";
	name[0] = 'r';
	printf("%s\n",name );
}