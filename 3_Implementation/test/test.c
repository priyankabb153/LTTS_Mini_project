#include "unity.h"
#include "bank.h"
#include "unity_internals.h"

/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

/*struct customer c[1]={{1234,"Arpitha",22,"Hubli",9898989898}};
void test_search(void)
{
  TEST_ASSERT_EQUAL(0, search(c,1,1234));
  TEST_ASSERT_EQUAL(-1, search(c,1,0));
}*/

node* head=NULL;

void test_balance(void)
{ 
  TEST_ASSERT_EQUAL(-1, get_account_balance(head,100));
  TEST_ASSERT_EQUAL(-1, get_account_balance(head,-1));

}

int test_main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_balance);
 
  /* Close the Unity Test Framework */
  return UNITY_END(); 
}