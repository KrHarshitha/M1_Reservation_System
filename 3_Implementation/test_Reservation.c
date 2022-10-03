#include "unity.h"
#define PROJECT_NAME "Reservation_system"
/* Protypes for all the test functions */
/**
 * @brief testing function reservation system
 * 
 */
extern void test_Reservation();
/* Required by the unity test framework */
void setUp(void)
{
}
/* Required by the unity test framework */
void tearDown(void)
{
}
/* Start of the application test */
int main(void){
    /* Initiate the unity test framework */
    UnityBegin(NULL);
    /* Run test functions */
    RUN_TEST(test_Reservation);
    /* Close the unity test framework */
    return (UnityEnd());
}
