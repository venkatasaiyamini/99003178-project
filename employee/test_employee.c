#include "unity.h"
#include "emp.h"
/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

void test_employee_add(void)
{
  TEST_ASSERT_EQUAL(1, emp_id());
  TEST_ASSERT_EQUAL(employee1, name());
  TEST_ASSERT_EQUAL(25, age());
  TEST_ASSERT_EQUAL(delhi, address());
  TEST_ASSERT_EQUAL(20000, salary());
  TEST_ASSERT_EQUAL(2, year-of-experience());
  TEST_ASSERT_EQUAL(associate, post());
  TEST_ASSERT_EQUAL(2, emp_id());
  TEST_ASSERT_EQUAL(employee2, name());
  TEST_ASSERT_EQUAL(27, age());
  TEST_ASSERT_EQUAL(mumbai, address());
  TEST_ASSERT_EQUAL(300000, salary());
  TEST_ASSERT_EQUAL(5, year-of-experience());
  TEST_ASSERT_EQUAL(trainee associate, post());
   TEST_ASSERT_EQUAL(3, emp_id());
  TEST_ASSERT_EQUAL(employee3, name());
  TEST_ASSERT_EQUAL(28, age());
  TEST_ASSERT_EQUAL(chennai, address());
  TEST_ASSERT_EQUAL(25000, salary());
  TEST_ASSERT_EQUAL(5, year-of-experience());
  TEST_ASSERT_EQUAL(trainee associate, post());

}
void test_employee_display(void)
{
   TEST_ASSERT_EQUAL(1, emp_id(1));
  TEST_ASSERT_EQUAL(employee1, name(employee1));
  TEST_ASSERT_EQUAL(25, age(25));
  TEST_ASSERT_EQUAL(delhi, address(delhi));
  TEST_ASSERT_EQUAL(20000, salary(20000));
  TEST_ASSERT_EQUAL(2, year-of-experience(2));
  TEST_ASSERT_EQUAL(associate, post(associate));
}
void test_employee_delete(void)
{
   TEST_ASSERT_EQUAL(3, emp_id(3));
  TEST_ASSERT_EQUAL(employee3, name(employee3));
  TEST_ASSERT_EQUAL(28, age(28));
  TEST_ASSERT_EQUAL(chennai, address(chennai));
  TEST_ASSERT_EQUAL(25000, salary(25000));
  TEST_ASSERT_EQUAL(5, year-of-experience(5));
  TEST_ASSERT_EQUAL(trainee associate, post(trainee associate));
}
void test_employee_modify(void)
{
   TEST_ASSERT_EQUAL(5, emp_id(1));
  TEST_ASSERT_EQUAL(employee5, name(employee1));
  TEST_ASSERT_EQUAL(27, age(25));
  TEST_ASSERT_EQUAL(pune, address(delhi));
  TEST_ASSERT_EQUAL(30000, salary(20000));
  TEST_ASSERT_EQUAL(4, year-of-experience(3));
  TEST_ASSERT_EQUAL(associate, post(engineer));
}
void test_employee_search(void)
{
   TEST_ASSERT_EQUAL(2, emp_id(2));
  TEST_ASSERT_EQUAL(employee2, name());
  TEST_ASSERT_EQUAL(27, age());
  TEST_ASSERT_EQUAL(mumbai, address());
  TEST_ASSERT_EQUAL(30000, salary());
  TEST_ASSERT_EQUAL(5, year-of-experience());
  TEST_ASSERT_EQUAL(trainee associate, post());
}

int test_main(void)
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST( test_employee_add(void));
  RUN_TEST(test_employee_display(void));
  RUN_TEST(test_employee_delete(void));
   RUN_TEST(test_employee_modify(void));
  RUN_TEST(test_employee_search(void));


  /* Close the Unity Test Framework */
  return UNITY_END();
}
