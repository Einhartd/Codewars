#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char *DuplicateEncoder(char *test)
{
    char *new = (char *)calloc(strlen(test), sizeof(char));
    char *answer = (char *)calloc(strlen(new), sizeof(char));
    strcpy(new, test);
    int j, k;
    int checker = -1;
    int len = strlen(new);

    for (int i = 0; i < len; i++)
    {
        new[i] = tolower(new[i]);
    }
    for (j = 0; j < len; j++)
    {
        checker = -1;
        for (k = 0; k < len; k++)
        {
            if (new[j] == new[k])
            {
                checker++;
            }
        }
        if (checker == 0)
        {
            answer[j] = '(';
        }
        else if (checker != 0)
        {
            answer[j] = ')';
        }
    }
    free(new);
    return answer;
}

int main(int argc, char const *argv[])
{
    char *test = "gowno";
    printf("%s", DuplicateEncoder(test));
    return 0;
}
