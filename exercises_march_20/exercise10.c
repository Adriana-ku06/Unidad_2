//Exercise 10: Arrays Of Strings, Looping

#include <stdio.h>
    int main(int argc, char *argv[])
    {
    int i = 0;
    
    for(i = 1; i < argc; i++) {
    printf("arg %d: %s\n", i, argv[i]);
   // argv[i]=*states[0];agignaciond de un valor argv con un valor de *states
    } //we read the values entered from ./main, argc is initialized in 1.
    
    char *states[] = {
    "California", NULL,
    "Washington", "Texas"
    };//in state we store string values, use of NULL in this position

    int num_states = 4;

    for(i = 0; i < num_states; i++) 
    {
    printf("state %d: %s\n", i, states[i]);
    }
    return 0;
}


/*
Extra Credit
Figure out what kind of code you can put into the parts of a
for-loop .

A=values of type char is what the loop reads in this code, you can enter any character, inside it so you can do different operations if you use the positions of the argc array as integer, decimal or aray,
-------------------------------------------------------------
Look up how to use the ',' (comma) character to separate
multiple statements in the parts of the for-loop , but between
the ';' (semicolon) characters.

A=
 ';' (semicolon)= Repeat five times for (i=0;i<5;i++)

 how to use the ',' (comma)=
 The comma operator is a sequence point (as are && and ||), so the order of evaluation of the operands is fixed.
----------------------------------------------------------
Read what a NULL is and try to use it in one of the elements of
the states array to see what it'll print.
A=Null is a built-in constant that has a value of zero. It is the same as the character 0 used to terminate strings in C
A=using a null in one of the state positions I get the following as impression
state 1: (null)
----------------------------------------------------
See if you can assign an element from the states array to the
argv array before printing both. Try the inverse.
A=it cannot be done before that, because the declaration in the code is below, but it is possible to do it alrrevez due to the fact that the argv values are read first


*/