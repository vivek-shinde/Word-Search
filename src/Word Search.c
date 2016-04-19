/*
 ============================================================================
 Name        : Word.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STR_LENGTH 16

char buf1[MAX_STR_LENGTH];
char buf2[MAX_STR_LENGTH];
char buf3[MAX_STR_LENGTH];

char inputString [MAX_STR_LENGTH];

char firstRowForward[4];
char secondRowForward[4];
char thidRowForward[4];
char fourthRowForward[4];

char firstRowBackward[4];
char secondRowBackward[4];
char thidRowBackward[4];
char fourthRowBackward[4];

char diagonalTopToBottom1[2];
char diagonalTopToBottom2[2];

char diagonalTopToBottom3[3];
char diagonalTopToBottom4[3];

char diagonalTopToBottom5[4];

char diagonalBottomToTop1[2];
char diagonalBottomToTop2[2];

char diagonalBottomToTop3[3];
char diagonalBottomToTop4[3];

char diagonalBottomToTop5[4];

int main( int argc, char *argv[] )
{
   char strlength = 0;
   FILE *ptrFile1 = 0;
   FILE *ptrFile2 = 0;
   char index = 0;

   printf("Program name %s\n", argv[0]);

   if( argc == 2 ) {
      printf("The argument supplied is %s\n", argv[1]);
      strlength = strlen( argv[1]);
      if (strlength != MAX_STR_LENGTH)
      {
    	  printf("Not expected string");
      }
   }
   else if( argc > 2 ) {
      printf("Too many arguments supplied.\n");
   }
   else {
      printf("One argument expected.\n");
   }

   printf ("%s",argv[1]);

   ptrFile1 = fopen (argv[1], "rt");

   while(fgets(buf1, 5, ptrFile1) != NULL)
     {
         printf("\n%s\n",buf1);
         buf2[index++] = buf1[0];
         buf2[index++] = buf1[1];
         buf2[index++] = buf1[2];
         buf2[index++] = buf1[3];
     }

     fclose(ptrFile1);  /* close the file prior to exiting the routine */

     printf("Copied buffer is \n%s\n",buf2);

     /* copy the string received in reverse way */
     for (index = 0 ; index < MAX_STR_LENGTH ; index++ )
     {
    	 buf3[16 - index] = buf2[index];
     }

     ptrFile2 = fopen ("/usr/share/dict/words", "rt");

     /* Now lets organize the received buffer in different ways */


     strncpy (firstRowForward, buf2,4);
     strncpy (secondRowForward, buf2+4, 4);
     strncpy (thidRowForward,buf2+8, 4 );
     strncpy (fourthRowForward, buf2+12, 4);

     strncpy (firstRowBackward, buf2,4);
     strncpy (secondRowBackward, buf2+4, 4);
     strncpy (thidRowBackward,buf2+8, 4 );
     strncpy (fourthRowBackward, buf2+12, 4);


     diagonalTopToBottom1[0] = buf2[1];
     diagonalTopToBottom1[1] = buf2[4];

     diagonalTopToBottom2[0] = buf2[11];
     diagonalTopToBottom2[1] = buf2[14];

     diagonalTopToBottom3[0] = buf2[2];
     diagonalTopToBottom3[1] = buf2[5];
     diagonalTopToBottom3[2] = buf2[8];

     diagonalTopToBottom4[0] = buf2[7];
     diagonalTopToBottom4[1] = buf2[10];
     diagonalTopToBottom4[2] = buf2[13];

     diagonalTopToBottom5[0] = buf2[3];
     diagonalTopToBottom5[1] = buf2[6];
     diagonalTopToBottom5[2] = buf2[9];
     diagonalTopToBottom5[3] = buf2[12];

     //diagonalBottomToTop1[2];
     //diagonalBottomToTop2[2];

     //diagonalBottomToTop3[3];
     //diagonalBottomToTop4[3];

     //diagonalBottomToTop5[4];

     while(fgets(buf1, 5, ptrFile1) != NULL)
     {
        if (!strcmp (ptrFile2,firstRowForward))
        {
                // found a matching string
        }
        else if (!strcmp(ptrFile2, strcat(firstRowForward,diagonalTopToBottom5)))
        {
        	// found a matching string
        }

     }

   return EXIT_SUCCESS;

}
