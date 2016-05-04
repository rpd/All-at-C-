/*This is the standard first C program "Hello world" (changed slightly to "Hello GITHUB").
Use any text editor to create this file with the file extension.c and a C compiler is needed 
to compile it into a program file (binary/exe).
THIS IS A MULTI-LINE C comment*/

#include <stdio.h> 
// This is a preprocessor directive indicate by the hash and keyword include. 
//It adds the C standard library header stdio.h This gives input and output capability to the screen with functions such as prinf
//These are single line comments (ignored by the compiler and used as programmer notes and comments

int main(void){

printf("Hello GITHUB\n");

return 0;

}


/* Main is a keyword reserved for a special C function "main". This is the special function a C compiler looks for in a C program
and it starts the program with this as the first function to be run. Without a main function, a C program cannot start or run! 
Here the main function contains a printf statement that will run the printf function, to add the message 
"Hello GITHUB" to the screen. \n is a format specifier escape sequence to add a newline. "Hello GITHUB" forms a string of characters
(be aware characters can have integer values! This printf statement actually returns an integer value.).

The main function is designated as an "int" type. This means it returns an integer value. It has "void" as it's parameter arguments
which basically means the parameter arguments list is empty (which is the meaning of void). Functions can contain several parameter 
arguments (void is just one possibility).

return 0; directs the function to return the value 0 to the operating system which effectively means the program completes 
successfully. Most C compilers require this. This is the usual first C program to start to learn C programming with!*/
