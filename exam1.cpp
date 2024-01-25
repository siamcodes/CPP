#include "stdio.h"
float readVolt();
void volt(int i, int r);

float v,i, r;
main(){
	//printf("Hello Exam");
	char ch;
	printf("Input Choice:"); scanf("%c",&ch);
	switch (ch){
		case 'v': 
		         printf("Volt"); 
		         readVolt();
				 volt(i,r); 
				 break;
	    case 'i': printf("Ampare"); break;
	    case 'r': printf("Resister"); break;
	    default: printf("Error");
	}
				
}

float readVolt(){
	printf("Input I:"); scanf("%f",&i);
	printf("Input R:"); scanf("%f",&r);
	return i,r;
}


void volt(int i, int r){
	v = i*r;
	printf("Volt is %.2f",v);
}
