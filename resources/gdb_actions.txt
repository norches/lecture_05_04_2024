1. **b (break)**:
   - Description: Sets a breakpoint at a specified line number, function, or address in the program's code.
   - Syntax: `b <line_number>` or `b <function_name>` or `b *<address>`

2. **r (run)**:
   - Description: Starts or restarts the execution of the program from the beginning.
   - Syntax: `r`

3. **c (continue)**:
   - Description: Continues the execution of the program until the next breakpoint is reached or until the program exits.
   - Syntax: `c`

4. **n (next)**:
   - Description: Executes the next line of code in the current function, stepping over function calls.
   - Syntax: `n`

5. **s (step)**:
   - Description: Executes the next line of code, stepping into any function calls encountered.
   - Syntax: `s`

6. **p (print)**:
   - Description: Prints the value of a specified variable or expression.
   - Syntax: `p <variable_name>` or `p <expression>`

7. **info breakpoints**:
   - Description: Displays information about all breakpoints that have been set.
   - Syntax: `info breakpoints`

8. **delete**:
   - Description: Deletes the specified breakpoint or all breakpoints.
   - Syntax: `delete <breakpoint_number>` or `delete`

9. **backtrace** (or **bt**):
   - Description: Prints a backtrace of the function calls leading up to the current point in the program's execution.
   - Syntax: `backtrace` or `bt`

10. **up**:
    - Description: Moves up one level in the call stack, allowing you to inspect the state of the calling function.
    - Syntax: `up`

11. **down**:
    - Description: Moves down one level in the call stack, returning to the previous function.
    - Syntax: `down`

12. **list**:
    - Description: Lists the source code around the current point of execution.
    - Syntax: `list`

13. **info locals**:
    - Description: Displays information about local variables in the current stack frame.
    - Syntax: `info locals`

14. **info registers**:
    - Description: Displays the contents of CPU registers.
    - Syntax: `info registers`

15. **set variable**:
    - Description: Modifies the value of a variable during program execution.
    - Syntax: `set variable <variable_name> = <value>`
