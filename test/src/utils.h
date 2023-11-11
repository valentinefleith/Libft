#pragma once

#include "libft.h"

#include <stddef.h>

void scramble_array(void* array, size_t size);
void compare_bytes(t_byte*, t_byte*, size_t size);

char sign(int n);

size_t random_size();
int random_int();
