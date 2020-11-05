#include "../header/header.h"


/**
  *This function calculates error in load current and reference current and returns 'diff' variable
*@param[out] diff
*@returns variable "diff"
*/


float error_cal(){

     float diff;
     float check_sum=iload;
     float iref= 100.0;
    if(check_sum< iref){

      printf("\nload current is below safe battery current limit \n");

    }
    else{

            /// @note here **iref** is assumed to be constant and used as reference value.

        diff=iload-iref;
        ;   //error for duty cycle
       if (diff<0){diff=0.0;}
       //iconv=diff;
     //  printf("iconv: %d",iconv);

    }

return diff;
}
