#include <stdio.h>
const float PI=3.14;
void circle(int r);
main(){
	int r;
	printf("Enter R:"); scanf("%d", &r);
	circle(r);
}

void circle(int r){
	float area;
	area = PI*r*r;
	printf("Circle is %.3f", area);
}
