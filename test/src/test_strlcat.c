#include "libft.h"
#include "test-framework/unity.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

static void try_strlcat()
{

	char message[1024];
	sprintf(message, "Test failed. ft_strjoin returned %s, but %s was expected.\n Input s1='%s', s2='%s'\n", result, expected, s1, s2);
	TEST_ASSERT_TRUE_MESSAGE(result == expected, message);
}

static void test_strlcat(void)
{
	char dest[30];
	bzero(dest, 30);
	char src[] = "111111111";
	try_strlcat(dest, src, 1);
}

void run_test_strlcat(void)
{
	printf("\n-----Strlcat-----\n");
	RUN_TEST(test_strlcat);
}
