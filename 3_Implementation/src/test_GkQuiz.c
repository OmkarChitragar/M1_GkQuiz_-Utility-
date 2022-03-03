/**
 * @file test_GkQuiz.c
 * @author omkar chitragar 
 * @brief 
 * @version 0.1
 * @date 2022-03-03
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include"GkQuiz.h"
#include"unity.h"
void setup()
{

}
void tearDown()
{

}
void Calculatescore()
{
    TEST_ASSERT_EQUAL_INT(1,Calculatescore());
    TEST_ASSERT_EQUAL_INT(1,Calculatescore());
}
void question()
{
    TEST_ASSERT_EQUAL_INT(1,question());
}    
void result()
{
    TEST_ASSERT_EQUAL_CHAR(1,result());
}
void menu()
{
    TEST_ASSERT_EQUAL_INT(1,menu());
}

int main(void)
{
    UNITY_BEGIN();
    RUN_TEST(Calculatescore);
    RUN_TEST(result);
    RUN_TEST(question);
    RUN_TEST(menu);
    return UNITY_END();   
}