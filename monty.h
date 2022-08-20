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

/* stack manipulation and stack print opcodes */
void pall(stack_t **stack, __attribute__((unused)) unsigned int line_number);
void pint(stack_t **stack, unsigned int line_number);
void push(stack_t **stack, unsigned int line_number, char *num);
void pop(stack_t **stack, unsigned int line_number);
void swap(stack_t **stack, unsigned int line_number);
void nop(stack_t **stack, unsigned int line_number);
void pchar(stack_t **stack, unsigned int line_number);
void pstr(stack_t **stack, unsigned int line_number);

/* Stack rotation opcodes */
void rotl(stack_t **stack, __attribute__((unused)) unsigned int line_number);
void rotr(stack_t **stack, __attribute__((unused)) unsigned int line_number);

/* opcodes struct */
int get_op_code(char *opcode, stack_t **stack, unsigned int line_number);

/* calcualte opcodes */
void add_(stack_t **stack, unsigned int line_number);
void sub_(stack_t **stack, unsigned int line_number);
void div_(stack_t **stack, unsigned int line_number);
void mul_(stack_t **stack, unsigned int line_number);
void mod_(stack_t **stack, unsigned int line_number);

/* free memory functions */
void free_stack(stack_t **stack);
void free_all(stack_t *stack, char *line, FILE *fp);

#endif
