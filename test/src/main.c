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
static void test_strlen(void)
{
	size_t my_result = ft_strlen("");
	size_t lib_result = strlen("");

	char message[1024];
	sprintf(message, "Test failed. Libft function returned %lu, but the lib function returned %lu", my_result, lib_result);
	TEST_ASSERT_TRUE_MESSAGE(my_result == lib_result, message);
}
*/

static void test_tolower(void)
{
	int my_result;
	int lib_result;

	for (int i = -1; i < 130; i++)
	{
		my_result = ft_tolower(i);
		lib_result = tolower(i);
		char message[1024];
		sprintf(message, "Test failed. Libft function returned %i, but the lib function returned %i", my_result, lib_result);
		TEST_ASSERT_TRUE_MESSAGE(my_result == lib_result, message);
	}
}

int	main(void)
{
	UnityBegin("test.c");
	RUN_TEST(test_tolower);
	return (UnityEnd());
}
