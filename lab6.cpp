#include <stdio.h>
void Triangle(int base, int high);

main(){
	int b,h;
	printf("Enter Base:");  scanf("%d",&b);
	printf("Enter High:");  scanf("%d",&h);
	//Triangle(3,7);
	Triangle(b,h);
}

void Triangle(int base, int high){
	float area;
	area = 0.5*base*high;
	printf("AREA is %.2f \n", area);
}
