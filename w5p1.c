/*
*****************************************************************************
                          Workshop - #5 (P1)
Full Name  : 
Student ID#: 
Email      : 
Section    : 
Authenticity Declaration:
I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider. This submitted
piece of work is entirely of my own creation.
*****************************************************************************
*/




#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MIN_YEAR 2012
#define MAX_YEAR 2022

int main(){
    const int JAN = 1;
    const int DEC = 12;
    int month;
    int year;
    int first_day = 1;


    printf("General Well-being Log\n");
    printf("======================\n");

    
    do{
        printf("set the year and month for the well being log (yyyy mm): ");
        scanf("%d %d", &year, &month);

        if((year>MAX_YEAR||year<MIN_YEAR)){
            printf("ERROR: The year must be between 2012 and 2022 inclusive\n");
        }

        else if ((month<JAN || month > DEC)){
            printf("ERROR: Jan.(1) - Dec.(12)\n");
        };

    }while((month<JAN || month > DEC) || (year>MAX_YEAR||year<MIN_YEAR));

    printf("*** Log date set! ***\n");


   switch (month){
       case 1:
       printf("Log starting date: %d-JAN-1\n", year);
       break;

       case 2:
       printf("Log starting date: %d-FEB-1\n", year);
       break;

       case 3:
       printf("Log starting date: %d-MAR-1\n", year);
       break;

       case 4:
       printf("Log starting date: %d-APR-1\n", year);
       break;

       case 5:
       printf("Log starting date: %d-MAY-1\n", year);
       break;

       case 6:
       printf("Log starting date: %d-JUN-1\n", year);
       break;

       case 7:
       printf("Log starting date: %d-JUL-1\n", year);
       break;

       case 8:
       printf("Log starting date: %d-AUG-1\n", year);
       break;

       case 9:
       printf("Log starting date: %d-SEP-1\n", year);
       break;

       case 10:
       printf("Log starting date: %d-OCT-1\n", year);
       break;

       case 11:
       printf("Log starting date: %d-NOV-1\n", year);
       break;

       case 12:
       printf("Log starting date: %d-DEC-1\n", year);
       break;
   }
    
   return 0;
}