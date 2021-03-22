# StackWithMin 

This project implements a stack, which supports extraction of minimal value.

## Problem

Victor loves to draw. Each of Victor's drawings is characterized by its own beauty b.

Every time Victor finishes a drawing, he puts it in a stack of other drawings. Sometimes Victor does not like the last drawing he created. Then he takes it from the stack and destroys it.

One day Victor noticed that he was destroying too many drawings and decided to fix it. In order to make his decision, he wants to know the smallest beauty among all the drawings lying in the stack.

Help Victor with this, and maybe he'll give you one of his drawings.

### Input

The first line contains the number n (1 ≤ n ≤ 5·105) of operations performed by Victor

The next n lines contain the operations themselves as op b or op (0 ≤ op ≤ 3, - 10000 ≤ b ≤ 10000), where op is the operation code:

0 b - put the newly created drawing with beauty b on top of the stack;
1 - take the first top drawing and destroy it;
2 - find out the beauty of the first top drawing;
3 - find out the minimal beauty among all drawings in the stack.

### Output

For each query with code op = 2 and op = 3 output in a separate line a number - the answer to this query.

It is guaranteed that all operations are correct.

### Example

|Standart Input|Standart Output| 
| -------------|---------------| 
|8|1|
|0 2 |3|
|0 3 |2|
|0 1||
|3||
|1||
|2||
|3||
|1||
