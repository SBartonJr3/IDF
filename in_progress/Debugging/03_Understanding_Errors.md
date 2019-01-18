# Reading and Understanding Errors

There are multiple types of errors in the C Programming langauge. An **error** is simply an illegal operation that was performed by the user. This operation results in some sort of abnormality of the program. The most common types of errors are:

* **Syntax Error**
* **Run-Time Error**
* **Linker Error**
* **Logical Error**
* **Semantic Error**

---

## Syntax Errors

These occur when you violate the rules of the C Programming syntax; aka your code is just not written following the rules of C. This is a very common reason for no compilation. Some examples of this are:

* Missing curly-bracket or parenthesis
* Missing semi-colon
* Failing to declare a variable before using it
* Mis-spelling a function or variable

Example of compile output:

`error: expected ';' before '}' token`

### Identifying Syntax Errors

These errors can be identified easily. First off, the program never compiles. That is a large indication of a Syntax error. GCC and IDEs with built in debuggers will also produce information that indicate an `error`. 

### Finding Syntax Errors

Luckily for us, these errors are often easy to find. Rather you compiled via terminal or IDE... you will generally recieve the error, the problem and the line number on which it happened. Below is an exmaple of us missing a semi-colon and the GCC output of such a mistake. 

```
yes_senpai@pop-os:~/CLionProjects/debugging_test$ gcc main.c 
main.c: In function ‘main’:
main.c:4:30: error: expected ‘;’ before ‘return’
     printf("Hello, World!\n")
                              ^
                              ;
     return 0;
```

As we can see here, the mistake is on line 4 character 30 in main.c (main.c:4:30):

`main.c:4:30: error: expected ‘;’ before ‘return’`

### Fixing Syntax Errors

Syntax errors are often easy to fix. Identify and find the errors location in code. Then simply fix the syntax. Re-compile. 

---

## Run-Time Errors

These errors occur during run-time (program execution) and are after successful compilation. These types of errors are not easy to find... there are no messages pointing to the location from the compiler. One example is the division by zero error. 

```
warning: division by zero [-Wdiv-by-zero]
    div = n/0;
```

### Identifying Run-Time Errors

Run-time errors may be a bit more difficult to find than Syntax Errors. But luckily for us, most compilers will produce a `warning` indicating where the problem is. 

### Finding Run-Time Errors

As said above, compilers will often produce a `warning` when there is a run-time error. This warning should contain a line and character at which the problem happened. For instance, if you divided by zero:

```
main.c: In function ‘main’:
main.c:4:14: warning: division by zero [-Wdiv-by-zero]
     int x = 4/0;
```

We can see that the error happened on line 4:14 inside of main.c. 

### Fixing Run-Time Errors

Run-Time errors are pretty easy to fix. We need to first identify the warning, if needed look it up, and apply a fix. Often times run-time errors may require us to change a bit more code than just one character or line. Say it was `4/n` rather than `4/0`. If a loop had asigned `n` the value of 0... then we need to fix the condition of the loop or the statement itself. 

## Linker Errors

These errors occur because some function or library that is needed could not be found. This occurs during the *linking stage* and will generally prevent an executable from being generated. We will go over the linking stage more in a later section. One common example of this is misspelling a name of a function when you declare, define or call it. 

`file.o(address): undefined reference to 'Foo(void')`

## Logical Errors

This one may not even seem like an error at first. The program compiles and executes... sometimes no warnings are even given. But this error becomes apparent when incorrect output is given. These are very common errors done by green programmers. Mixing up `==` with `=` or forgetting a semicolon are common examples. 

## Semantic Errors

These errors occur because the statements within the program are not meaningful to the compiler. The syntax used is correct... but maybe the programmer used the wrong variables, operations or order. For example, initializing a variable and trying to increment it without declaring the variable. Or doing something like `a + b = c`. 