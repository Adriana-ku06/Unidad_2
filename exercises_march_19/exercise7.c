//exercise 7: more variables, some math.
//basic math in C.
// uses of ints, floats, chars and doubles.
#include<stdio.h>
int main(int argc, char *argv[]){
    
    int bugs=100;
    double bug_rate=1.2;
    
    printf("You have %d bugs at the imaginary rate of %f, \n",bugs,bug_rate);
    
    long universe_of_defects=1L*1024L*1024L*1024L*1024L*1024L*1024L * 10L;
    //long universe_of_defects=1L*1024L*1024L*1024L*1024L*1024L*1024L * 10L; 
    /*This number exceeds the value of a long variable that is -2,147,483,648 to 2,147,483,647,
    therefore when compiling the program it marks a warning, 1L*1024L*1024L*1024L*1024L*1024L*1024L * 10L
    */
    printf("The entire universe has %ld bugs.\n",universe_of_defects);
    
    double expected_bugs=bugs*bug_rate;
    printf("You are expected to have %f bugs.\n",expected_bugs);
    
    
    double part_of_universe = expected_bugs / universe_of_defects;
    printf("That is only a %e portion of the universe.\n",part_of_universe);
       
    char nul_byte = '\0';
    int care_percentage = bugs * nul_byte; //MULTIPLICACION DE UN CHAR POR UN INT
    printf("Which means you should care %d%%.\n",care_percentage);
            
    return 0;

    }

     /*EXTRA CREDIT
    
    -------------------------------------------------------------------------------------------------------------------------------------
-Make the number you assign to universe_of_defects various sizes until you get a warning from the compiler.



    therefore when compiling the program it marks a warning, 1L*1024L*1024L*1024L*1024L*1024L*1024L * 10L

    main.c:12:69: warning: overflow in expression;
      result is -6917529027641081856 with type
      'long' [-Winteger-overflow]
  ...* 10L; //This number exceeds the value o...
   ------------------------------------------------------------------------------------------------------------------------------------------------- 
    
    
-What do these really huge numbers actually print out? 
result is -6917529027641081856
  -------------------------------------------------------------------------------------------------------------------------------  
-Change long to unsigned long and try to find the number that makes that one too big.
------------------------------------------------------------------------------------------------------------------------------------------------
-Go search online to find out what unsigned does.
A=Variables are extended size variables for number storage, and store 32 bits (4 bytes).
Unlike standard longs unsigned longs won't store negative numbers, making their range from 0 to 4,294,967,295 (2^32 - 1).
---------------------------------------------------------------------------------------------------------------------------------------------------
-Try to explain to yourself (before I do in the next exercise) why you can multiply a char and an int .
A=I think that the multiplication is given by the ASCII values that each character has, and interprets it as a number to the value of char.

    */