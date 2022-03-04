/**
 * @file calendar_operations.h
 * @Mohammed Nadeem.M
 * @brief Header file for Calculator application with Arithmetic operations
 *
 */

#ifndef __CALENDAR_OPERATIONS_H__
#define __CALENDAR_OPERATIONS_H__

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nmonth,nyr,ch;
    enteryear:
    while(1)
    {
        printf("Enter year and month(number):" );
        scanf("%d%d",&nyr,&nmonth);
        if(nyr<1945)
        {
        printf("\n\t Please enter year above 1945\n");
        continue;
        }
        else
        {
           
            calendar(nyr,nmonth);
        }
        while(1)
        {
        gotoxy(20,20);printf("(*) Use LEFT, RIGHT, UP and DOWN arrow.");
        gotoxy(20,22);printf("(*) Press P to go to particular year and month.");
        gotoxy(20,24);printf("(*) Press ESC to Exit.");
        ch=getkey();
        switch(ch)
        {
        case 80:
                   if(nmonth==12)
                 {
                  nmonth=1;
                  nyr++;
                }
                else
                {
                    nmonth++;
                }
                calendar(nyr,nmonth);
                break;
        case 77: 
         
                nyr++;
                calendar(nyr,nmonth);
                break;
        case 72: 
        
                if(nmonth==1)
                {
                   
                    nyr--;
                    nmonth=12;
                }
                else
                    nmonth--;
                calendar(nyr,nmonth);
                break;
        case 75: 
           
                if(nyr==1945)
                {
                   
                  gotoxy(15,2);printf("Year below 1945 not available");
                }
                else
                {
                    nyr--;
                    calendar(nyr,nmonth);
                }

                break;
        case 27:
          
                system("cls");
                gotoxy(50,14);printf("Exiting program.\n\n\n\n\n");
                exit(0);
        case 112:
           
                system("cls");
                goto enteryear;
        }
        }
        break;

    }
    getch();
    return 0;

#endif  /* #define __CALCENDAR_OPERATIONS_H__ */
