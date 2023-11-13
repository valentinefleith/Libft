#include "libft.h"
#include "test-framework/unity.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

static void try_strjoin(const char *s1, const char *s2, char *expected)
{
	char message[1024];
	char *result = ft_strjoin(s1, s2);
	sprintf(message, "Test failed. ft_strjoin returned %s, but %s was expected.\n Input s1='%s', s2='%s'\n", result, expected, s1, s2);
	TEST_ASSERT_TRUE_MESSAGE(result == expected, message);
}

static void test_strjoin(void)
{
	try_strjoin("bonjour", "lol", "bonjourlol");
	try_strjoin("", "lol", "lol");
	try_strjoin("bonjour", "", "bonjour");
	try_strjoin("", "", "");
}

void run_test_strjoin(void)
{
	printf("\n-----Strjoin-----\n");
	RUN_TEST(test_strjoin);
}
