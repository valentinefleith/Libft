#include "libft.h"
#include "test-framework/unity.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

void	setUp(void)
{
}

void	tearDown(void)
{
}

/*
static void	test_atoi(void)
{
	TEST_ASSERT_EQUAL_INT(ft_atoi("42"), atoi("42"));
}

static void test_isfunctions(void)
{
	for (int i = -200; i < 200; i++)
	{
		TEST_ASSERT_EQUAL_INT((bool)ft_isalpha(i), (bool)isalpha(i));
		TEST_ASSERT_EQUAL_INT((bool)ft_isdigit(i), (bool)isdigit(i));
		TEST_ASSERT_EQUAL_INT((bool)ft_isalnum(i), (bool)isalnum(i));
		TEST_ASSERT_EQUAL_INT((bool)ft_isprint(i), (bool)isprint(i));
	}
}

*/
static void test_strlen(void)
{
	TEST_ASSERT_EQUAL_INT(ft_strlen("cfgvbhnjik"), strlen("cfgvbhnjik"));
}

int	main(void)
{
	UnityBegin("test.c");
	RUN_TEST(test_strlen);
	return (UnityEnd());
}
