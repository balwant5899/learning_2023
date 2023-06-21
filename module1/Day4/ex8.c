#include<stdio.h>
#include<stdlib.h>
#include <string.h>
void splitstring(const char *timestring,unsigned *hours,unsigned *minutes,unsigned *seconds)
{
    char *token =strtok((char*)timestring,":");
    if(token!=NULL)
    {
        *hours = strtoul(token, NULL, 10);
        token = strtok(NULL, ":");
        if(token!=NULL)
        {
             *minutes = strtoul(token, NULL, 10);
            token = strtok(NULL, ":");

        
        if(token!=NULL)
        {
             *seconds = strtoul(token, NULL, 10);
            token = strtok(NULL, ":");

        }
    }
    }


}
unsigned int computeTotalSeconds(unsigned int hours, unsigned int minutes, unsigned int seconds) {
    return hours * 3600u + minutes * 60u + seconds;
}
int main()
{
    char timestring[]="12:34:56";
    unsigned int hours, minutes, seconds;
    splitstring(timestring,&hours,&minutes,&seconds);
     unsigned int totalSeconds = computeTotalSeconds(hours, minutes, seconds);
    printf("Total seconds: %u\n", totalSeconds);
}