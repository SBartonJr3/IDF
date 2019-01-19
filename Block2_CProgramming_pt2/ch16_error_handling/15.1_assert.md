# assert.h

Assert.h is part of the C standard library. This header file is intended for use as a "debugging" aid.

Under the hood Assert.h defines *assert()* as a MACRO.

If the constant MACRO NDEBUG is not defined, assert() is defined as:
```c
void assert(int expression);    //Listed as a prototype for clarity
```

Otherwise, if NDEBUG *IS* defined, assert() is defined as...
```c
#define assert(e) ((void)0)
```

An **assertion** specifies that a program satisfies certain conditions at a specific point in its execution.

Any *assertion* violation likely indicates a bug in the program.

Asserts are used to check for ERRORS that should never happen, because you are the best of the best. The elite...PROGRAMMER PRIME!!!

The most common assertions tests *preconditions*(see below) in the program. 

### Assertion Types:

PRECONDITIOINS-specify conditions at the start of the function.

POSTCONDITIONS-Specify conditions at the end of a function.

INVARIANTS-Specify conditions over a defined region of a program.

##### THE FOLLOW ARE BEST PRACTICES:

Checking preconditions is a very simple and effective use of assertions.

Common preconditions to verify are:
1. Pointers are **not** NULL.
2. Indexes and size values are non-negative
3. Indexes and size values are less than an established limit

Example POSTCONDITIONS:
1. expected return values
2. proper output

## When to use Assertions?

* Run-time errors(ex. bad input)
    * Handle these errors with error-checking and recovery code instead of assertions.
    * For example, if your program recieves invalid input, give the user another opportunity to not fail.
* Program errors(ex. bug)
    * It is reasonable to expect run-time bugs from large projects
    * Sometimes bad code(ex lack of bounds checking) or failed functions(ex. malloc() returns NULL) can create bugs.
    * User asserts to handle program errors.

#### Assert syntax

```c
void assert(expression)
```
If expression evaluates to true, nothing happens...otherwise, if the expression evaluates to **false** then asser():
* prints an error to stderr
* terminates the program by abnormally terminating the process.
* closes the steam*.
* fllushes all the streams.


**NOTE: For a more indepth version read assert() and abort().**

```c
//////////////ASSERT EXAMPLE 1///////////////////

#include <assert.h>     //defines assert()

#include <stdlib.h>     //defines calloc()
#include <stdio.h>      //defines string-related functions

int main(void)
{
    //string pointer
    char * dynamicString = NULL;
    //dynamic string
    dynamicString = calloc(20, sizeof(char));

    //assert that dynamicString is not NULL
    assert(dynamicString);
    
    //read a string
    fgets(dynamicString, 20, stdin);

   //assert that the string is nul terminated
   assert(dynamicString[19] == '\0');

   //print the string
   puts(dynamicString);
   return 0; 


//////////////ASSERT EXAMPLE 2///////////////////

#include <assert.h>     //defines assert()

#include <stdio.h>      //defines string-related functions

int main(void)
{
    int numerator, denominator;
    float result;
    puts("Enter two numbers to divide (ex. 5 / 3)");
    scanf("%d / %d", &numerator, &denominator);

    //assert that the denominator is not 0
    assert(denominator);

    result = (float)numerator / denominator;
    //print the string
    printf("Result: \t%.2f", result);
    return 0;
}
```



### PEFORMANCE LAB: "arrgh, matey ye walkin' thee STRING!"
