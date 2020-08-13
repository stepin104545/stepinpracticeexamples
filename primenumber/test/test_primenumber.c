#include "unity.h"
#include "primenumber.h"
/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

#define true 1
#define false 0
void test_primenumber(void)
{
  TEST_ASSERT_EQUAL(true, primenumber(7));
  TEST_ASSERT_EQUAL(true, primenumber(11));
}
void test_notprimenumber(void)
{
  TEST_ASSERT_EQUAL(false, primenumber(6));
  TEST_ASSERT_EQUAL(false, primenumber(27));
}
void test_lessthantwonumber(void)
{
  TEST_ASSERT_EQUAL(false, primenumber(1));
  TEST_ASSERT_EQUAL(false, primenumber(0));
}

int test_main(void)
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_primenumber);
  RUN_TEST(test_notprimenumber);
  RUN_TEST(test_lessthantwonumber);

  /* Close the Unity Test Framework */
  return UNITY_END();
}
