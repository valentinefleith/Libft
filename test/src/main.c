#include "libft.h"
#include "test-framework/unity.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	setUp(void)
{
}

void	tearDown(void)
{
}

static void	test_atoi(void)
{
	TEST_ASSERT_EQUAL_INT(ft_atoi("42"), atoi("42"));
}

int	main(void)
{
	UnityBegin("test.c");
	RUN_TEST(test_atoi);
	return (UnityEnd());
}
