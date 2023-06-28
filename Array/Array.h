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
*/
bool isPalindrome(char * s);

/* checks if s is an Anagram of t*/
bool isAnagram(char * s, char * t);

#endif