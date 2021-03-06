/*
	MonteCarlo method to calcule Pi number
	Author: Victor Garcia
	Github: github.com/victorgarciareolid


*/

#include "stdafx.h"
#include <stdlib.h>
#include <time.h>
#include <cstdio>

bool isInCircle(double x, double y) {
	return (x * x + y * y) <= 1;
}


int main()
{
	int total_points = 100000000;
	int interior_points = 0;
	double x=0, y = 0;

	srand(time(NULL));

	for (int i = 0; i < total_points; i++) {
		x = ((double)rand() / RAND_MAX);
		y = ((double)rand() / RAND_MAX);
		if (isInCircle(x, y)) interior_points++;
	}
	
	printf("%i\n", interior_points);

	printf("%f\n", 4*(double)interior_points/(double)total_points);

	getchar();

    return 0;
}




