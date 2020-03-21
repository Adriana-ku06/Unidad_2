//Exercise 12: If, Else-If, Else
#include <stdio.h>
int main(int argc, char *argv[])
{
        int i = 0;
        if(argc == 1) {
        printf("You only have one argument. You suck.\n");
        } 
        //--------------------------------



        



        //---------------------------------
        else if(argc > 1 && argc < 4) {
        printf("Here's your arguments:\n");


        for(i = 1; i < argc; i++) {
        printf("%s ", argv[i]);
        }
        printf("\n");
        } 
        
        else {
        printf("You have too many arguments. You suck.\n");
        }


        
        if(argc != 0) {
        printf("you can't even see the values\n");
        } 
        return 0;
}

/*
Extra Credit
You were briefly introduced to && , which does an "and"
comparison, so go research online the different "boolean
operators".
Operator
Outcome
A == B
1 if A equals B; 0 otherwise
TO! = B
1 if A is different from B
A> B
1 if A is greater than B
A <B
1 if A is less than B
A> = B
1 if A is greater than or equal to B

To elaborate complex conditions, there are these operators:

Expression
Outcome
E1 && E2
Certain if E1 and E2 are true (AND)
E1 || E2
Certain if E1 or E2 are true (OR)
! me
True if E is false; false if E is true (NO)

-------------------------------
Write a few more test cases for this program to see what you
can come up with.
if(argc != 0) {
        printf("you can't even see the values\n");
        }  :D


-----------------------------------
Go back to Exercises 10 and 11, and use if-statements to
make the loops exit early. You'll need the break statement to
do that. Go read about it.

while(i <argc ) {
    printf("arg %d: %s\n", i, argv[i]);
    i++;  
    break;
     }

      char *states2[argc-1];
    
    
    int num_states2 = argc-1;
    i = 0;
   int j=1; // watch for this
    while(i < num_states2) {
    *states2[i]= argv[j];
  
 printf("state %d: %s\n", i, states2[i]);
    
    j++;
    i++; 
    break;   }



Is the first test really saying the right thing? To you the "first
argument" isn't the same first argument a user entered. Fix it.

for(i = 1; i < argc; i++) {
        printf("%s ", argv[i]);
        }
        printf("\n");
        } 


*/

*/