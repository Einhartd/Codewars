#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*
    int main(int argc, char const *argv[])
    {
        char cegla[10] = "gowno";
        printf("%s", strrev(cegla));
        return 0;
    }
*/

// function definition of the revstr()
void revstr(char *str1)
{
    // declare variable
    int i, len, temp;
    len = strlen(str1); // use strlen() to get the length of str string

    // use for loop to iterate the string
    for (i = 0; i < len / 2; i++)
    {
        // temp variable use to temporary hold the string
        temp = str1[i];
        str1[i] = str1[len - i - 1];
        str1[len - i - 1] = temp;
    }
}