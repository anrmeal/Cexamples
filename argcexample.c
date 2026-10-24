/*Made by Anthony
This program takes argument from command line when the program is called.
The process is ./<programname> <arg1> <arg2> <...> <argn>
where <argn> is some string.

argc is a integer that stores the number of arguments
argv[] is a string array with each argument stored as an index (of argc).
Notice; argv can accept numbers AND strings/characters.
*/

#include <stdio.h>

int main(int argc, char* argv[]) {

    // Prints the number of arguments
  	printf("argc = %d\n", argc); //note: the null character at the end adds 1 to the count.

    // Prints all of argv in order.
  printf("argv[0] is always = %s \n", argv[0]);
    for (int i = 1; i < argc; i++) {
        printf("argv[%d] = %s \n", i, argv[i] );
    }

    return 0;
}