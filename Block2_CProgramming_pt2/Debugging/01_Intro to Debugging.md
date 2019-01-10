# Intro to Debugging

## What is debugging?

I'm sure by now, you have more than likely experienced C code that would not compile. You probably asked yourself, 

* **Why did this happen?** 
* **What can I do to fix this?**

Or maybe you ask yourself,

* **Why isn't my code passing this test case?**
* **My code compiled, what do these warnings mean though?**

These are all great questions a developer should be asking themself. Debugging is a tool that doesn't necessary give us the answer... but helps us find it. **De** means to denote removal. **Bug** is just an error, flaw, failure or fault within a program. This can be in the compilation process or some incorrect code. 

## Tools Used

Many different tools exist. One must keep in mind their development enviroment when choosing debugging tools. For our case, we our in Linux (Debian base) programming in C. That leaves us with a ton of different tools we can utilize. For the sake of this course, our tools are listed below:

* GDB
* `<stdio>`
* CLion
* VS Code
* Terminal Output
* IDA Pro

## Debugging Process

There are five general steps to take when debugging:

1. Reproduce the bug
   1. If it's a compilation issue... try compiling again... and maybe one more time. If you are recieving the same compile error and the code still doesn't compile, then it's time to look at **why**. 
   2. If the code compiles but the program crashes, repeat the above and observe what is happening. Can you reproduce this bug?
   3. If the code compiles and everything works fine, but you notice something that shouldn't happen. Can you reproduce this?
2. Describe the issue
3. Capture a snapshot of your program where the issue occured