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

void run_test_strlen(void);
void run_test_tolower(void);
void run_test_memset(void);
void run_test_atoi(void);

int	main(void)
{
	UnityBegin("test.c");
	run_test_tolower();
	run_test_strlen();
	run_test_memset();
	run_test_atoi();
	return (UnityEnd());
}
