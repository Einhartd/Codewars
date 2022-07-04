#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *makeUpperCase (char *string)
{
  char *p = (char*)calloc(strlen(string), sizeof(char));
  for (int i = 0; i < strlen(string); i++)
    {
      if (string[i] < 123 && string[i] > 96)
        {
          p[i] = string[i] - 32;
        }
      else
        {
          p[i] = string[i];
        }
    }
  return p;
}