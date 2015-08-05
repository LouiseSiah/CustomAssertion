#ifndef CustomAssertion_H
#define CustomAssertion_H

#include "Coordinate.h"
#include "unity.h"

#define CUSTOM_TEST_FAIL(lineNo, msg, ...)                                                   \
          {                                                                           \
            char buffer[256];                                                         \
            sprintf(buffer, msg, ## __VA_ARGS__);                                    \
            UNITY_TEST_FAIL(lineNo, buffer);                                        \
          }

#define _TEST_ASSERT_EQUAL(expected, actual)                                          \
         if(expected != actual)                                                       \
         {                                                                            \
            CUSTOM_TEST_FAIL(__LINE__, "I expect %d, but I see %d.", expected, actual);         \
         }

#define TEST_ASSERT_COORDINATE(within, x, y, z, actual)           \
                customTestAssertCoordinate(within, x, y, z, actual, __LINE__)
                
void customTestAssertCoordinate(float within, 
                                float x, 
                                float y, 
                                float z, 
                                Coordinate actual,
                                int lineNo);

#endif // CustomAssertion_H
