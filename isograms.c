#include <stdbool.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

bool IsIsogram (const char *string) 
{
  int c = 0;
  for (int i = 0; i < strlen(string); i++)
    {
    for (int j = i + 1; j < strlen(string); j++)
      {
      if(string[j] == string[i] || string[j] + 32 == string[i] || string[j] == string[i] + 32)
        {
          c = 1;
          return false;
        }
      }
    }
    if(c != 1)
      {
      return true;
    }   
}