#ifndef MONTY_H
#define MONTY_H

#include "struct.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <sys/types.h>

void pall(stack_t **stack, unsigned int __attribute__((unused))line_number);
void push(stack_t **stack, __attribute__((unused)) unsigned int line_number, int num);

#endif
