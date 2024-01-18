#include <stdio.h>
void bmi(int kg, int cm);
float high(int cm);
main(){
	int kg, cm;
	printf("Enter Kg:"); scanf("%d", &kg);
	printf("Enter Cm:"); scanf("%d", &cm);
	bmi(kg,cm);
}

void bmi(int kg, int cm){
	float bmi = kg/(high(cm)*high(cm));
	printf("BMI is %.2f", bmi);
}

float high(int cm){
	float m = cm*0.01;
	return m;
}


