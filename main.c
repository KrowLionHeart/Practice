#include <stdio.h>
#include <stdlib.h>
#include "main.h"

// gcc -o main main.c; ./main

int main(){
//	printf("Hello World\n");
//	printf("Bucky is awesome\n");
//	helloName();
//	ageCalculator();
	return 0;
}

//Conversion Characters
int helloName(){
	printf("Hello World\n");
	printf("What is your name?\n");
	scanf("%s", name);
	printf("%s is awesome\n",name);
	return 0;
}


int ageCalculator(){
	printf("What is your birth day?\n");
	scanf("%d", &modDay);
	printf("What is your birth month?\n");
	scanf("%d", &modMonth);
	printf("What is your birth year?\n");
	scanf("%d", &birthYear);
	currentYear = 2019;
	day = modDay - 9;
	month = modMonth - 9;


	if (month<0){
		correction=0; 
	}
	else 
		if (day<=0){
			correction=0;
		}
	else correction = 1;

	age = currentYear - birthYear - correction;
	printf("%d\n", age);
}