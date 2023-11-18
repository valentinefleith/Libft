#include "libft.h"
#include "test-framework/unity.h"
#include "utils.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


#define BUFFER_SIZE 1024

static void try_strnstr(const char *big, const char *little, size_t len)
{
	char *my_result = ft_strnstr(big, little, len);
	char *lib_result = strstr(big, little);
	
	char message[1024];
	sprintf(message, "Test failed. Libft function returned %p, but the lib function returned %p", my_result, lib_result);
	TEST_ASSERT_TRUE_MESSAGE(my_result == lib_result, message);
}

static void test_strnstr(void)
{
	try_strnstr("aab", "", 3);
	try_strnstr("aab", "ab", 3);
	try_strnstr("aab", "ab", 3);
	try_strnstr("aab", "ab", 3);
	try_strnstr("aab", "ab", 3);
	try_strnstr("aab", "ab", 3);
}

void run_test_strnstr(void)
{
	printf("\n-----Strnstr-----\n");
	RUN_TEST(test_strnstr);
}
