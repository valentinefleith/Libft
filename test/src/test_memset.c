#include "libft.h"
#include "test-framework/unity.h"
#include "utils.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>


#define BUFFER_SIZE 1024

static void try_memset(int value, size_t size)
{
	if (size == 0)
		TEST_PASS();

	t_byte* my_result = malloc(size);
	t_byte* lib_result = malloc(size);

	scramble_array(my_result, size);
	scramble_array(lib_result, size);

	ft_memset(my_result, value, size);
	memset(lib_result, value, size);

	compare_bytes(my_result, lib_result, size);
	free(my_result);
	free(lib_result);
}

static void test_memset(void)
{
	try_memset(0, 0);
	try_memset(65, 351);
}

void run_test_memset(void)
{
	printf("\n-----Memset-----\n");
	RUN_TEST(test_memset);
}
