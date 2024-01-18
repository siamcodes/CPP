#include <stdio.h>
float square(int width, int high);

main(){
	printf("SQUARE is %.2f", square(2,5));
}

float square(int width, int high){
	float area ;
	area = width * high;
	return area;
}


