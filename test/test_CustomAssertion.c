#include "unity.h"
#include "CustomAssertion.h"
#include <stdio.h>
                                                                      //become one line for one back slash
#define PRINT_MSG(x)    printf("%s, I am at line %d\n", x, __LINE__) //header file include in preproocessor

void setUp(void){}

void tearDown(void){}

void test_assert_equal(int v1, int v2, int lineNo)
{
  printf("At line (%d): I don't get what is expected\n", lineNo);
}

void test_test_customAssert(void)
{
	printf("current line no is: %d\n", __LINE__);
  printf("current file name is: %s\n", __FILE__);

  // while(1)                                                                    //This two line
    // _UNITY_TEST_FAIL("I expect %d, but I see %d.", expected, actual);         // is going to replace
                                                                              // //the paragraph below
  // while(1){
          // {                                                                           \
            // char buffer[256];                                                         \
            // sprintf(buffer, msg, ## __VA_ARGS__);                                    \
            // UNITY_TEST_FAIL(__LINE__, buffer);                                        \
          // }
          // }

  PRINT_MSG("This is a message.... what do you think?\n");  //PRINT_MSG(x)    printf("%s\n", x)
//  printf("%s\n,I am at line %d\n", "This is a message.... what do you think?\n", 22);

 // test_assert_equal(2, 5, __LINE__);

  CUSTOM_TEST_FAIL(__LINE__, "fjfjfj %f, %d, %s\n", 678.7676, 234, "hello");
  _TEST_ASSERT_EQUAL(2, 5);

  //TEST_ASSERT_EQUAL(3, 5);
}

