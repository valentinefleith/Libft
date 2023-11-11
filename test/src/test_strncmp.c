#include "libft.h"
#include "test-framework/unity.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

static void try_strncmp(char *s1, char *s2, size_t n)
{
	int my_result = ft_strncmp(s1, s2, n);
	int lib_result = strncmp(s1, s2, n);

	char message[1024];
	sprintf(message, "Test failed. Libft function returned %i, but the lib function returned %i", my_result, lib_result);
	TEST_ASSERT_TRUE_MESSAGE(my_result == lib_result, message);
}

static void test_strncmp(void)
{
	try_strncmp("ABC", "ABC", 3);
	try_strncmp("ABC", "ZBC", 3);
	try_strncmp("ABCD", "ABC", 4);
	try_strncmp("", "", 3);
	try_strncmp("abcedeg", "abcdefgg", 8);
	try_strncmp("ABX", "ABC", 50);
	try_strncmp("ABC", "A", 3);
	try_strncmp("ABC", "A", 1);
	try_strncmp("", "", 0);

}

void run_test_strncmp(void)
{
	printf("\n-----Strncmp-----\n");
	RUN_TEST(test_strncmp);
}
