#include "libft.h"
#include "test-framework/unity.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include <ctype.h>

static void try_strlcat(char *dest, char *src, size_t size, char *expected)
{
	char message[1024];
	char *cpy = malloc(1024);
	if (cpy == NULL)
		return;
	strcpy(cpy, dest);
	ft_strlcat(dest, src, size);
	sprintf(message, "Test failed. ft_strlcat returned dest '%s', but '%s' was expected.\n Input dest='%s', src='%s'\n", dest, expected, cpy, src);
	TEST_ASSERT_TRUE_MESSAGE(!strcmp(dest, expected), message);
}

static void test_strlcat(void)
{
	char dest[30];
	bzero(dest, 30);
	char src[] = "111111111";
	dest[0] = 'A';
	try_strlcat(dest, src, 1, "A");
	try_strlcat(dest, src, 2, "A");
	try_strlcat(dest, src, 5, "A111");
}

void run_test_strlcat(void)
{
	printf("\n-----Strlcat-----\n");
	RUN_TEST(test_strlcat);
}
