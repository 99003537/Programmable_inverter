#include "../header/header.h"
#include "../unity/unity.h"
#include "../unity/unity_internals.h"
#include<stdio.h>



//testing file
///Unity framework requires this function (works as a constructor for a test)
void setUp(){}

///Unity framework requires this function(works as a destructor for a test)
void tearDown(){}

/**
*this function checks the value calculted by Dutycycle() function
* @param [in/out] No parameters
*/
void test_Duycycle(void){                  //test function1

    printf("\ntest_Dutycycle executed\n");

    TEST_ASSERT_EQUAL(50, 100*Dutycycle(50));

    TEST_ASSERT_EQUAL(100, 100*Dutycycle(100));

}




/**
* this function checks the 'iload' set by by function set_iload.
* @param [in/out] No parameters
*/

void test_set_iload(void){      //test function 2


  printf("\ntest_set_iload executed\n");

    TEST_ASSERT_EQUAL(100, set_iload(100));

    TEST_ASSERT_EQUAL(150, set_iload(150));

}



/**
* this fuction runs test for the project.
* @param nothing
* @returns UNITY_END()
*/
int test_main(void){


//starting unity  process

    UNITY_BEGIN();

// testing the function

    RUN_TEST(test_Duycycle);

    RUN_TEST(test_set_iload);


//end of tetsing

    return UNITY_END();
}
