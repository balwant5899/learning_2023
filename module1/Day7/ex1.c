// Write a C program to copy a file using file operations.
#include <stdio.h>
#include <stdlib.h>

int main()
{
   int num;
   FILE *fptr;
   FILE *ptr2;

   fptr=fopen("rr.txt","r");
   ptr2 = fopen("destination.txt", "w");

  char ch;
  while((ch=fgetc(fptr))!=EOF)
  {
    fputc(ch,ptr2);
    
  }
  fclose(fptr);
  fclose(ptr2);
   return 0;
}