#ifndef ARRAY_H
# define ARRAY_H

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>


/*  removes all duplicates inside of 'nums'.
    'nums' has to be sorted. 
    returns Number of ints left after removing dups.
*/
int removeDuplicates(int* nums, int numsSize);

/*
    strlen > 0 required.    
    Also no null safeguard since strlen > 0 
    is a given according to the suject.
*/
bool isPalindrome(char * s);
#endif