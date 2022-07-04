#include <stdbool.h>
#include <string.h>

bool solution(const char *string, const char *ending)
{
    int slen = strlen(string);
    int elen = strlen(ending);

    if (slen < elen)
        return false;

    int y = 0;
    for (int x = slen - elen; x <= slen; ++x)
    {
        if (string[x] != ending[y])
        {
            return false;
        }
        ++y;
    }
    return true;