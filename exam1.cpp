#include "stdio.h"
float readVolt();
void volt(int i, int r);

float v,i, r;  //External Variable
main(){
	printf("Hello Example By Somkiat.J\n");
	printf("\t v.Find Volt \n");
	printf("\t i.Find Current \n");
	printf("\t r.Find Resistance \n");
	char ch;
	printf("Input Choice:"); scanf("%c",&ch);
	switch (ch){
		case 'v': 
		         printf("Welcome to find Volt \n"); 
		         readVolt();
				 volt(i,r); 
				 break;
	    case 'i': printf("Welcome to find Ampare"); break;
	    case 'r': printf("Welcome to find Resister"); break;
	    default: printf("Error");
	}
				
}

float readVolt(){
	printf("Input I:"); scanf("%f",&i);
	printf("Input R:"); scanf("%f",&r);
	return i,r;   //send i ,r 
}


void volt(int i, int r){
	v = i*r;  
	printf("Volt is %.2f",v);
}
