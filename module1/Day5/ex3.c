/*Write a program using structures to calculate the
 difference between two time periods using a user-defined function*/
 
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct time_period
 {
    int hour;
    int minutes;
    int seconds; 
 };
 void splittimestring(char *timestring1,char *timestring2,struct time_period *time1,struct time_period *time2)
 {
    char *token =strtok((char*)timestring1,":");
    if(token!=NULL)
    {
        time1->hour = strtoul(token, NULL, 10);
        token = strtok(NULL, ":");
        if(token!=NULL)
        {
             time1->minutes = strtoul(token, NULL, 10);
            token = strtok(NULL, ":");

        
        if(token!=NULL)
        {
             time1->seconds = strtoul(token, NULL, 10);
            token = strtok(NULL, ":");

        }
    }
    }
    char *token1 = strtok((char *)timestring2, ":");
if (token1 != NULL) {
    time2->hour = strtoul(token1, NULL, 10);
    token1 = strtok(NULL, ":");
    if (token1 != NULL) {
        time2->minutes = strtoul(token1, NULL, 10);
        token1 = strtok(NULL, ":");
        if (token1 != NULL) {
            time2->seconds = strtoul(token1, NULL, 10);
            token1 = strtok(NULL, ":");
        }
    }
}

 }
 void finddiffrence(struct time_period *t1,struct time_period *t2,struct time_period *diff)
 {
    diff->hour=t1->hour-t2->hour;
    diff->minutes=t1->minutes-t2->minutes;
    diff->seconds=t1->seconds-t2->seconds;
 }

int main()
{
    struct time_period time1,time2,diff;
    char timestring1[]="4:20:12";
    char timestring2[]="5:20:12";
    splittimestring(timestring1,timestring2,&time1,&time2);
    finddiffrence(&time1,&time2,&diff);
    printf("\ndiffrence in hour :%d",   abs(diff.hour));
    printf("\ndiffrence in minutes :%d",abs(diff.minutes));
    printf("\ndiffrence in seconds :%d",abs(diff.seconds));
}