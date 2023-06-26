#include "Array.h"

bool isPalindrome(char *s){
    int str_len = strlen(s);
    char str[str_len];
    int j = 0;

    if (!str_len <= 1)
        return (true);
    for (int i = 0; i < str_len; i++)
    {
        s[i] = (char)tolower(s[i]);
        if (isalnum(s[i]))
            str[j++] = s[i];
    }
    str[j] = 0;
    str_len = strlen(str) - 1;
    j = 0;
    while (j != str_len)
    {
        if (str[j] != str[str_len])
            return (false);
        j++;
        str_len--;
    }
    return (true);
}