#ifndef _SP_H_
#define _SP_H_

typedef struct{
   double x , y ;
}point_t;

typedef struct{
   point_t center;
   double r ;
}circle_t;

typedef enum{
    SAME_CIRCLR = 1,
    SAME_CENTER,
    NO_CROSS,
	ONE_CROSS,
	TWO_CROSS
}type_t;

#endif
