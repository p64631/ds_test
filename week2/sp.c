#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "sp.h"

void func( double Circle1_x, double Circle1_y, double Circle1_r, double Circle2_x, double Circle2_y, double Circle2_r ){
	circle_t circle_1, circle_2;
	type_t flag;
	
	circle_1.center.x = Circle1_x;
	circle_1.center.y = Circle1_y;
	circle_1.r = Circle1_r;
	circle_2.center.x = Circle2_x;
	circle_2.center.y = Circle2_y;
	circle_2.r = Circle2_r;
	
	double point1,sqrt_point1;
	point1 =  pow( (circle_1.center.x - circle_2.center.x) , 2) + 
		pow( (circle_1.center.y - circle_2.center.y) , 2);
	sqrt_point1 = sqrt(point1);
	
	if(sqrt_point1 == 0){  
		if(circle_1.r == circle_2.r){ flag=1;  }
		else { flag=2; }
	}
	else {
		double min_r =0, max_r =0;
		if( circle_1.r < circle_2.r ) { min_r = circle_1.r; max_r = circle_2.r; }
		if( circle_1.r > circle_2.r ) { min_r = circle_2.r; max_r = circle_1.r; }

		if( sqrt_point1 > circle_1.r + circle_2.r ){ flag=3; }
		else if( sqrt_point1 + min_r < max_r ){ flag=3; }
		else if( sqrt_point1 == circle_1.r + circle_2.r ){ flag=4;  }
		else if( sqrt_point1 + min_r == max_r ){ flag=4; }
		else{ flag=5;  }
	}
	switch(flag){
      case SAME_CIRCLR:
          printf("Same Circle And Have Same Center Point\n"); break;
      case SAME_CENTER:
          printf("Have Same Center Point But Not Same Circle\n"); break;
      case NO_CROSS:
          printf("No Cross Points \n"); break;
      case ONE_CROSS:
          printf("Have One Cross Points \n"); break;
      case TWO_CROSS:
          printf("Have Two Cross Points \n"); break;
      default:
          printf(" Error ");
  	}
}
