#include "../header/header.h"


/**
 *This function calculates **duty cycle** for converter switches.
 * @param[in] error
 *@param[out] Dcycle
 *@returns variable "Dcycle".
*/

float Dutycycle(float error){

    /// duty cycle is calculated and used for sequence().

    float Dcycle= error/maxerror;
     printf("\nduty cycle: %f\n", Dcycle);

return Dcycle;
}


