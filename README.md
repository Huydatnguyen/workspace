# workspace
Repository for Cloud Computing Course - Master 2 MOSIG - Huy Dat NGUYEN

This project contains 2 folders. 
Folder arm.boot is everything related to the coding. 
Folder worklog contains some .txt files that explain what I do and some knowledge I learned in the class and at home.   

Below, I try to attach the way you can understand my work/repository.

1. Branches

The repository contains only the main branch. 

2. How to compile/run/debug

The folder arm.boot contains a Makefile that defines some rules for compiling, running and debugging
the code. File kernel.ld is important, defines the entry point and the section as well as the 
memory allocation of the program. File kernel.elf is the excutable file after the compiler completed 
all of the work. The command "make run" for compiling and running. For the debugging, using "arm-none-eabi-debug kernel.elf" 

3. What works and does not.

Completed work are also represented and explained in the worklog file. Here is some missing work.

For week1.step3, I am able to create an empty console shell with the ability to edit a line before 
hitting "return", using the left and right arrow, and the backspace or delete keys, but I failed to 
manipulate the commands "reset" and "echo" as well as keeping a history of the last 20 lines entered.
For week2 assignment, I managed to add to my project the using of the interrupt call that halts the core
and Waits For Interrupts, by modifying some compiler rules and add the interrupt request stack section
in linker scpirt. I understand that I have to customize the functions "uart_receive", "uart_send" using 
the circular buffer, but I failed to get exactly what it does.
