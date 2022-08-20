# C - Stacks, Queues - LIFO, FIFO

## The Monty language :clipboard:
**Monty** is a scripting language that is first compiled into Monty byte codes. It relies on a unique stack, with specific instructions to manipulate it. The goal of this project is to create an interpreter for Monty ByteCodes files.

#### **Monty byte code files:**
Files containing Monty byte codes usually have the `.m` extension. There is not more than one instruction per line. There can be any number of spaces before or after the opcode and its argument:
Example of usage:

```
$ cat bytecodes/12.m
push 1
push 2
push 3
pall
add
pall

$ ./monty bytecodes/12.m
3
2
1
5
1
```

## Compilation & Output: :gear:

* All files should be compiled with:

```
$ gcc -Wall -Werror -Wextra -pedantic *.c -o monty
```
* Any output must be printed on `stdout`.
* Any error message must be printed on `stderr`.


## Usage  :wrench:

* `./monty file.m`
    * where `file.m` is the path to the file containing Monty byte code.

**Example**:

```
$ cat bytecodes/00.m
push 1
push 2
push 3
pall

$ ./monty bytecodes/00.m
3
2
1
```

## Files description :file_folder:

<!-- ⛔️ MD-MAGIC-EXAMPLE:START (TOC:collapse=true&collapseText=Click to expand) -->
<details>
<summary>Click to expand</summary>

</br>

* [struct.h](https://github.com/Donaldoo/holbertonschool-monty/blob/main/struct.h) :arrow_right: Structures (declarations) needed for this project.
* [monty.h](https://github.com/Donaldoo/holbertonschool-monty/blob/main/monty.h) :arrow_right: Header file containing libraries and prototypes of the functions used in this project.
* [monty.c](https://github.com/Donaldoo/holbertonschool-monty/blob/main/monty.c) :arrow_right: Main function and getline loop.
* [opcode_struct.c](https://github.com/Donaldoo/holbertonschool-monty/blob/main/opcode_struct.c) :arrow_right: Searches through structure of function pointers.

* [print_op.c](https://github.com/Donaldoo/holbertonschool-monty/blob/main/print_op.c) :arrow_right: Functions used to print values in stack.
     * `pall` - Prints all values of the stack.
     * `pint` - Prints the value at the top of the stack.
     * `pchar` - Prints the char at the top of the stack.
     * `pstr` - Prints the string starting at the top of the stack.
* [stack_op.c](https://github.com/Donaldoo/holbertonschool-monty/blob/main/stack_op.c) :arrow_right: Functions used to manipulate the stack.
     * `push <int>` - Pushes an int onto the top of the stack.
     * `pop` - Removes the top element of the stack.
     * `swap` - Swaps the top two elements of the stack.
     * `nop` - Doesn't do anything.
* [calculate.c](https://github.com/Donaldoo/holbertonschool-monty/blob/main/calculate.c) :arrow_right: Functions used to do math operations on stack values.
     * `add` - Adds the top two elements of the stack.
     * `sub` - Subtracts the top element of the stack from the second one.
     * `mul` - Multiplies the top two elements of the stack.
     * `div` - Divides the second element of the stack by the top one.
     * `mod` - Returns the remainder of dividing the second element of the stack by the top one.
</details>
<!-- ⛔️ MD-MAGIC-EXAMPLE:END -->


### Authors:
 * **Donaldoo and armigjoka**
