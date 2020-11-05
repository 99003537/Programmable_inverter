
#include "../header/header.h"



/**
 *This function generates sequence of switching pulses which further generate output wavwform.
 * @param[in] m
 *@returns  nothing
 */


void sequence(float m){

   /// s1, s2, s3, s4 represent the bridge converter
    int s1, s2, s3, s4;
    float n=1.0-m;

    //half cycle
    s1=1;
    s2=1;
    delay(m*100);
    printf("half cycle sequence: %d %d \n",s1,s2);
    s1=0;
    s2=0;
    delay(n*100);
   printf("half cycle sequence: %d %d \n",s1,s2);

    //half cylce
    s3=1;
    s4=1;
    delay(m*100);
    printf("half cycle sequence: %d %d \n",s3,s4);
    s3=0;
    s4=0;
    delay(n*100);
    printf("half cycle sequence: %d %d \n",s3,s4);

}
