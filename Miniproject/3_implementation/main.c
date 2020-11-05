#include <stdio.h>
#include <stdlib.h>

#include "header/header.h"



/// this is current supplied by converter.
float iconv;

///this is actual value of load current.
float iload;

/// this is current supplied by battery.
float ibat;      // global variables


float error_DT;





int main(){


     //iload=10.0;

   set_iload(90);

    error_DT= error_cal();       // error calculation using current summation

         /// this statement checks ,if error calculated is in the limit.
       if(error_DT<100.0 && error_DT!=0){

         printf("\nerror is %f",error_DT);
         printf("\niconv: %f\n", error_DT);

       }

        else if(error_DT==0){

        printf("\nconverter current is: 0A  \nbattery is supplying total current, minimum error \n ");
       }

       else{
         printf("error limit exceeded, max limit is iload: 200\n");
        }




       float multiplier= Dutycycle(error_DT);   // fraction multiplier for delay

       sequence(multiplier);                    //sequence generator



     test_main();                              //test_main function calling




   return 0;
}
