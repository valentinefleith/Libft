#include "libft.h"
#include "test-framework/unity.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

static void test_strlen(void)
{
	size_t my_result = ft_strlen("");
	size_t lib_result = strlen("");

	char message[1024];
	sprintf(message, "Test failed. Libft function returned %lu, but the lib function returned %lu", my_result, lib_result);
	TEST_ASSERT_TRUE_MESSAGE(my_result == lib_result, message);
}

void run_test_strlen(void)
{
	printf("\n-----Strlen-----\n");
	RUN_TEST(test_strlen);
}
