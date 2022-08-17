 C- PROGRAMMING :STACKS, QUEUES - LIFO, FIFO

C is a programming language which is used to develop the software like operating system, databases compilers, and so on.
This project it has to do with the concepts of STACKS, QUEUES and the LIFO AND FIFO methods and the implemantation. The project is done by : 

Donaldoo and armigjoka.

github.com/Donaldoo/holbertonschool-monty
github.com/armigjoka.

In the end of the project we are able to answer those questions:

-What do LIFO and FIFO mean?
-What is a stack, and when we can use it?
-What is a queue, and when we can use it?
-What are the common implementations of stacks and queues?
-What are the common uses cases of stacks and queues?
-What are the proprer way to use global variables?


Monty byte code files:

All the files that containing Monty byte codes usually have the .m extension. There is not more that an instruction per line. There can be number of spaces before or after the opcode and its argument is :

Example of usage:

$cat bytecodes/12.m
push 1
push 2
push 3
pall
add
pall
./monty bytecodes/12.m
3
2
1
5
1.

Setup:

git clone git@github.com:Donaldoo/holbertonschool-monty.git
$ gcc -Wall -Werror -Wextra -pedantic *.c -o monty

Compilation code:

The files should be compiled by :
$ gcc -Wall -Werror -Wextra -pedantic *.c -o monty

How to use:
1- compile files
2- $ ./monty monty_byte_code_file_name.n


0. Push, Pall
- "Implement the push and pall opcodes

push- Push the elements of the stacks.

pall- Prints all the values on the stack, starting from the top of the stack.

1. Pint
- "Implement the pint opcode.

pint- Prints the value at the top of the stack, followed by a new line.

2. Pop
- "Implement the pop  opcode.

pop- Removes the top element of the stack

3. Swap
- "Implement the swap opcode.

swap- Swaps the top two elements of the stack.

4. "Add
- "Implement the add opcode.

add- Adds the top to elements of the stack.

sub- Substracts the top element of the stack from the second top element of the stack.

div- Divides the second top element of the stack by the top element of the stack.

mul- Multiplies the second top of the stack with the top element of the stack.

mod- Computes the rest of the division of the second top element of the stack by the top element of the stack.

stack- Sets the format of the data to a stack(LIFO). The default behaviour of the program.

queue- Sets the format of the ata to a queue(FIFO). 

5. Nop
- "Implement the nope opcode.
nop- Doesn't do anything.

FILE Description:

monty.h- The header of the project which are included all the prototypes of the functions and the structures that we have used in this project.

monty.c- The main function of the project whih contains int main(int argc, char **argv).

bytecodes- Are the monty bytecodes files.

struct.h- Is the file which has the structure that is used for the project.

stack_op.c- Is the file which contains functions create stack and queues: push,swap, pop, nop.

print_op.c- Is the file which contains functions to print the stack and queues: pall, pint.

opcode_struct.c- The file that checks the opcode's function and executes it.

calculate.c- The file that adds the last 2 elements of the stack and use the varibles likes sub_, mul_, div_, mod_ and the variable of the stack: add_.


Environment:

Ubuntu 14.04 LTS via Vagrant in VirtualBox and is compiled with GCC version 4.8.4


Authors:
 
-Donaldoo and armigjoka.

github.com/Donaldoo/holbertonschool-monty
github.com/armigjoka.
