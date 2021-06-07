#include "unity.h"
#include"unity_internals.h"
#include <headers.h>
#define PROJECT_NAME    "Hangman"

/* Prototypes for all the test functions */
void test_draw_platform(void);
void test_reduce_Life(void);
void test_getWord(void);
/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

/* Start of the application test */
int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_draw_platform);
  RUN_TEST(test_reduce_Life);
  RUN_TEST(test_getWord);

  /* Close the Unity Test Framework */
  return UNITY_END();
}

/* Write all the test functions */ 
void test_draw_platform(void) {
  TEST_ASSERT_EQUAL("   |=====|\n"
                     "   O     |\n"
                     "  -|-    |\n"
                     "  //     |\n"
                     "       ===\n", draw_platform(0));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL("  |=====|\n"
                     "  O     |\n"
                     " -|-    |\n"
                     "        |\n"
                     "       ===\n", draw_platform(2));
}

void test_reduce_Life(void) {
  TEST_ASSERT_EQUAL(4, reduce_Life(5));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(8, reduce_Life(9));
}

void test_getWord(void) {
  TEST_ASSERT_EQUAL("passport", getWord(0));
  /* Dummy fail*/
  TEST_ASSERT_EQUAL("potato", getWord(5));
}