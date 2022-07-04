#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char *removeSymbols(char *str)
{
    int i, j;
    for (i = 0; str[i]; ++i)
    {
        while (!((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z') || str[i] == '\0'))
        {
            for (j = i; str[j]; ++j)
            {
                str[j] = str[j + 1];
            }
            str[j] = '\0';
        }
    }
    return str;
}

char *removeRepeatingChars(char *str)
{
    int i, j;
    int len = strlen(str);
    for (i = 0; i < len; i++)
    {
        for (j = i + 1; j < len; j++)
        {
            if (str[i] == str[j])
            {
                for (j = i; j < len; j++)
                {
                    str[j] = str[j + 1];
                }
                len--;
                i--;
            }
        }
    }
    return str;
}

int main()
{
    char str[50];
    printf("\n\t Enter a string : ");
    gets(str);
    for (int i = 0; str[i]; i++)
    {
        str[i] = tolower(str[i]);
    }
    printf("\ndlugosc: %d", strlen(str));
    removeSymbols(str);
    printf("\ndlugosc2: %d", strlen(str));
    printf("%s", str);
    removeRepeatingChars(str);
    printf("\n%s", str);
    printf("\ndlugosc 3: %d", strlen(str));
    return 0;
}


