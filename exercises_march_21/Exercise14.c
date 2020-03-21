//Exercise 14: Writing And Using Functions
#include <stdio.h>
#include <ctype.h>

// forward declarations
int can_print_it(char ch);
void print_letters(char arg[]);

void print_arguments(int argc, char *argv[])
{
    int i = 0;
    
    for (i = 0; i < argc; i++) {
        print_letters(argv[i]);
    }
}

void print_letters(char arg[])
{
    int i = 0;
    
    for (i = 0; arg[i] != '\0'; i++) {
        char ch = arg[i];
        
        if (can_print_it(ch)) {
            printf("'%c' == %d ", ch, ch);
        }
    }
    
    printf("\n");
}

int can_print_it(char ch)
{
    return isdigit(ch) || ispunct(ch);
}

int main(int argc, char *argv[])
{
    print_arguments(argc, argv);
    return 0;
}

/*

How To Break It
There's two different kinds of "breaking" in this program:
Confuse the compiler by removing the forward declarations so it
complains about can_print_it and print_letters .

//int can_print_it(char ch);
//void print_letters(char arg[]);
printing

 ;clang version 7.0.0-3~ubuntu0.18.04.1 (tags/RELEASE_700/final)
? clang-7 -pthread -lm -o main main.c
main.c:11:1: warning: implicit declaration of function 'print_letters'
      is invalid in C99 [-Wimplicit-function-declaration]
print_letters(argv[i]);
^
main.c:14:6: error: conflicting types for 'print_letters'
void print_letters(char arg[])
     ^
main.c:11:1: note: previous implicit declaration is here
print_letters(argv[i]);
^
main.c:19:4: warning: implicit declaration of function 'can_print_it'
      is invalid in C99 [-Wimplicit-function-declaration]
if(can_print_it(ch)) {
   ^
main.c:25:5: error: conflicting types for 'can_print_it'
int can_print_it(char ch)
    ^
main.c:19:4: note: previous implicit declaration is here
if(can_print_it(ch)) {
   ^
2 warnings and 2 errors generated.




----------------------------
When you call print_arguments inside main try adding 1 to
argc so that it goes past the end of the argv array.


int main(int argc, char *argv[])
{
    print_arguments(argc + 1, argv);
    return 0;
}

printing :
$ ./main
'm' == 109 'a' == 97 'i' == 105 'n' == 110
Segmentation fault (core dumped)


----------------------------------------------------------

Extra Credit
Rework these functions so that you have fewer functions. For
example, do you really need can_print_it ?
#include <stdio.h>
#include <ctype.h>

// forward declarations
void print_letters(char arg[]);

void print_letters(char arg[])
{
    int i = 0;
    
    for (i = 0; arg[i] != '\0'; i++) {
        char ch = arg[i];
        
        if (isalpha(ch) || isblank(ch)) {
            printf("'%c' == %d ", ch, ch);
        }
    }
    
    printf("\n");
}

int main(int argc, char *argv[])
{
    int i = 0;
    
    for (i = 0; i < argc; i++) {
        print_letters(argv[i]);
    }
    
    return 0;
}
printing
$ ./main
'm' == 109 'a' == 97 'i' == 105 'n' == 110

-------------------
Have print_arguments figure how long each argument string is
using the strlen function, and then pass that length to
print_letters . Then, rewrite print_letters so it only
processes this fixed length and doesn't rely on the '\0'
terminator. You will need the #include <string.h> for this.
#include <stdio.h>
#include <ctype.h>
#include <string.h>

// forward declarations
int can_print_it(char ch);
void print_letters(char arg[], int length);

void print_arguments(int argc, char *argv[])
{
    int i = 0;
    
    for (i = 0; i < argc; i++) {
        print_letters(argv[i], strlen(argv[i]));
    }
}

void print_letters(char arg[], int length)
{
    int i = 0;
    
    for (i = 0; i < length; i++) {
        char ch = arg[i];
        
        if (can_print_it(ch)) {
            printf("'%c' == %d ", ch, ch);
        }
    }
    
    printf("\n");
}

int can_print_it(char ch)
{
    return isalpha(ch) || isblank(ch);
}

int main(int argc, char *argv[])
{
    print_arguments(argc, argv);
    return 0;
}

printing
./main
'm' == 109 'a' == 97 'i' == 105 'n' == 110

---------------------------------------------
Use man to lookup information on isalpha and isblank . Use
the other similar functions to print out only digits or other
characters.
#include <stdio.h>
#include <ctype.h>

// forward declarations
int can_print_it(char ch);
void print_letters(char arg[]);

void print_arguments(int argc, char *argv[])
{
    int i = 0;
    
    for (i = 0; i < argc; i++) {
        print_letters(argv[i]);
    }
}

void print_letters(char arg[])
{
    int i = 0;
    
    for (i = 0; arg[i] != '\0'; i++) {
        char ch = arg[i];
        
        if (can_print_it(ch)) {
            printf("'%c' == %d ", ch, ch);
        }
    }
    
    printf("\n");
}

int can_print_it(char ch)
{
    return isdigit(ch) || ispunct(ch);
}

int main(int argc, char *argv[])
{
    print_arguments(argc, argv);
    return 0;
}

printing


 ./main
'.' == 46 '/' == 47
--------------------------------------------
Go read about how different people like to format their
functions. Never use the "K&R syntax" as it's antiquated and
confusing, but understand what it's doing in case you run into
someone who likes it.

// K&R declarations, we don't know whether these functions have parameters.
int foo(); // this declaration not strictly necessary until C99, because it returns int
float bar();

// Full prototypes, specifying the number and types of parameters
int foo(int);
float bar(int, float);

// K&R definition of a function
int foo(a)
    int a; // parameter types were declared separately
{
    // ...
    return 0;
}

// Modern definition of a function
float bar(int a, float b) 
{
    // ...
    return 0.0;
}


*/




