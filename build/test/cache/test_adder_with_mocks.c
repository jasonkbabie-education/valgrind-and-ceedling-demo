#include "src/adder.h"
#include "build/test/mocks/mock_my_math.h"
#include "/var/lib/gems/2.7.0/gems/ceedling-0.31.1/vendor/unity/src/unity.h"


void setUp() {}

void tearDown() {}



void test_doAddOnePlusTwo() {

 add_CMockExpectAndReturn(9, 1, 2, 9);

 int result = doAddOnePlusTwo();

 UnityAssertEqualNumber((UNITY_INT)((9)), (UNITY_INT)((result)), (

((void *)0)

), (UNITY_UINT)(11), UNITY_DISPLAY_STYLE_INT);

}
