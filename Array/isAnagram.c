#include "Array.h"

static int count_chars(char *str, char c)
{
    int count = 0;
    for (int i = 0; str[i]; i++)
    {
        if (str[i] == c)
            count++;
    }
    return (count);
}

bool isAnagram(char * s, char * t)
{
    if (!s || !t || strlen(s) != strlen(t))
        return (false);
    for (int i = 0; s[i]; i++)
        if (count_chars(s, s[i]) != count_chars(t, s[i]))
            return (false);
    return (true);
}
