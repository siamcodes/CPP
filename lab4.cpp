#include <stdio.h>
main(){
	int kg,cm;
	float bmi,m;
	printf("Type Kg: ") ;
	scanf("%d", &kg);
	printf("Type Cm: ");
	scanf("%d", &cm);
	m = cm*0.01;  //cm/100
	bmi = kg/(m*m);
	printf("BMI: %.3f \n", bmi);
	
	if(bmi>=30){
		printf("Very Fat");		
	}else if(bmi>=25 && bmi<=29.9){
		printf("Fat");	
	}else if(bmi>=18.6 && bmi<=24){
		printf("Normal");
	}else if(bmi<=18.5){
		printf("Too thin");
	}else{
		printf("Invalid!!");
	}
	
}
