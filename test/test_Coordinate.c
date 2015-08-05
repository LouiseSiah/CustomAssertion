#include "unity.h"
#include "Coordinate.h"
#include "CustomAssertion.h"

void setUp(void){}

void tearDown(void){}

void test_setCoordinate(void)
{
  Coordinate coor;
	setCoordinate(&coor, 1.1, 2.2, 3.3);

  
  TEST_ASSERT_COORDINATE(0.00001, 1.5, 2.6, 3.7, coor);
}

void test_linkedList(void)
{
  //...
  
  int expected[] = {1, 2, 3};

    TEST_ASSERT_LINKED_LIST(expected, list);
}
