#include <stdio.h>
#include <stdlib.h>

int main(void) {

	float y[5],x[5] = {5, 16, 22, 3.5, 15};
	int i = 0;
	for(;i<=4;i++)
	{
		y[i] = 5 * x[i] * x[i] + 3 * x[i] + 2;
		printf("y(%.2f) = %.2f\n", x[i],y[i]);
	}

	return 0;
}