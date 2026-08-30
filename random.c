// Danny Mei 
// CIS 3207: Introduction to System Programming and Operating Systems
// August 30, 2026
// Assignment 1: Introduction to Git & GitHub
// This file creates a program that returns a string of random characters. 
#include <stdio.h>
#include <time.h>


char* rand_string(char* string, size_t length)
{
    for (int i = 0; i < length; i++){       //loop goes through each index of the string 
        string[i] = rand() % (122 - 97 + 1) + 97;       //assigns a random lowercase character based on ASCII value to the string at index i
    }

    return string; 
}