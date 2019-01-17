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

## Run-Time Error