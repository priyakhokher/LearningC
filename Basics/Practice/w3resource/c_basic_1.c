#include <stdio.h>
#define MAX_NAME_LEN 20
#define DOB_LEN 10
#define PHONE_NUMBER_LEN 10
// Write a C program to print your name, date of birth. and mobile number.

int main(){
	char name[20], dob[11], phone_number[11];
	printf("%s\n","Please enter name" );
	fgets(name, MAX_NAME_LEN, stdin );
	printf("%s\n","Please enter date of birth MM/DD/YYYY" );
	fgets(dob, DOB_LEN, stdin);
	printf("%s\n", "Please enter phone number");
	fgets(phone_number, PHONE_NUMBER_LEN, stdin);
	printf("%s\n", name);
	printf("%s\n",dob );
	printf("%s\n", phone_number);
	//free(name);
	return(0);
}