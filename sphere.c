   /* sphere.c A pC program to calculate the volume of a sphere */

   #include <stdio.h>                /* Include header file for printf. */
   #define PI 3.141592654            /* Define a constant. */

   float sphere( int rad );          /* Function prototype. */

   int main()                       /* Main program. */
   {
     float vol;                      /* Declare variable named vol. */
     int radius = 3;                 /* Declare and initialize variable named radius. */
     vol = sphere( radius );         /* Call function, get result, print it. */
     printf( "Volume: %f\n", vol );
     return 0;
   }

   float sphere( int rad )           /* Function named sphere takes one parameter (argument). */
   { 
     float result;                   /* Local variable declaration. */
     result = rad * rad * rad;
     result = 4 * PI * result / 3;
     return( result );               /* Result returned to main program. */
   }
