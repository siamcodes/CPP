#include <stdio.h>
void hello(void);
void age(void);

main(){
	hello();
	age();
}

void hello(void){
	printf("Hello World \n");
	printf("Design by Somkiat \n");
}

void age(void){
	int year1=2567;
	int year2=2530;
	int age = year1-year2;
	printf("AGE = %d", age);
}


