# Printf() Debugging

The first and most basic method of debugging we will be going over is **Printf() Debugging**. While this is often looked down by modern debugging tools, it's still a proven and indispensable method of debugging. 

The concept is quiet simple. Print variables, outputs, etc to see if the data falls true to your expecations. Recall `step 4: analyze snapshot`: by using printf(), we can begin to test all of the things we think to be true *(ex: this value should be 5, this return should be this pointer, this condition should be true)*. As we find things that do not meet our expecations, we can begin to formulate **why** and **how**. 

Again, this is not the desired method of debugging. It can get sloppy and may even take away more time than it's worth. But sometimes... just sometimes it's a tried and proven method. You are the only one who can be the judge of that. 

---

## How to printf() Debug

Let's begin by walking through `print_demo.c`. 

We are going to treat demo as if we would in the real world. We are going to walk through step by step. 

### Pre-Checks

* **What is the program's purpose?**
  * It's a simple calculator with add, subtract, multiply and division. The program continues to run until user tells it to stop. 
* **What did we expect to happen?**
  * We expected that a user would select what kind of operation they wanted to do. If they selected something wrong, the prompt would appear again asking for selection. If they selected correctly, it would then route the user to the correct function. At which point the function would ask for two numbers to perform some sort of math. The value would then be returned and printed. Lastly, the program would ask if the user wants to continue. (Loop the program)
* What really happened?
  * ???
* What should of happened?
  * Same as what we expected to happen

### Step One: Reproduce the Bug

* Can we reproduce this issue? 

### Step Two: Describe the Bug

* Is it reproduceable?
* How can you make it happen again?
* What happened?
* What should of happend?
* Is it correct sometimes?
* When did it happen?
* What can support this?
* How critical is it?
* etc

### Step Three: Snapshot

For printf() debugging... we won't be taking much of a snapshot. Instead, let's take a wild guess at where this issue(s) is happening. 