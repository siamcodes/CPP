#include <stdio.h>
main(){
	int base, high;
	float area;
	printf("Type base:");
	scanf("%d", &base);
	printf("Type high:");
	scanf("%d", &high);
	area = 0.5*base*high ;
	printf("Triangle = %.2f", area);
}
