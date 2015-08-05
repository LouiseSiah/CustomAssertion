#include "CustomAssertion.h"

void customTestAssertCoordinate(float within, 
                                float x, 
                                float y, 
                                float z, 
                                Coordinate actual,
                                int lineNo)
{
  // UNITY_TEST_ASSERT_FLOAT_WITHIN(within, x, actual.x, lineNo, NULL);
  // UNITY_TEST_ASSERT_FLOAT_WITHIN(within, y, actual.y, lineNo, NULL);
  // UNITY_TEST_ASSERT_FLOAT_WITHIN(within, z, actual.z, lineNo, NULL);
  if(!(x - within <actual.x) && !(actual.x > x + within ))
    CUSTOM_TEST_FAIL(lineNo, "expected x = %f, but was %f.", x, actual.x);
  if(!(y - within <actual.y) && !(actual.y > y + within ))
    CUSTOM_TEST_FAIL(lineNo, "expected y = %f, but was %f.", y, actual.y);
  if(!(z - within <actual.z) && !(actual.z > z + within ))
    CUSTOM_TEST_FAIL(lineNo, "expected z = %f, but was %f.", z, actual.z);
  
}