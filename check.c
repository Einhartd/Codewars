#include <stdio.h>
#include <string.h>
#include <stdlib.h>




int main(int argc, char const *argv[])
{
    char test1[19];     // char *test1 - tak nie zadziala
    scanf("%s", test1);
    printf("%s", test1);
    int len = strlen(test1);
    printf("%d", len);
    return 0;
}   