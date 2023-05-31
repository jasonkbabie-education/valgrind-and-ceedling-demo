#include <unity.h>
#include "mock_my_math.h"
#include "adder.h"

void setUp() {}
void tearDown() {}

void test_doAddOnePlusTwo() {
	add_ExpectAndReturn(1, 2, 9);
	int result = doAddOnePlusTwo();
	TEST_ASSERT_EQUAL(9, result);
}

