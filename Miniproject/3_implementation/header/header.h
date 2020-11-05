#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

#include<stdio.h>
#define maxerror 100


// variable

extern float iconv;

extern float iload;


extern float ibat;

extern float error_DT;


//function

extern int set_iload(int i);

extern float Dutycycle(float error);

extern void delay(float fraction);

extern void sequence(float m);

extern float error_cal();




#endif // HEADER_H_INCLUDED
