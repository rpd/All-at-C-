 /* sphere.c A C program to calculate the volume of a sphere V=4/3 πr3*/

   #include <stdio.h>                      /* Include header file for printf. */
   #define PI 3.141592654                  /* Define a constant. */

   float sphere(int radius);               /* Function prototype. Tells compiler to expect to find a function named sphere */

   int main(void)                          /* Main function. 
                                              Every C program needs a main function as this defines the start of the program. 
                                              Takes no parameters */
   {
     float vol;                            /* Declare a variable named vol with a type floating point */
     int radius = 5;                       /* Declare and initialize variable named radius with int type */
     vol = sphere(radius);                 /* Expression or statement to call sphere function and assign its value to vol variable*/
     printf( "Volume: %f\n", vol );        /* Print the vol variable to screen*/
     return 0;                             /* Finish the main function, by returning value 0 to the OS, ndicating successful program end*/
   }

   float sphere(int radius)                /* Function declaration: Creates function named sphere, that takes one parameter (argument).
                                            The sphere function calculates the volume of the sphere and stores the value in the 
                                            variable named result*/
   { 
     float result;                                   /* Local variable declaration (variable named result). */
     result = 4 * PI * radius * radius * radius / 3; /* Expression to calculate value of result variable */
     return(result);                                 /* Result value returned to main program. */
       
   }
