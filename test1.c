#include <stdlib.h>
#include <stdio.h>
#include <string.h>

const char *number_to_string(int number)
{
    char *buf;
    sprintf(buf, "%d", number);
    int strLength = strlen(buf);
    char *pointer = (char *)calloc((strLength+1), sizeof(char));
    strcpy(pointer, buf);
    return pointer;
}

int main(int argc, char const *argv[])
{
    printf("\nz dynamicznej alokacji %s", number_to_string(20));
    return 0;
}
