#include <stdio.h>
#include <stdlib.h>

#include "sp.h"

int main( ){
	double Circle1_x, Circle1_y, Circle1_r;
	double Circle2_x, Circle2_y, Circle2_r;

	printf("Input Circle1 :\n");
	scanf("%lf %lf %lf" , &Circle1_x, &Circle1_y, &Circle1_r);
	printf("Input Circle2 :\n");
	scanf("%lf %lf %lf" , &Circle2_x, &Circle2_y, &Circle2_r);

  	func( Circle1_x, Circle1_y, Circle1_r, Circle2_x, Circle2_y, Circle2_r );

  	system("PAUSE");	
  	return 0;
}
