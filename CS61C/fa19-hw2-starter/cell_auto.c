/****************************************************************************************
 *
 * CS 61C Fall 2019
 * Homework 2: C Basics -- Cellular Automata
 *
 ****************************************************************************************/

/****************************************************************************************
 *
 * Includes
 *
 ****************************************************************************************/

// <stdio.h> is needed for `printf()` and `fprintf()`
#include <stdio.h>

// <stdlib.h> is needed for `malloc()`, `free()`, etc.
#include <stdlib.h>

// <sys/types.h> needed for u_int32_t
#include <sys/types.h>

// Feel free to include any other C standard library header files here
// (Our staff solution does not use any other header files)


/****************************************************************************************
 *
 * Functions
 *
 ****************************************************************************************/

/*
 * This function is called when `cell_auto.c` is run with invalid inputs
 */
void usage(void)
{
 
    printf("    Proper usage: cell_auto <rule> <rows>\n\n");
    
    printf("    This program simulates a simple cellular automata, outputting data to STDOUT\n"
           "    in the PBM file format. It takes two arguments. First, `rule`, which should be\n"
           "    a number between 0 and 2^32 - 1. Second, `rows`, the number of generations the\n"
           "    simulation should run for. Including the first row (the tip of the triangle),\n"
           "    which is one \"alive\" cell in the center, surrounded by `rows` \"dead\" cells\n"
           "    on its left and right, the resulting grid from simulation should have dimensions\n"
           "    [ (`rows` + 1) x (2 * `rows` + 1)].\n");

    // Execution should *NOT* continue after `usage()` is called, call `exit()` with return code 1
    exit(1);

}

/*
 * Takes in a `rule` and number of `rows` and prints the cellular automata simulation in PBM format
 */
int main(int argc, char ** argv) 
{

    char *rowA, *rowB, **endptr;
    u_int32_t rule, rows;

    /* 
     * PART 1: USING COMMAND LINE ARGUMENTS
     * ====================================
     * When using command line arguments, its important to perform validation to prevent improper usage. 
     * In Task 1, check that the number of arguments the user has provided is correct. 
     *
     * In C, all command line arguments are provided as strings, but we need our arguments as integers. 
     * In Task 2, finish the conversion from strings to unsigned ints using `strtoul(). 
     * `strtoul` converts a string (str) to (to) an unsigned long (ul).
     * Try `man strtoul` if you want more information about what this function does.
     */

    /* PART 1, TASK 1: Check that the number of arguments is correct */

    // YOUR CODE HERE

    /* PART 1, TASK 2: Convert `rule` and `rows` from a strings (char *) to an unsigned ints */

    char * rule_str;
    // YOUR CODE HERE: set rule_str to the appropriate string
    rule = (unsigned int) strtoul(rule_str, (endptr = argv), 10);
    if(**endptr)
        usage();

    char * rows_str;
    // YOUR CODE HERE: set row_str to the appropriate string
    rows = (unsigned int) strtoul(rows_str, (endptr = argv), 10);
    if(**endptr)
        usage();

    /* 
     * PART 2: USING FORMATTING ARGUMENTS & PRINTF
     * ===========================================
     * A properly formatted PBM file starts with P1 <width> <height>
     * Write code that will print "P1 <width> <height> ## <rows> of automata simulation (Rule <rule>)", followed by a newline
     *
     * Example: 
     * P1 11 6 ## 5 rows of automata simulation (Rule 450)
     * ...
     */

    // YOUR CODE HERE

    /* 
     * PART 3: MEMORY MANAGEMENT
     * =========================
     * (There is no task for Part 3, but please read through the code & any accompanying
     * comments: you should fully understand everything that is being done here)
     */

    /*
     * Allocates two chunks of memory (`rowA` and `rowB`), each with space for a single generation
     * of the cellular automata, along with two elements worth of padding on either side. Because
     * these chunks are allocated with `calloc()`, the space is set to 0.
     */
    rowA = calloc(2 * rows + 5, 1);
    rowB = calloc(2 * rows + 5, 1);

    /* 
     * Check to see that memory allocation has been successful. 
     * If not, write "Out of memory" to STDERR and exit with error code 1. 
     */
    if(!(rowA && rowB)) {
      fprintf(stderr, "Error allocating rowA and rowB.\n"); 
      exit(1); 
    }

    /* 
     * PART 4: C CODING & (hint!) BITWISE OPERATIONS
     * =============================================
     * You must now generate and print the initial generation and each successive generation. 
     */

    // YOUR CODE HERE

    /* PART 3.5: MEMORY MANAGEMENT, PT. 2
     * (There is no task for Part 3, but please read through the code & any accompanying 
     * comments: you should fully understand everything that is being done here)
     * Free initialized memory and exit successfully. 
     */
    free(rowA);
    free(rowB);
	
    return 0;

}


