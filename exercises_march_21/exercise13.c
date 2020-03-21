//Exercise 13: Switch Statement
#include <stdio.h>
int main(int argc, char *argv[])
{
            if(argc != 2) {
            printf("ERROR: You need one argument.\n");
            // this is how you abort a program
            return 1;
            }
            int i = 0;
            for(i = 0; argv[1][i] != '\0'; i++) {
            char letter = argv[1][i];
            switch(letter) {
            case 'a':
            case 'A':
            printf("%d: 'A'\n", i);
            break;
            case 'e':
            case 'E':
            printf("%d: 'E'\n", i);
            break;
            case 'i':
            case 'I':
            printf("%d: 'I'\n", i);
            break;
            case 'o':
            case 'O':
            printf("%d: 'O'\n", i);
            break;
            case 'u':
            case 'U':
            printf("%d: 'U'\n", i);
            break;
            case 'y':
            case 'Y':
            if(i > 2) {
            // it's only sometimes Y
                printf("%d: 'Y'\n", i);
            }
            break;
            default:
            printf("%d: %c is not a vowel\n", i, letter);
            }
            }

            return 0;
}

/*
Extra Credit
Write another program that uses math on the letter to convert it
to lowercase, and then remove all the extraneous uppercase
letters in the switch.
#include <stdio.h>
int main(int argc, char *argv[])
{
            if(argc != 2) {
            printf("ERROR: You need one argument.\n");
            // this is how you abort a program
            return 1;
            }
            int i = 0;
            for(i = 0; argv[1][i] != '\0'; i++) {
            char letter = argv[1][i];
            switch(letter) {
            case 'a':
            case 'A':
            printf("%d: 'a'\n", i);
            break;
            case 'e':
            case 'E':
            printf("%d: 'e'\n", i);
            break;
            case 'i':
            case 'I':
            printf("%d: 'i'\n", i);
            break;
            case 'o':
            case 'O':
            printf("%d: 'o'\n", i);
            break;
            case 'u':
            case 'U':
            printf("%d: 'u'\n", i);
            break;
            case 'y':
            case 'Y':
            if(i > 2) {
            // it's only sometimes Y
                printf("%d: 'y'\n", i);
            }
            break;
            default:
            printf("%d: %c is not a vowel\n", i, letter);
            }
            }

            return 0;
}


----------------------------
Use the ',' (comma) to initialize letter in the for-loop .
Make it handle all of the arguments you pass it with yet another
for-loop .
Convert this switch-statement to an if-statement . Which do
you like better?

#include <stdio.h>
int main(int argc, char *argv[])
{
  
            if(argc != 2) {
            printf("ERROR: You need one argument.\n");
            // this is how you abort a program
            return 1;
            }
            int i = 0;
            for(i = 0; argv[1][i] != '\0'; i++) {
            char letter = argv[1][i];

        if (letter= 'M'){

            switch(letter) {
            case 'a':
            case 'A':
            printf("%d: 'a'\n", i);
            break;
            case 'e':
            case 'E':
            printf("%d: 'e'\n", i);
            break;
            case 'i':
            case 'I':
            printf("%d: 'i'\n", i);
            break;
            case 'o':
            case 'O':
            printf("%d: 'o'\n", i);
            break;
            case 'u':
            case 'U':
            printf("%d: 'u'\n", i);
            break;
            case 'y':
            case 'Y':
            if(i > 2) {
            // it's only sometimes Y
                printf("%d: 'y'\n", i);
            }
            break;
            default:
            printf("%d: %c is not a vowel\n", i, letter);
            }
            }}

            if(letter= 'm'){

switch(letter) {
            case 'a':
            case 'A':
            printf("%d: 'A'\n", i);
            break;
            case 'e':
            case 'E':
            printf("%d: 'E'\n", i);
            break;
            case 'i':
            case 'I':
            printf("%d: 'I'\n", i);
            break;
            case 'o':
            case 'O':
            printf("%d: 'O'\n", i);
            break;
            case 'u':
            case 'U':
            printf("%d: 'U'\n", i);
            break;
            case 'y':
            case 'Y':
            if(i > 2) {
            // it's only sometimes Y
                printf("%d: 'Y'\n", i);
            }
            break;
            default:
            printf("%d: %c is not a vowel\n", i, letter);
            }


            }

            return 0;
}



In the case for 'Y' I have the break outside the if-statement .
What's the impact of this and what happens if you move it
inside the if-statement . Prove to yourself that you're right.
 si se sale fuera del if, el valor no es tomado en consideracion por  hace algo que ya esta predeterminado por el codigo.


*/