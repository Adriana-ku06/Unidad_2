//Exercise 11: While-Loop And Boolean Expressions

#include <stdio.h>
int main(int argc, char *argv[])
{
    // go through each string in argv
    int i = 4;
    while(i <= argc && i>=1) {// comprueba que el valor no se salga del ucle y genere un error
    printf("arg %d: %s\n", i, argv[i]);
    i--; //cuenta hacia atras  
     }
  /*Use a while loop to copy the values from argv into states .
Make this copy loop never fail such that if there's too many
argv elements it won't put them all into states .*/
//--------------------------------------------------------
while(i <argc ) {
    printf("arg %d: %s\n", i, argv[i]);
    i++;  
     }

      char *states2[argc-1];
    
    
    int num_states2 = argc-1;
    i = 0;
   int j=1; // watch for this
    while(i < num_states2) {
    *states2[i]= argv[j];
  
 printf("state %d: %s\n", i, states2[i]);
    
    j++;
    i++;    }


 //--------------------------------------------------------   
    // let's make our own array of strings
    char *states[] = {
    "California", "Oregon",
    "Washington", "Texas"    };
  

    




    int num_states = 4;
    i = 3; // watch for this
    while(i <= num_states && i>=0 ){// comprueba que el valor no se salga del ucle y genere un error
    printf("state %d: %s\n", i, states[i]);
    i--;   //cuanta hacia atras 
    }
    
    
    return 0;
}

/*

Extra Credit
Make these loops count backward by using i-- to start at
argc and count down to 0. You may have to do some math to
make the array indexes work right.
printing: ./main hola como estas ?
arg 4: ?
arg 3: estas
arg 2: como
arg 1: hola
state 3: Texas
state 2: Washington
state 1: Oregon
state 0: California
---------------------------------------------
Use a while loop to copy the values from argv into states .
Make this copy loop never fail such that if there's too many
argv elements it won't put them all into states .
------------------------------------------------------
Research if you've really copied these strings. The answer may
surprise and confuse you though.

it can does 

printing 
./main yucatan es es es
arg 4: es
arg 3: es
arg 2: es
arg 1: yucatan
arg 0: ./main
arg 1: yucatan
arg 2: es
arg 3: es
arg 4: es
----------------------------------------------------
*/