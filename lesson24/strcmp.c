/*
 ********************************************************************************
 *      Copyright (C), 2015-2115, Xhy Tech. Stu.
 *
 *      FileName   : strcmp.c
 *
 *      Author     : X h y
 *
 *      Version    : 1.0
 *
 *      Date       : 09-06-2015
 *
 *      Description: just for test (May be wrong)
 ********************************************************************************
 */
 
/**
 * \file
 * \brief  strcat
 */

#include <stdio.h>
#include <string.h>
#include <assert.h>

#define DIV_LINE printf("---------------------------\
---------------------------\n\n");

int strcmp1(const char* str1, const char* str2)
{
    //while (*str1++ == *str2++)  // *str++ another time
    while (*str1 == *str2) {
        if ('\0' == *str1)
            return 0;
        str1++;
        str2++;
    }

    return *str1 - *str2;
} 

int strcmp2(const char* str1, const char* str2)
{
    for (; *str1 == *str2; ++str1, ++str2) {
        if ('\0' == *str1)
            return 0;
    }

    return ((*str1 > *str2) ? (+1) : (-1));
} 

int strcmp3(const char* str1, const char* str2)
{
    int ret = 0;

    while ( !(ret = *str1 - *str2) && str1) {
        *str1++;
        *str2++;
    }

    if (ret > 0) {
        return +1;
    } else if (ret < 0) {
        return -1;
    }

    return 0;
} 
int main(void)
{     
    char a[3] = {'H', 'e', '\0'};   
    char b[]  = {'H', 'e', 'o', '\0'};

    char* c = (char*)"xhy";
    char* d = (char*)"is nihao !";

    printf("strcmp (a,  b) = %d\n", strcmp(a, b));
    printf("strcmp1(a,  b) = %d\n", strcmp1(a, b));
    printf("strcmp2(a,  b) = %d\n", strcmp2(a, b)); 
    printf("strcmp3(a,  b) = %d\n", strcmp3(a, b)); 
    DIV_LINE;

    printf("strcmp (c,  d) = %d\n", strcmp(c, d));
    printf("strcmp1(c,  d) = %d\n", strcmp1(c, d));
    printf("strcmp2(c,  d) = %d\n", strcmp2(c, d)); 
    printf("strcmp3(c,  d) = %d\n", strcmp3(c, d));  
    DIV_LINE;

    return 0;
}

/* end of file */
