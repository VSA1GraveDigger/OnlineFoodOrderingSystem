#include "unity.h"
#include "header.h"

void setUp()
{

}
void tearDown()
{

}
 
void test_miniproject(void)
{
    char t_newpassword[50],t_confirmpassword[50];
    scanf("%s",t_newpassword);
    scanf("%s",t_confirmpassword);
    TEST_ASSERT_EQUAL_STRING_MESSAGE(t_newpassword ,t_confirmpassword  , "password matches");
    TEST_ASSERT_EQUAL_STRING_MESSAGE(t_newpassword , t_confirmpassword , "password matches");
    
}

int main(void)
{
    UNITY_BEGIN();
    RUN_TEST(test_miniproject);

    return UNITY_END();
}
