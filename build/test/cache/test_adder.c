#include "src/my_math.h"
#include "/var/lib/gems/2.7.0/gems/ceedling-0.31.1/vendor/unity/src/unity_internals.h"
#include "src/adder.h"
#include "/var/lib/gems/2.7.0/gems/ceedling-0.31.1/vendor/unity/src/unity.h"


void setUp() {}

void tearDown() {}



void test_doAddOnePlusTwo() {

 int result = doAddOnePlusTwo();

 UnityAssertEqualNumber((UNITY_INT)((3)), (UNITY_INT)((result)), (

((void *)0)

), (UNITY_UINT)(9), UNITY_DISPLAY_STYLE_INT);

}
