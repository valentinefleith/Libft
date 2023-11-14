#include "libft.h"
#include "test-framework/unity.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

static void try_atoi(char *str)
{
	int my_result = ft_atoi(str);
	int lib_result = atoi(str);

	char message[1024];
	sprintf(message, "Test failed. Initial string was %s, Libft function returned %i, but the lib function returned %i", str, my_result, lib_result);
	TEST_ASSERT_TRUE_MESSAGE(my_result == lib_result, message);
}

static void test_atoi(void)
{
	try_atoi("42");
	//try_atoi("");
	try_atoi("    42   ");
	try_atoi("-42");
	try_atoi("cgvhbjn-42   ");
	try_atoi("-42gjierjger-42");
}

void run_test_atoi(void)
{
	printf("\n-----Atoi-----\n");
	RUN_TEST(test_atoi);
}
