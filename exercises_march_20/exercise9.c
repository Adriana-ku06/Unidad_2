#include <stdio.h>
int main(int argc, char *argv[])
{
     // int numbers[4] = {0};//initializes all array positions to 0
     int numbers[4]={'a','b','c','d'};//Assign the characters into numbers
      char name[4] = {'a'};//leaves the positions empty and places the a in position 0
            
      printf("numbers: %d %d %d %d\n",
      numbers[0], numbers[1],
      numbers[2], numbers[3]);
      printf("name each: %c %c %c %c\n",
      name[0], name[1],
      name[2], name[3]);
      printf("name: %s\n", name);
    

//we initialize all positions with some value, in this case 1, 2, 3, 4
      numbers[0] = 1;
      numbers[1] = 2;
      numbers[2] = 3;
      numbers[3] = 4;
   //in this case Z, e, d, \0  
      name[0] = 'Z';
      name[1] = 'e';
      name[2] = 'd';
      name[3] = '\0';//then the string ends successfully with a '\ 0'character.
     

      printf("numbers: %d %d %d %d\n",
      numbers[0], numbers[1],
      numbers[2], numbers[3]);
      printf("name each: %c %c %c %c\n",
      name[0], name[1],
      name[2], name[3]);
    

      printf("name: %s\n", name);
     
      char *another = "Zed";// is what you should use to string literals like this.
      printf("another: %s\n", another);
     
      printf("another: %s\n", another);
      printf("another each: %c %c %c %c\n",
      another[0], another[1],
      another[2], another[3]);
      return 0;
}


/*
EXTRA CREDITS
Assign the characters into numbers and then use printf to
print them a character at a time. What kind of compiler
warnings did you get?

A= I didn't get any warning, but when printing the values 
I got the following numbers: 97 98 99 100, which are the ASCII values of each character.
------------------------------------------------
Do the inverse for name, trying to treat it like an array of int
and print it out one int at a time. What does Valgrind think of
that?

A=does not make any changes because it takes what characters are, a number is a character.
printing  name: 1 2 3 4
------------------------------------------------
How many other ways can you print this out?
A=the last output works for different characters, while for int it prints the ASCII value of each character
-----------------------------------------------
If an array of characters is 4 bytes long, and an integer is 4
bytes long, then can you treat the whole name array like it's just
an integer? How might you accomplish this crazy hack?

A=I think that first you would have to measure the size of both to verify if they are in 4 bytes,
then you would have to compare the values thrown at the time of printing them

#include <stdio.h>

int main (int argc, char * argv [])
{
int i;
char name2 [4] = {'A'};
int name = 0;

for (i = 0; i <4; ++ i)
{
name = (name << 8) + name2 [i];
}

printf ("% d \ n", name);
printf ("% X \ n", name);

returns 0;
}
---------------------------------------------------------
Take out a piece of paper and draw out each of these arrays as
a row of boxes. Then do the operations you just did on paper to
see if you get them right.

A=The output you get with the code above:

1090519040
41000000
-------------------------------------------------------
Convert name to be in the style of another and see if the code
keeps working.

A=works the same only with ASCII values




*/