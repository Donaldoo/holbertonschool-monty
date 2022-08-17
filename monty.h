#ifndef MONTY_H
#define MONTY_H

#define _GNU_SOURCE

#include "struct.h"

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#define DELIMITERS "\n\t\r "

void pall(stack_t **stack, __attribute__((unused)) unsigned int line_number);
void pint(stack_t **stack, unsigned int line_number);
void push(stack_t **stack, unsigned int line_number, char *num);

int get_op_code(char *opcode, stack_t **stack, unsigned int line_number);

void free_stack(stack_t **stack);
void free_all(stack_t *stack, char *line, FILE *fp);

#endif
