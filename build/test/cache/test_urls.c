#include "src/urltestlib2.h"
#include "src/urltestlib1.h"
#include "src/urltest.h"
#include "/var/lib/gems/2.7.0/gems/ceedling-0.31.1/vendor/unity/src/unity.h"












void setUp() {}

void tearDown() {}



void test_convertToHTTPS() {

 char *url = "http://some.domain.com/";



 

_Bool 

     err = convertToHTTPS(&url);

 do {if (!(err)) {} else {UnityFail( ((" Expected FALSE Was TRUE")), (UNITY_UINT)((UNITY_UINT)(19)));}} while(0);

 UnityAssertEqualString((const char*)(("https://some.domain.com/")), (const char*)((url)), (

((void *)0)

), (UNITY_UINT)(20));

 free(url);

}
