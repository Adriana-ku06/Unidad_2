#include <stdio.h>
int main(int argc, char *argv[])
      {
      int areas[] = {100, 12, 13, 14, 20};
      /*Try assigning to elements in the areas array with areas[0] =
100; and similar.*/
      char name[] = "CARL";//Try assigning to elements of name and full_name
      char full_name[] = {
      'C', 'A', 'R','L',
      ' ', 'A', '.', ' ',
      'S', 'h', 'a', 'w', '\0'
      };
     
      printf("The size of an int: %ld\n", sizeof(int));
      printf("The size of areas (int[]): %ld\n",
      sizeof(areas));


      printf("The number of ints in areas: %ld\n",
      sizeof(areas) / sizeof(int));
      printf("The first area is %d, the 2nd %d.\n",
      areas[0], areas[1]);

      printf("The size of a char: %ld\n", sizeof(char));
      printf("The size of name (char[]): %ld\n",
      sizeof(name));


      printf("The number of chars: %ld\n",
      sizeof(name) / sizeof(char));
      printf("The size of full_name (char[]): %ld\n",
      sizeof(full_name));


      printf("The number of chars: %ld\n",
      sizeof(full_name) / sizeof(char));
      printf("name=\"%s\" and full_name=\"%s\"\n",
      name, full_name);
      return 0;
}

/*
EXTRA CREDIT
Try assigning to elements in the areas array with areas[0] =
100; and similar.
------------------------------------------------
Try assigning to elements of name and full_name .
----------------------------------------------------------------------------
Try setting one element of areas to a character from name .
----------------------------------------------------------------------------------------------
Go search online for the different sizes used for integers on
different CPUs.
A=
unsigned int --	16--	0 a 65535
signed int 	16	-32768 a 32767
short int	16	-32768 a 32767
unsigned short int	16	0 a 65535
signed short int	16	-32768 a 32767
long int	32	-2147483648 a 2147483647
signed long int	32	-2147483648 a 2147483647
unsigned long int	32	0 a 4294967295

*/
